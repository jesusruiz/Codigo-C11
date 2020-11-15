/*
Escribiendo datos de forma aleatoria en un archivo de Acceso aleatorio

La funci�n fseek() establece la posici�n del puntero de lectura de archivo en una posici�n espec�fica en el archivo, 
y luego escribe los datos en el mismo utilizando la funci�n fwrite().

Funci�n fseek()
----------------
Prototipo: 
int fseek (FILE* fichero, long desplazamiento, int desde);

Par�metros: El identificador del fichero, el desplazamiento, la posici�n de origen

Valor devuelto: Un n�mero (0 si no ha habido problemas; otro si los hubo)

Detalles:
Desplaza la posici�n actual de lectura/escritura del fichero a otro punto. 
El desplazamiento puede ser positivo (avanzar), cero o negativo (retroceder). 
La posici�n de origen se puede indicar con la ayuda de tres constantes: 
SEEK_SET (0, comienzo), 
SEEK_CUR (1, actual), 
SEEK_END (2, final)

Ejemplo:
fseek(fichero, -10, SEEK_CUR);  //Posiciona el puntero de archivo al final del archivo 
								//y lo desplaza 10 posiciones m�s atr�s
*/

#include <stdio.h>
#include <cerrno>
#include <stdlib.h>

	//Definici�n de la estructura datosCliente
	struct datosCliente {
		unsigned int numCuenta;  //N�mero de cuenta
		char apellido[15];  //Apellido del titular de la cuenta
		char nombre[10];  //Nombre del titular de la cuenta		
		double saldo;  //Saldo de la cuenta
	};

	int main(void) {

		FILE* aPtr;  //puntero de tipo archivo que apunta a 'cuentas.dat'

		//fopen() abre el archivo; sale si el archivo no puede ser encontrado
		if ((fopen_s(&aPtr, "cuentas.dat", "rb+")) != NULL) {  //rb+ Abrir archivo para actualizaci�n (lectura y escritura).
			puts("No se pudo abrir el archivo.");
		}
		else {
			puts("Archivo abierto.");
			//Crear datosCliente con la informaci�n por defecto
			struct datosCliente clienteBanco = { 0, "", "", 0.0 };

			//permitir que el usuario ingrese un n�mero de cuenta
			printf("%s", "Introduzca un numero de cuenta"
				   " (de 1 a 100, o 0 para salir): ");
			scanf_s("%d", &clienteBanco.numCuenta);

			//En este punto el usuario introduce la informaci�n que se guardar� en el archivo
			while (clienteBanco.numCuenta != 0) {

				printf("%s", "\nIntroduzca nombre: ");
				fscanf_s(stdin, "%9s", clienteBanco.nombre, _countof(clienteBanco.nombre));  //_countof Calcula el n�mero de elementos de una matriz asignada est�ticamente.
				printf("%s", "\nIntroduzca apellido: ");
				fscanf_s(stdin, "%14s", clienteBanco.apellido, _countof(clienteBanco.apellido));  //_countof Calcula el n�mero de elementos de una matriz asignada est�ticamente.
				printf("%s", "\nIntroduzca saldo: ");
				fscanf_s(stdin, "%lf", &clienteBanco.saldo); 

				//buscar y establecer la posici�n en el archivo para guardar los datos del registro 
				//especificado por el usuario
				//Se guardar� en la posici�n indicada por el n�mero de cuenta introducido por el usuario
				//contando desde el inicio (SEEK_SET)
				fseek(aPtr, (clienteBanco.numCuenta - 1) *
					sizeof(struct datosCliente), SEEK_SET);

				//escribir la informaci�n especificada por el usuario en el archivo
				fwrite(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);

				//permitir que el usuario ingrese otro n�mero de cuenta
				printf("%s", "\nIntroduzca un numero de cuenta: ");
				scanf_s("%d", &clienteBanco.numCuenta);
			}

			fclose(aPtr);  //Cerrar el archivo
		}
	}