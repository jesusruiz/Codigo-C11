#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//function prototype
void ordenar(char* cadEstados[]);

int main()
{
    char* cadEstados[] = { "Florida", "Oregon", "California", "Georgia" };
    char* cadOrdenados[] = { "" };  //también valdría     char* strSorted[] = { 0 };
    int x;  //contador para recorrer los estados

    printf("La lista de los Estados antes de ordenarlos por orden alfabetico es:");

    for (x = 0; x < 4; x++)
    {
        printf("\n%s", cadEstados[x]);
    }

    ordenar(cadEstados);

    printf("\n\nLa lista de los Estados una vez ordenados alfabeticamente es:");

    for (x = 0; x < 4; x++)
    {
        printf("\n%s", cadEstados[x]);
    }

    puts("");

    return 0;

}//end main

//Definición de la función ordenar
void ordenar(char* cadEstados[])
{
    int x, y;

    for (x = 0; x < 3; x++)
    {
        for (y = x + 1; y < 4; y++)
        {
            if ((strcmp(cadEstados[x], cadEstados[y])) > 0)
            {
                char* tmp = cadEstados[x];
                cadEstados[x] = cadEstados[y];
                cadEstados[y] = tmp;
            }//end if
        }//end inner for loop
    }//end outer for loop
}//end sort()