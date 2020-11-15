//Array - Introduciendo un valor de cadena por teclado

#include <stdio.h>
#define TAMANO 20

int main(void)
{
    char cadena1[TAMANO];  //reserva 20 caracteres
    char cadena2[] = "cadena literal";  //reserva 15 caracteres

    //leer y almacenar una cadena introducida por el usuario dentro del array cadena1
    printf("%s", "Introduzca una cadena (no superior a 19 caracteres): ");
    scanf_s("%s", cadena1, 19);  //introducir no más de 19 caracteres

    //imprimir salida
    printf("cadena1 es: %s\ncadena2 es: %s\n"
        "cadena1 con espacios entre caracteres es:\n",
        cadena1, cadena2);

    //imprimir caracteres hasta que el caracter null sea alcanzado  
    for (size_t i = 0; i < TAMANO && cadena1[i] != '\0'; ++i) {
        printf("%c ", cadena1[i]);
    }

    puts("");
}