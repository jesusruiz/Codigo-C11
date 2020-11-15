//Funci�n esPrimo

#include <stdio.h>
#include <stdlib.h>

int esPrimo(int numero);  //Funci�n prototipo

int main(void) {

    int numero;
    printf("Dime un numero: ");
    scanf_s("%d", &numero);

    if (esPrimo(numero)) {
        printf("Es primo");
    }
    else {
        printf("No es primo");
    }

    return 0;
}

int esPrimo(int numero) {

    if (numero == 0 || numero == 1) return 0;
    
    /*
            El n�mero 4 es un caso especial, pues al dividirlo entre
            2 el resultado es 2, y el ciclo nunca se cumple, indicando que
            el 4 S� es primo, pero realmente NO lo es, as� que si el n�mero es 4
                          inmediatamente indicamos que no es primo (regresando 0)
            Nota: solo es para el 4, los dem�s funcionan bien
    */
    if (numero == 4) return 0;

    for (int x = 2; x < numero / 2; x++) {
        // Si es divisible por cualquiera de estos n�meros, no
        // es primo
        if (numero % x == 0) return 0;
    }

    // Si no se pudo dividir por ninguno de los de arriba, s� es primo
    return 1;
}