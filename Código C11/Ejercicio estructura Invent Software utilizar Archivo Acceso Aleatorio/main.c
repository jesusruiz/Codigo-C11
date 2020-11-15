/*
Ejercicio estructura Inventario de Software utilizar Archivo Acceso Aleatorio

Eres el propietario de una tienda de informática y necesitas mantener un inventario que te diga qué 
software tienes disponible para vender, cuántas unidades en stock tienes de cada uno de ellos 
y el precio de venta al público de cada uno de ellos. 

Escriba un programa que inicialice el archivo "software.dat" con 100 registros vacíos, 
le permita introducir los datos anteriormente citados de cada producto, 
le permita obtener un listado de todo el software que tiene disponible, 
le permita eliminar un registro de un software que ya no tiene disponible 
y le permite actualizar cualquier información en el archivo (por ejemplo su precio de venta al público o las unidades). 

El número de identificación de cada software debe ser el número de registro. 

Utilice la siguiente información para iniciar su archivo:

Registro #     Nombre          Cantidad     Precio
3              Photoshop        7           250.00
17             Office          76            99.90
24             Windows 10      50           100.00
39             3D Max           3           779.50
56             Panda           18            99.99
*/

#include <stdio.h>
#include <stdlib.h>
#include <cerrno>

//Declaración de estructura
struct software {
	char nombre[15];
	unsigned int cantidad;
	float precio;
};

//Funciones prototipo
unsigned int introducirEleccion(void);  //Función donde el usuario eligirá una acción a realizar en el programa
void introducirSoftware (FILE *aptr);
void eliminarSoftware (FILE* aptr);
void actualizarSoftware(FILE* aprt);
void listarSoftware (FILE* aptr);

//Inicio del programa
int main(void) {

	FILE *aPtr;  //Declaración de puntero a archivo

		//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "software.dat", "rb+")) != NULL) {  //rb+ Abrir archivo para actualización (lectura y escritura).
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {

		//Crear unSoftware con la información por defecto
		struct software unSoftware = {"", 0, 0.0 };

		//Se crean 100 registros con la información por defecto asignada en la línea anterior
		for (unsigned int i = 1; i <= 100; ++i) {
			//La llamada a la función fwrite anterior escribe un único entero en un archivo, 
			//por lo que el tercer argumento es 1 (como si se estuviera escribiendo un elemento de una matriz).
			fwrite(&unSoftware, sizeof(struct software), 1, aPtr);
		}//end-for

		fclose(aPtr);  //Cerrar el archivo

		unsigned int eleccion;  //elección seleccionada por el usuario

		//permitir al usuario elegir una opción
		while ((eleccion = introducirEleccion()) != 5) {
			switch (eleccion) {
				//crear un archivo de texto desde un archivo de registro
			case 1:
				introducirSoftware(aPtr);
				break;
				//actualizar registro
			case 2:
				actualizarSoftware(aPtr);
				break;
				//crear registro
			case 3:
				eliminarSoftware(aPtr);
				break;
				//eliminar registro existente
			case 4:
				listarSoftware(aPtr);
				break;
			default:
				puts("Eleccion Incorrecta");
				break;
			}//end-switch
		}//end-while
	}//end-else
}//end-program

//permitir al usuario ingresar la opción del menú
unsigned int introducirEleccion(void)
{
	//mostrar las opciones disponibles
	printf("%s", "\nIntroduzca su eleccion\n"
		"1 - Introducir un nuevo software\n"
		"2 - Actualizar un software existente\n"
		"3 - Eliminar un software\n"
		"4 - Listar software existente\n"
		"5 - salir del programa\n? ");

	unsigned int eleccionMenu; //variable para almacenar la elección seleccionada por el usuario
	scanf_s("%u", &eleccionMenu); //recibir la elección tomada por el usuario
	return eleccionMenu;
}

//Función Introducir Software
void introducirSoftware(FILE* aPtr) {
	if ((fopen_s(&aPtr, "software.dat", "rb+")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");

	//mover puntero de archivo para corregir el registro en el archivo
	//La estructura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de registro introducido
	//por el usuario. (registro - 1) * sizeof(struct software) es el valor de desplazamiento del puntero
	//SEEK_END establece el puntero al final del archivo
	fseek(aPtr, 0, SEEK_END);

	//Crear unSoftware con la información por defecto
	struct software unSoftware = { "", 0, 0.0 };

	//Almacenar el número de registro a ocupar en el archivo
	unsigned int numeroRegistro;

	//Se crea un nuevo registro
	printf("Introduzca el numero de registro a ocupar por el software a introducir: ");
	scanf_s("%u", &numeroRegistro);
	getchar();
	char nombre[15];
	printf("%s", "\nIntroduzca nombre del software: ");
	fgets(nombre, 14, stdin);
	//Obtenemos la longitud del vector
	unsigned int len = strlen(nombre);
	//Verificamos si el último caracter es un salto de línea
	if (nombre[len - 1] == '\n')
		//Eliminamos el salto de línea
		nombre[len - 1] = '\0';
	strcpy(unSoftware.nombre, nombre);
	printf("%s", "\nIntroduzca las unidades que tendra en stock: ");
	fscanf_s(stdin, "%u", &unSoftware.cantidad);  
	printf("%s", "\nIntroduzca el precio del software: ");
	fscanf_s(stdin, "%f", &unSoftware.precio);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estructura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de registro introducido
	//por el usuario. (registro - 1) * sizeof(struct software) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (numeroRegistro - 1) * sizeof(struct software),
		SEEK_SET);

	//escribir la información especificada por el usuario en el archivo
	fwrite(&unSoftware, sizeof(struct software), 1, aPtr);
	}

	fclose(aPtr);  //Cerrar el archivo
}

//actualizar un Software del registro (actualizarRegistro)
void actualizarSoftware(FILE* aPtr)
{
	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "software.dat", "rb+")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");
		//obtener número de cuenta a actualizar
		printf("%s", "Introduzca el numero de cuenta que desea actualizar (1 - 100): ");
		unsigned int registro;  //almacenará el número de cuenta introducido por el usuario
		scanf_s("%d", &registro);

		//mover puntero de archivo para corregir el registro en el archivo
		//La estructura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de registro introducido
		//por el usuario. (registro - 1) * sizeof(struct software) es el valor de desplazamiento del puntero
		//SEEK_SET establece el puntero al inicio del archivo
		fseek(aPtr, (registro - 1) * sizeof(struct software),
			SEEK_SET);

		//crear software con información predeterminada
		struct software unSoftware = { 0, "", "", 0.0 };

		//leer un registro del archivo
		fread(&unSoftware, sizeof(struct software), 1, aPtr);

		//mostrar error si el registro no existe
		if (unSoftware.precio == 0) {
			printf("Registro #%d no contiene ningun tipo de informacion.\n", registro);
		}
		else {  //actualizar registro
			printf("%%s %u %f\n\n",
				unSoftware.nombre, unSoftware.cantidad, unSoftware.precio);

			//Solicitar nuevos datos por parte del usuario
			printf("%s", "Introduzca un nuevo precio: ");
			unsigned int precio;  //variable almacena precio
			scanf_s("%u", &precio);
			unSoftware.precio = precio;  //actualizar precio del registro solicitado

			//mover el puntero de archivo para corregir el registro en el archivo
			//La estructura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de registro introducido
			//por el usuario. (registro- 1) * sizeof(struct persona) es el valor de desplazamiento del puntero
			//SEEK_SET establece el puntero al inicio del archivo
			fseek(aPtr, (registro - 1) * sizeof(struct software),
				SEEK_SET);

			//escribir registro actualizado sobre el registro antiguo del archivo
			fwrite(&unSoftware, sizeof(struct software), 1, aPtr);
		}

		fclose(aPtr);
	}
}

//eliminar un software existente
void eliminarSoftware(FILE* aPtr)
{
	//obtener número de registro a eliminar
	printf("%s", "Introduzca el numero de registro que desea eliminar (1 - 100): ");
	unsigned int registro;  //almacenará el número de registro introducido por el usuario
	scanf_s("%d", &registro);

	//mover puntero de archivo para corregir el registro en el archivo
	//La estructura siempre comienza en la posición 0, con lo cual hay que restar 1 al valor de registro introducido
	//por el usuario. (registro - 1) * sizeof(struct registro) es el valor de desplazamiento del puntero
	//SEEK_SET establece el puntero al inicio del archivo
	fseek(aPtr, (registro - 1) * sizeof(struct software),
		SEEK_SET);

	struct software unSoftware;  //almacena el registro leído desde el archivo

	//leer un registro del archivo
	fread(&unSoftware, sizeof(struct software), 1, aPtr);

	//mostrar error si el registro no existe
	if (unSoftware.precio == 0) {
		printf("Registro #%d no contiene ningun tipo de informacion.\n", registro);
	}
	else {  //eliminar registro
		struct software unSoftwareEnBlanco = { "", 0, 0 };  //software sin datos

		//reemplazar registro existente con registro en blanco
		fwrite(&unSoftwareEnBlanco, sizeof(struct software), 1, aPtr);
	}
}

//Listar todo el Software existente (listarSoftware)
void listarSoftware(FILE* aPtr)
{
	//fopen() abre el archivo; sale si el archivo no puede ser encontrado
	if ((fopen_s(&aPtr, "software.dat", "r")) != NULL) {  //Abrir archivo en modo lectura.
		puts("No se pudo abrir el archivo.");
	}//end-if
	else {
		puts("Archivo abierto.");

		//crear software con información predeterminada
		struct software unSoftware = { 0, "", "", 0.0 };

		//Recorrer todos los registros existentes en el archivo
		for (unsigned int i = 1; i <= 100; ++i) {

			//leer un registro del archivo
			fread(&unSoftware, sizeof(struct software), 1, aPtr);

			//mostrar datos si el registro existe
			if (unSoftware.precio != 0) {
				printf("%u %s %u %.2f\n",
					i, unSoftware.nombre, unSoftware.cantidad, unSoftware.precio);
			}
		}

		fclose(aPtr);
	}
}