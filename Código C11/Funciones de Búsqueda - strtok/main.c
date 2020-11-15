/* Funciones de B�squeda - Funci�n strtok()
La funci�n strtok() no es segura, se recomienda utilizar en su lugar la funci�n strtok_s()

La funci�n strtok() se utiliza para dividir una cadena en una serie de tokens. 
Un token es una secuencia de caracteres separados por delimitadores (normalmente espacios o signos de puntuaci�n,
pero un delimitador puede ser cualquier car�cter).
Por ejemplo, en una l�nea de texto, cada palabra puede considerarse un s�mbolo 
y los espacios y la puntuaci�n que separan las palabras pueden considerarse delimitadores.
*/

#include <stdio.h>
#include <string.h>

int main(void) {

    char src[] = "1.2,3.5,4.2";
    char* next = NULL;
    char* first = strtok_s(src, ",", &next);

    do
    {
        char* part;
        char* posn;

        printf("[%s]\n", first);
        part = strtok_s(first, ".", &posn);
        while (part != NULL)
        {
            printf(" [%s]\n", part);
            part = strtok_s(NULL, ".", &posn);
        }
    } while ((first = strtok_s(NULL, ",", &next)) != NULL);
}