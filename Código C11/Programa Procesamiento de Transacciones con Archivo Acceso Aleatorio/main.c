/*
Programa Procesamiento de Transacciones con un Archivo de Acceso aleatorio

El programa mantiene la información de la cuenta bancaria: 
actualiza las cuentas existentes, agrega nuevas cuentas, elimina cuentas 
y guarda una lista de todas las cuentas actuales en un archivo de texto 'cuentas.txt' preparado para imprimirse.
Este programa asume que se ha creado el archivo 'cuentas.dat' con datos existentes.
*/

#include <stdio.h>
#include <stdlib.h>
#include <cerrno>

//Definición de la estructura 'datosCliente'
struct datosCliente {
	unsigned int numCuenta;  //Número de cuenta
	char apellido[15];  //Apellido del titular de la cuenta
	char nombre[10];  //Nombre del titular de la cuenta		
	double saldo;  //Saldo de la cuenta
};

//Funciones protipo
unsigned int introducirEleccion(void);
void archivoTexto(FILE *leerPtr);
void actualizarRegistro(FILE *aPtr);
void nuevoRegistro(FILE *aPtr);
void eliminarRegistro(FILE *aPtr);

int main(void) {

	FILE* aPtr;  //puntero de tipo archivo que apunta a 'cuentas.dat'

	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "cuentas.dat", "rb+")) != NULL) {  //rb+ Abrir archivo para actualización (lectura y escritura).
		puts("No se pudo abrir el archivo.");
	}
	else {
		unsigned int eleccion;  //elección seleccionada por el usuario

		//permitir al usuario elegir una opción
		while ((eleccion = introducirEleccion()) != 5) {
			switch (eleccion) {
				//crear un archivo de texto desde un archivo de registro
			case 1:
				archivoTexto(aPtr);
				break;
				//actualizar registro
			case 2:
				actualizarRegistro(aPtr);
				break;
				//crear registro
			case 3:
				nuevoRegistro(aPtr);
				break;
				//eliminar registro existente
			case 4:
				eliminarRegistro(aPtr);
				break;
				//Mostrar mensaje si el usuario no selecciona una opción válida
			default:
				puts("Eleccion Incorrecta");
				break;
			}
		}

		fclose(aPtr);  //Cerrar el archivo
	}
}

//permitir al usuario ingresar la opción del menú
unsigned int introducirEleccion(void)
{
	//mostrar las opciones disponibles
	printf("%s", "\nIntroduzca su eleccion\n"
			"1 - almacenar un archivo de texto formateado de cuentas llamado\n"
				" \"cuentas.txt\" para imprimir\n"
			"2 - actualizar una cuenta\n"
			"3 - anadir una cuenta\n"
			"4 - eliminar una cuenta\n"
			"5 - salir del programa\n? ");

	unsigned int eleccionMenu; //variable para almacenar la elección seleccionada por el usuario
	scanf_s("%u", &eleccionMenu); //recibir la elección tomada por el usuario
	return eleccionMenu;
}

//crear un archivo de texto formateado para imprimir
void archivoTexto(FILE* leerPtr) {

	FILE* escrituraPtr; //puntero a archivo cuentas.txt

	//fopen() abre el archivo; sale si el archivo no pudo abrirse
	if ((fopen_s(&escrituraPtr, "cuentas.txt", "w")) != NULL) {  //w  Escribir en archivo.
		puts("No se pudo abrir el archivo.");
	}
	else {
		rewind(leerPtr); //establece el puntero al principio del archivo 'cuentas.dat'
		fprintf(escrituraPtr, "%-6s%-11s%-16s%10s\n",
			"Cuenta", "Nombre", "Apellido", "Saldo");

		//copiar todos los registros del archivo de acceso aleatorio al archivo de texto
		while (!feof(leerPtr)) {
			//crear datosCliente con información predeterminada
			struct datosCliente clienteBanco = { 0, "", "", 0.0 };

			int resultado =
				fread(&clienteBanco, sizeof(struct datosCliente), 1, leerPtr);

			//escribir un solo registro en el archivo de texto
			if (resultado != 0 && clienteBanco.numCuenta != 0) {
				fprintf(escrituraPtr, "%-6d%-11s%-16s%10.2f\n",
					clienteBanco.numCuenta, clienteBanco.nombre,
					clienteBanco.apellido, clienteBanco.saldo);
			}
		}

		fclose(escrituraPtr); //fclose() cerrar el archivo
	}
}

//actualizar saldo en registro (actualizarRegistro)
void actualizarRegistro(FILE* aPtr)
{
	//obtener número de cuenta a actualizar
	printf("%s", "Introduzca el numero de cuenta que desea actualizar (1 - 100): ");
	unsigned int cuenta;  //almacenará el número de cuenta introducido por el usuario
	scanf_s("%d", &cuenta);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estrucutura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de cuenta introducido
	//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (cuenta - 1) * sizeof(struct datosCliente),
		SEEK_SET);

	//crear datosCliente con información predeterminada
	struct datosCliente clienteBanco = { 0, "", "", 0.0 };

	//leer un registro del archivo
	fread(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);

	//mostrar error si la cuenta no existe
	if (clienteBanco.numCuenta == 0) {
		printf("Cuenta #%d no contiene ningun tipo de informacion.\n", cuenta);
	}
	else {  //actualizar registro
		printf("%-6d%-11s%-16s%10.2f\n\n",
			clienteBanco.numCuenta, clienteBanco.nombre,
			clienteBanco.apellido, clienteBanco.saldo);

		//Solicitar monto de la transacción por parte del usuario
		printf("%s", "Introduzca ingreso (+) o sacar (-): ");
		double transaccion;  //cantidad transaccion
		scanf_s("%lf", &transaccion);
		clienteBanco.saldo += transaccion;  //actualizar saldo de la cuenta

		printf("%-6d%-11s%-16s%10.2f\n",
			clienteBanco.numCuenta, clienteBanco.nombre,
			clienteBanco.apellido, clienteBanco.saldo);

		//mover el puntero de archivo para corregir el registro en el archivo
		//La estrucutura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de cuenta introducido
		//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
		//SEEK_SET establece el puntero al inicio del archivo
		fseek(aPtr, (cuenta - 1) * sizeof(struct datosCliente),
			SEEK_SET);

		//escribir registro actualizado sobre el registro antiguo del archivo
		fwrite(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);
	}
}

//eliminar un registro existente
void eliminarRegistro(FILE* aPtr)
{
	//obtener número de cuenta a eliminar
	printf("%s", "Introduzca el numero de cuenta que desea eliminar (1 - 100): ");
	unsigned int cuenta;  //almacenará el número de cuenta introducido por el usuario
	scanf_s("%d", &cuenta);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estrucutura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de cuenta introducido
	//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (cuenta - 1) * sizeof(struct datosCliente),
		SEEK_SET);

	struct datosCliente clienteBanco;  //almacena el registro leído desde el archivo

	//leer un registro del archivo
	fread(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);

	//mostrar error si la cuenta no existe
	if (clienteBanco.numCuenta == 0) {
		printf("Cuenta #%d no contiene ningun tipo de informacion.\n", cuenta);
	}
	else {  //eliminar registro
		struct datosCliente clienteEnBlanco = { 0, "", "", 0 };  //cliente en blanco

		//reemplazar registro existente con registro en blanco
		fwrite(&clienteEnBlanco, sizeof(struct datosCliente), 1, aPtr);
	}
}

//crear e insertar registro
void nuevoRegistro(FILE* aPtr) {
	//obtener número de cuenta a crear
	printf("%s", "Introduzca el numero de cuenta que desea eliminar (1 - 100): ");
	unsigned int cuenta;  //almacenará el número de cuenta introducido por el usuario
	scanf_s("%d", &cuenta);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estrucutura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de cuenta introducido
	//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (cuenta - 1) * sizeof(struct datosCliente),
		SEEK_SET);

	//crear datosCliente con información predeterminada
	struct datosCliente clienteBanco = { 0, "", "", 0.0 };

	//leer un registro del archivo
	fread(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);

	//mostrar error si la cuenta no existe
	if (clienteBanco.numCuenta == 0) {
		printf("Cuenta #%d no contiene ningun tipo de informacion.\n", cuenta);
	}
	else {  //crear registro
		//usuario introduce nombre, apellido y saldo
		printf("%s", "\nIntroduzca nombre: ");
		fscanf_s(stdin, "%9s", clienteBanco.nombre, _countof(clienteBanco.nombre));  //_countof Calcula el número de elementos de una matriz asignada estáticamente.
		printf("%s", "\nIntroduzca apellido: ");
		fscanf_s(stdin, "%14s", clienteBanco.apellido, _countof(clienteBanco.apellido));  //_countof Calcula el número de elementos de una matriz asignada estáticamente.
		printf("%s", "\nIntroduzca saldo: ");
		fscanf_s(stdin, "%lf", &clienteBanco.saldo);

		clienteBanco.numCuenta = cuenta;

		//buscar y establecer la posición en el archivo para guardar los datos del registro 
				//especificado por el usuario
				//Se guardará en la posición indicada por el número de cuenta introducido por el usuario
				//contando desde el inicio (SEEK_SET)
		fseek(aPtr, (clienteBanco.numCuenta - 1) *
			sizeof(struct datosCliente), SEEK_SET);

		//escribir la información especificada por el usuario en el archivo
		fwrite(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);
	}
}