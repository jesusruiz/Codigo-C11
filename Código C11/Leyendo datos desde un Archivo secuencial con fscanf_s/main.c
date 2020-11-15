/*
Leyendo datos desde un Archivo secuencial con fscanf_s() e imprimiendo los datos por pantalla

Prototipo de la funci�n:
int fscanf_s(FILE *fichero, const char *formato, argumento, ...);

La funci�n fscanf() funciona igual que scanf en cuanto a par�metros,
pero la entrada se toma de un fichero en lugar del teclado.

La funci�n fscanf() lee datos de la posici�n actual de la secuencia en las ubicaciones especificadas por el argumento
(si existe).
*/

#include <stdio.h>
#include <cerrno>
#include <stdlib.h>

int main(void) {

    FILE* aPtr;  //puntero a Archivo
    char caracter;
    char bufferCaracteres[5];  //tama�o para almacenar el buffer
    char* archivo = "clientes.dat";  //Podemos definir una variable puntero a char que contenga el nombre del archivo 
                                     //que queremos abrir. De esta manera, podemos cambiar f�cilmente esta referencia
                                     //en el c�digo

    errno_t err;  //almacenar si se produce alg�n error al abrir el archivo

    /* fopen_s abre el archivo con seguridad. Sale del programa si no se pudo crear el archivo  */
    err = fopen_s(&aPtr, archivo, "r");  //leer el archivo y almacenar en la variable 'err' si se produce alg�n error

    if (err != 0)
    {
        printf("El archivo 'clientes.dat' no pudo abrirse\n");
        printf("%s\n", strerror(errno));
        exit(-1);  //Aqu� podr�amos salir del programa
    }
    else
    {
        printf("El archivo 'clientes.dat' fue abierto\n");
        printf("%s\n\n", strerror(errno));

        printf("Leyendo datos del archivo '%s':\n", archivo);
    }
    //Declaramos las variables que almacenar�n los datos guardados en los archivos
    unsigned int cuenta;  //numero de cuenta
    char nombre[30];  //nombre del titular de la cuenta
    double saldo;  //saldo de la cuenta

    //mientras no lleguemos al final del archivo
    while (!feof(aPtr)) {

        fscanf_s(aPtr, "%d", &cuenta);
        fscanf_s(aPtr, "%29s", nombre, _countof(nombre));  //_countof Calcula el n�mero de elementos de una matriz asignada est�ticamente.
        fscanf_s(aPtr, "%lf", &saldo);

        //hay que volver a verificar el !feof 
        //para que no se repita la impresi�n de la �ltima l�nea del archivo de texto dos veces
        if (!feof(aPtr))
            //imprimir la salida de los datos:
            printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);
    }
    fclose(aPtr);
}
