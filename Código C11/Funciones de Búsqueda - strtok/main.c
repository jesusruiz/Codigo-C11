/* Funciones de Búsqueda - Función strtok()
La función strtok() no es segura, se recomienda utilizar en su lugar la función strtok_s()

La función strtok() se utiliza para dividir una cadena en una serie de tokens. 
Un token es una secuencia de caracteres separados por delimitadores (normalmente espacios o signos de puntuación,
pero un delimitador puede ser cualquier carácter).
Por ejemplo, en una línea de texto, cada palabra puede considerarse un símbolo 
y los espacios y la puntuación que separan las palabras pueden considerarse delimitadores.
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