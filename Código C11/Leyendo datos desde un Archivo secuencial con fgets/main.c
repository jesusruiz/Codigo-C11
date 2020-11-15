/*
Leyendo datos desde un Archivo secuencial con fgets() e imprimiendo los datos por pantalla

Prototipo de la función:
char *fgets(char *buffer, int tamaño, FILE *archivo);

Esta función está diseñada para leer cadenas de caracteres. 
Leerá hasta n-1 caracteres o hasta que lea un salto de línea '\n' o un final de archivo EOF. 
El carácter de nueva línea, cuando se lee, se incluye en la cadena.

El primer parámetro buffer lo hemos llamado así porque es un puntero a un espacio de memoria del tipo char
(podríamos usar un arreglo de char). 
El segundo parámetro es tamaño que es el limite en cantidad de caracteres a leer para la funcion fgets(). 
El último parámetro es el puntero al archivo que se debe leer.
*/

#include <stdio.h>
#include <cerrno>

int main(void) {

    FILE* aPtr;  //puntero a Archivo
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

        //La función fgets() lee una cadena del argumento de flujo de entrada y la almacena en bufferCaracteres
        //fgets() lee los caracteres de la posición actual de la secuencia hasta el primer carácter de nueva línea,
        //hasta el final de la secuencia, o hasta que el número de caracteres leídos sea igual a bufferCaracteres -1
        //En este caso lee 4 caracteres del archivo como máximo (5 - 1), lo que suceda primero.
        if (fgets(bufferCaracteres, 5, aPtr) == NULL)
        {
            printf("fgets error\numChars");
        }
        else {
            printf("%s", bufferCaracteres);
        }
    }
    fclose(aPtr);
}
       