/*
Leyendo datos desde un Archivo de Acceso aleatorio con la funsi�n fread()

La funci�n fread() lee un n�mero espec�fico de bytes desde un archivo a la memoria.

fread(&client, sizeof(struct clientData), 1, cfPtr);

Lee el n�mero de bytes determinado por sizeof (struct clientData) del archivo al que apunta el puntero cfPtr,
almacena los datos en el cliente y devuelve el n�mero de bytes le�dos. 
Los bytes se leen desde la ubicaci�n especificada por el puntero de posici�n del archivo. 
La funci�n fread puede leer varios elementos de matriz de tama�o fijo proporcionando un puntero a la matriz 
en la que se almacenar�n los elementos e indicando el n�mero de elementos que se leer�n. 

La declaraci�n anterior lee un elemento. Para leer m�s de uno, especifique el n�mero de elementos 
como tercer argumento de fread(). 

La funci�n fread() devuelve el n�mero de elementos que ingres� correctamente. 
Si este n�mero es menor que el tercer argumento en la llamada a la funci�n, entonces ocurri� un error de lectura.
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
	if ((fopen_s(&aPtr, "cuentas.dat", "rb")) != NULL) {  //rb Abrir archivo para lectura.
		puts("No se pudo abrir el archivo.");
	}
	else {
		//Imprimir las cabeceras de las columnas: Num Cuenta  Apellido  Nombre  Saldo  
		printf("%-14s%-16s%-11s%10s\n", "Num Cuenta", "Apellido",
				"Nombre", "Saldo");

		//leer todos los registros del archivo (hasta eof)
		while (!feof(aPtr)) {

			//Crear datosCliente con la informaci�n por defecto
			struct datosCliente clienteBanco = { 0, "", "", 0.0 };

			//Lee un elemento de la estructura ClienteBanco
			//Para ello lee el n�mero de bytes determinado por sizeof (struct datosCliente)
			//del archivo al que apunta el puntero aPtr,
			//fread() devuelve en 'resultado' el n�mero de elementos completos le�dos
			int resultado = fread(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);

			//mostrar registro
			//si resultado es distinto de 0 y la cuenta del Cliente es distinta de 0
			if (resultado != 0 && clienteBanco.numCuenta != 0) {
				//imprimir los datos del registro
				printf("%-14d%-16s%-14s%8.2f\n",
					clienteBanco.numCuenta, clienteBanco.nombre,
					clienteBanco.apellido, clienteBanco.saldo);
			}
		}

		fclose(aPtr);  //Cerrar el archivo
	}
}