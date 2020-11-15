/*
Creando un Archivo secuencial de Acceso aleatorio

fwrite() 
size_t fwrite(void *puntero, size_t tamano, size_t cantidad, FILE *archivo);

Esta funci�n est� pensada para trabajar con registros de longitud constante y forma pareja con fread(). 

Es capaz de escribir hacia un fichero uno o varios registros de la misma longitud almacenados 
a partir de una direcci�n de memoria determinada. El valor de retorno es el n�mero de registros escritos, 
no el n�mero de bytes. 

Los par�metros son: un puntero a la zona de memoria de donde se obtendr�n los datos a escribir, 
el tama�o de cada registro, 
el n�mero de registros a escribir y un puntero a la estructura FILE del fichero al que se har� la escritura. 

-------------------------------------------------------------------------------------------------

La funci�n fwrite transfiere un n�mero espec�fico de bytes comenzando en una ubicaci�n espec�fica en la memoria 
a un archivo. 
Los datos se escriben comenzando en la ubicaci�n en el archivo indicada por el puntero de posici�n del archivo.

Las funciones fwrite y fread son capaces de leer y escribir matrices de datos hacia y desde archivos.

La llamada a la funci�n fwrite anterior escribe un �nico entero en un archivo, 
por lo que el tercer argumento es 1 (como si se estuviera escribiendo un elemento de una matriz).
Los programas de procesamiento de archivos rara vez escriben un solo campo en un archivo. 
Normalmente, escriben una estructura a la vez, como mostramos en los siguientes ejemplos.

Cree un sistema de procesamiento de transacciones capaz de almacenar hasta 100 registros de longitud fija.
Cada registro debe constar de un n�mero de cuenta que se utilizar� como clave de registro, un apellido, 
un nombre y un saldo. El programa resultante deber�a poder actualizar una cuenta, 
insertar un nuevo registro de cuenta, 
eliminar una cuenta y enumerar todos los registros de la cuenta en un archivo de texto formateado para imprimir. 
Utilice un archivo de acceso aleatorio.
*/

#include <stdio.h>

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
	if ((fopen_s(&aPtr, "cuentas.dat", "wb")) != NULL) {  //Truncar a longitud cero o crear un archivo para escribir.
		puts("No se pudo abrir el archivo.");
	}
	else {
		puts("Archivo abierto.");
		//Crear datosCliente con la informaci�n por defecto
		struct datosCliente clienteBanco = { 0, "", "", 0.0 };

		//Salida de 100 registros en blanco al archivo
		for (unsigned int i = 1; i <= 100; ++i) {
			//La llamada a la funci�n fwrite anterior escribe un �nico entero en un archivo, 
			//por lo que el tercer argumento es 1 (como si se estuviera escribiendo un elemento de una matriz).
			fwrite(&clienteBanco, sizeof(struct datosCliente), 1, aPtr);
		}

		fclose(aPtr);  //Cerrar el archivo
	}
}