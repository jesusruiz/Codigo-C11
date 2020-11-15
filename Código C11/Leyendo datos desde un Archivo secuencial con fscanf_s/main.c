/*
Leyendo datos desde un Archivo secuencial con fscanf_s() e imprimiendo los datos por pantalla

Prototipo de la función:
int fscanf_s(FILE *fichero, const char *formato, argumento, ...);

La función fscanf() funciona igual que scanf en cuanto a parámetros,
pero la entrada se toma de un fichero en lugar del teclado.

La función fscanf() lee datos de la posición actual de la secuencia en las ubicaciones especificadas por el argumento
(si existe).
*/

#include <stdio.h>
#include <cerrno>
#include <stdlib.h>

int main(void) {

    FILE* aPtr;  //puntero a Archivo
    char caracter;
    char bufferCaracteres[5];  //tamaño para almacenar el buffer
    char* archivo = "clientes.dat";  //Podemos definir una variable puntero a char que contenga el nombre del archivo 
                                     //que queremos abrir. De esta manera, podemos cambiar fácilmente esta referencia
                                     //en el código

    errno_t err;  //almacenar si se produce algún error al abrir el archivo

    /* fopen_s abre el archivo con seguridad. Sale del programa si no se pudo crear el archivo  */
    err = fopen_s(&aPtr, archivo, "r");  //leer el archivo y almacenar en la variable 'err' si se produce algún error

    if (err != 0)
    {
        printf("El archivo 'clientes.dat' no pudo abrirse\n");
        printf("%s\n", strerror(errno));
        exit(-1);  //Aquí podríamos salir del programa
    }
    else
    {
        printf("El archivo 'clientes.dat' fue abierto\n");
        printf("%s\n\n", strerror(errno));

        printf("Leyendo datos del archivo '%s':\n", archivo);
    }
    //Declaramos las variables que almacenarán los datos guardados en los archivos
    unsigned int cuenta;  //numero de cuenta
    char nombre[30];  //nombre del titular de la cuenta
    double saldo;  //saldo de la cuenta

    //mientras no lleguemos al final del archivo
    while (!feof(aPtr)) {

        fscanf_s(aPtr, "%d", &cuenta);
        fscanf_s(aPtr, "%29s", nombre, _countof(nombre));  //_countof Calcula el número de elementos de una matriz asignada estáticamente.
        fscanf_s(aPtr, "%lf", &saldo);

        //hay que volver a verificar el !feof 
        //para que no se repita la impresión de la última línea del archivo de texto dos veces
        if (!feof(aPtr))
            //imprimir la salida de los datos:
            printf("%-10d%-13s%7.2f\n", cuenta, nombre, saldo);
    }
    fclose(aPtr);
}
