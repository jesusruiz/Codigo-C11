/*
Ejercicio - Imprimir una frase con sus palabras invertidas. Utilizar la función strtok()

Escriba un programa en el que se introduzca una línea de texto,
tokenice la línea con la función strtok()
e imprima la frase con sus palabras invertidas
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

    char cadena[80];  //array de tipo cadena
    char cadenaReversa[80] = "";
    const char delimitadores[] = ",!";  //array de tokens (delimitadores)
    char* tokenPtr = NULL;  //puntero a cadena (puntero al primer token). 
                            //Se inicializa con valor NULL porque no apunta a ningún token por ahora
    char* aux_primer_token = NULL;  //Almacenar el primer token para luego añadirlo al final de la cadena invertida
    char* siguiente_token = NULL;  //puntero a cadena. 
                                   //Se inicializa con valor NULL porque no apunta a ningún token por ahora
    char* aux_siguiente_token = NULL;

    printf("Introduzca la frase a ser tokenizada: \n\n");
    gets(cadena);

    printf("La frase introducida es:\n\n%s\n", cadena);

    //Establecer cadena y obtener el primer token:
    tokenPtr = strtok_s(cadena, delimitadores, &siguiente_token);
    aux_primer_token = _strdup(tokenPtr);

    //controlo si el token es el primero que entra para saltarmelo, ya que lo tengo en aux_primer_token
    int caracter_primero = 0;

    //Mientras existan token en 'cadena'
    while (tokenPtr != NULL)
    {
        // Obtener siguiente token:
        if (tokenPtr != NULL)
        {
            //controlo si el token es el primero que entra para saltarmelo, ya que lo tengo en aux_primer_token
            if (caracter_primero != 0) {
                aux_siguiente_token = _strdup(tokenPtr);
                strcat_s(cadenaReversa, 16, aux_siguiente_token);
                strcat_s(cadenaReversa, 16, " ");
            }
            printf(" %s\n", tokenPtr);
            tokenPtr = strtok_s(NULL, delimitadores, &siguiente_token);
            //sumo uno a la variable de control para tener ya en cuenta el segundo token y que se procese
            caracter_primero++;
        }
    }

    printf("PRIMER TOKEN:%s\n", aux_primer_token);
    strcat_s(cadenaReversa, 16, aux_primer_token);
    printf("\n\n%s\n", cadenaReversa);

    printf("%s", _strrev(cadenaReversa));



 /*   printf("\n\n\n%s\n\n\n", "PRUEBA:");

    int numero_caracteres_array = strlen(cadenaReversa);
    char* ptrCaracter = NULL;
    char cadenaCortada[80] = "";
    int contador = 0;

    while (numero_caracteres_array >= 0) {

        if (cadenaReversa[numero_caracteres_array] == ' ') {
            contador++;
            ptrCaracter = &cadenaReversa[numero_caracteres_array];
            for (int letras = 0; letras <= 4; letras++) {
                printf("%c", *(ptrCaracter + 1));
                ptrCaracter = ptrCaracter + 1;
            }
        }
        numero_caracteres_array--;
    }*/
}