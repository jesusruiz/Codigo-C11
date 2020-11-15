/**
 * Programa en C para invertir el orden de las palabras en una cadena
 */
#include <stdio.h>
#include <string.h>
#define MAX_TAMANO 100  //Tamaño máximo de caracteres

int main()
{
    char cadena[100], invertida[100];  //Declaramos dos arrays de tipo cadena para almacenar la cadena original y la invertida
    int len, i, index, wordStart, wordEnd;

    printf("Introduzca una cadena de texto: ");
    gets(cadena);  //Almacenar la cadena introducida en el array

    len = strlen(cadena);  //Obtener la longitud de la cadena (numero de caracteres)
    printf("Longitud cadena introducia: %d\n", len);
    index = 0;

    // Comenzar a verificar las palabras desde el final de la cadena
    wordStart = len - 1;
    wordEnd = len - 1;

    while (wordStart > 0)
    {
        // Si se encuentra una palabra
        if (cadena[wordStart] == ' ')
        {
            // Añade la palabra a la cadena inversa
            i = wordStart + 1;
            while (i <= wordEnd)
            {
                invertida[index] = cadena[i];

                i++;
                index++;
            }
            invertida[index++] = ' ';

            wordEnd = wordStart - 1;
        }

        wordStart--;
    }

    // Finalmente añadir la última palabra al array invertido
    for (i = 0; i <= wordEnd; i++)
    {
        invertida[index] = cadena[i];
        index++;
    }

    // Añadir un caracter NULL al final de la cadena invertida
    invertida[index] = '\0';

    printf("Cadena original \n%s\n\n", cadena);
    printf("Palabras en orden inverso \n%s\n", invertida);

    return 0;
}