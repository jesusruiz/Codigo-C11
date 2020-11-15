/*
Leyendo datos desde un Archivo secuencial con fgets() e imprimiendo los datos por pantalla

Prototipo de la funci�n:
char *fgets(char *buffer, int tama�o, FILE *archivo);

Esta funci�n est� dise�ada para leer cadenas de caracteres. 
Leer� hasta n-1 caracteres o hasta que lea un salto de l�nea '\n' o un final de archivo EOF. 
El car�cter de nueva l�nea, cuando se lee, se incluye en la cadena.

El primer par�metro buffer lo hemos llamado as� porque es un puntero a un espacio de memoria del tipo char
(podr�amos usar un arreglo de char). 
El segundo par�metro es tama�o que es el limite en cantidad de caracteres a leer para la funcion fgets(). 
El �ltimo par�metro es el puntero al archivo que se debe leer.
*/

#include <stdio.h>
#include <cerrno>

int main(void) {

    FILE* aPtr;  //puntero a Archivo
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

        //La funci�n fgets() lee una cadena del argumento de flujo de entrada y la almacena en bufferCaracteres
        //fgets() lee los caracteres de la posici�n actual de la secuencia hasta el primer car�cter de nueva l�nea,
        //hasta el final de la secuencia, o hasta que el n�mero de caracteres le�dos sea igual a bufferCaracteres -1
        //En este caso lee 4 caracteres del archivo como m�ximo (5 - 1), lo que suceda primero.
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
       