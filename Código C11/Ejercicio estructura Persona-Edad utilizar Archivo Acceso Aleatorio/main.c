/*
Ejercicio de estructura 'Persona' con un miembro 'edad', que utiliza un archivo de Acceso aleatorio

Asumiendo que la estructura siguiente:

struct persona {
	char apellido[15];
	char nombre[15];
	char edad[4];
};

ha sido definida y que el archivo ya est� abierto para escritura.

a) Inicializar el archivo "nombreedad.dat" para que haya 100 registros con apellido = "sin-asignar",
nombre = "" y edad = "0".
b) Nuevo registro: Ingresar 10 apellidos, nombres y edades, y escr�balos en el archivo.
c) Actualizar un registro; si no hay informaci�n en el registro, d�gale al usuario "Registro - Sin informaci�n".
d) Eliminar un registro que tenga informaci�n reinicializando ese registro en particular.
*/

#include <stdio.h>
#include <stdlib.h>
#include <cerrno>

//Definir la estructura persona con sus campos miembro correspondientes
struct persona {
	char apellido[15];
	char nombre[15];
	unsigned int edad;
};

//Funciones prototipo
unsigned int introducirEleccion(void);  //Funci�n donde el usuario eligir� una acci�n a realizar en el programa
void nuevoRegistro(FILE *aPtr);  //Funci�n que crea un nuevo registro. Recibe un puntero que apunta al archivo
void actualizarRegistro(FILE *aPtr);  //Funci�n que actualiza un registro. Recibe un puntero que apunta al archivo
void eliminarRegistro(FILE* aPtr);  //Funci�n que elimina un registro. Recibe un puntero que apunta al archivo

int main(void) {

	FILE* aPtr;  //puntero de tipo archivo que apunta a 'cuentas.dat'

	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "nombreedad.dat", "rb+")) != NULL) {  //rb+ Abrir archivo para actualizaci�n (lectura y escritura).
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {

		//Crear unaPersona con la informaci�n por defecto
		struct persona unaPersona = { "sin-asignar", "", 0 };

		//Se crean 100 registros con la informaci�n por defecto asignada en la l�nea anterior
		for (unsigned int i = 1; i <= 100; ++i) {
			//La llamada a la funci�n fwrite anterior escribe un �nico entero en un archivo, 
			//por lo que el tercer argumento es 1 (como si se estuviera escribiendo un elemento de una matriz).
			fwrite(&unaPersona, sizeof(struct persona), 1, aPtr);
		}//end-for

		fclose(aPtr);  //Cerrar el archivo

		unsigned int eleccion;  //elecci�n seleccionada por el usuario

		//permitir al usuario elegir una opci�n
		while ((eleccion = introducirEleccion()) != 4) {
			switch (eleccion) {
				//crear un archivo de texto desde un archivo de registro
			case 1:
				nuevoRegistro(aPtr);
				break;
				//actualizar registro
			case 2:
				actualizarRegistro(aPtr);
				break;
				//crear registro
			case 3:
				eliminarRegistro(aPtr);
				break;
				//eliminar registro existente
			default:
				puts("Eleccion Incorrecta");
				break;
			}//end-switch
		}//end-while
	}//end-else
}//end-program

//permitir al usuario ingresar la opci�n del men�
unsigned int introducirEleccion(void)
{
	//mostrar las opciones disponibles
	printf("%s", "\nIntroduzca su eleccion\n"
		"1 - Introducir un nuevo registro\n"
		"2 - Actualizar un registro\n"
		"3 - Eliminar un registro\n"
		"4 - salir del programa\n? ");

	unsigned int eleccionMenu; //variable para almacenar la elecci�n seleccionada por el usuario
	scanf_s("%u", &eleccionMenu); //recibir la elecci�n tomada por el usuario
	return eleccionMenu;
}

//crear e insertar registro
void nuevoRegistro(FILE* aPtr) {

	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "nombreedad.dat", "rb+")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");

	//mover puntero de archivo para corregir el registro en el archivo
	//La estrucutura siempre comienza en la posici�n 0, con lo cual hay que restar 1 al valor de cuenta introducido
	//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
	//SEEK_END establece el puntero al final del archivo
		fseek(aPtr, 0, SEEK_END);

		//Crear datosCliente con la informaci�n por defecto
		struct persona unaPersona = { "sin-asignar", "", 0 };

		//Se crean 3 registros con la informaci�n por defecto asignada en la l�nea anterior
		for (unsigned int i = 1; i <= 3; ++i) {
			printf("%s", "\nIntroduzca apellido: ");
			fscanf_s(stdin, "%14s", unaPersona.apellido, _countof(unaPersona.apellido));  //_countof Calcula el n�mero de elementos de una matriz asignada est�ticamente.
			printf("%s", "\nIntroduzca nombre: ");
			fscanf_s(stdin, "%14s", unaPersona.nombre, _countof(unaPersona.nombre));  //_countof Calcula el n�mero de elementos de una matriz asignada est�ticamente.
			printf("%s", "\nIntroduzca edad: ");
			fscanf_s(stdin, "%d", &unaPersona.edad);

			//escribir la informaci�n especificada por el usuario en el archivo
			fwrite(&unaPersona, sizeof(struct persona), 1, aPtr);
		}

		fclose(aPtr);  //Cerrar el archivo
	}
}

//actualizar edad en registro (actualizarRegistro)
void actualizarRegistro(FILE* aPtr)
{
	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "nombreedad.dat", "rb+")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");
		//obtener n�mero de cuenta a actualizar
		printf("%s", "Introduzca el numero de cuenta que desea actualizar (1 - 103): ");
		unsigned int cuenta;  //almacenar� el n�mero de cuenta introducido por el usuario
		scanf_s("%d", &cuenta);

		//mover puntero de archivo para corregir el registro en el archivo
		//La estrucutura siempre comienza en la posici�n 0, con lo cual hay que restar 1 al valor de cuenta introducido
		//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
		//SEEK_SET establece el puntero al inicio del archivo
		fseek(aPtr, (cuenta - 1) * sizeof(struct persona),
			SEEK_SET);

		//crear datosCliente con informaci�n predeterminada
		struct persona unaPersona = { 0, "", "", 0.0 };

		//leer un registro del archivo
		fread(&unaPersona, sizeof(struct persona), 1, aPtr);

		//mostrar error si la cuenta no existe
		if (unaPersona.edad == 0) {
			printf("Cuenta #%d no contiene ningun tipo de informacion.\n", cuenta);
		}
		else {  //actualizar registro
			printf("%s %s %d\n\n",
				unaPersona.apellido, unaPersona.nombre, unaPersona.edad);

			//Solicitar nuevo dato para la edad por parte del usuario
			printf("%s", "Introduzca nueva edad: ");
			unsigned int edad;  //variable almacena edad
			scanf_s("%u", &edad);
			unaPersona.edad = edad;  //actualizar edad de la cuenta

			//mover el puntero de archivo para corregir el registro en el archivo
			//La estrucutura siempre comienza en la posici�n 0, con lo cual hay que restar 1 al valor de cuenta introducido
			//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
			//SEEK_SET establece el puntero al inicio del archivo
			fseek(aPtr, (cuenta - 1) * sizeof(struct persona),
				SEEK_SET);

			//escribir registro actualizado sobre el registro antiguo del archivo
			fwrite(&unaPersona, sizeof(struct persona), 1, aPtr);
		}

		fclose(aPtr);
	}
}

//eliminar un registro existente
void eliminarRegistro(FILE* aPtr)
{
	//obtener n�mero de cuenta a eliminar
	printf("%s", "Introduzca el numero de cuenta que desea eliminar (1 - 100): ");
	unsigned int cuenta;  //almacenar� el n�mero de cuenta introducido por el usuario
	scanf_s("%d", &cuenta);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estrucutura siempre comienza en la posici�n 0, con lo cual hay que restar 1 al valor de cuenta introducido
	//por el usuario. (cuenta - 1) * sizeof(struct datosCliente) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (cuenta - 1) * sizeof(struct persona),
		SEEK_SET);

	struct persona unaPersona;  //almacena el registro le�do desde el archivo

	//leer un registro del archivo
	fread(&unaPersona, sizeof(struct persona), 1, aPtr);

	//mostrar error si la cuenta no existe
	if (unaPersona.edad == 0) {
		printf("Cuenta #%d no contiene ningun tipo de informacion.\n", cuenta);
	}
	else {  //eliminar registro
		struct persona unaPersonaEnBlanco = { 0, "", "", 0 };  //persona sin datos

		//reemplazar registro existente con registro en blanco
		fwrite(&unaPersonaEnBlanco, sizeof(struct persona), 1, aPtr);
	}
}
