//Función recursiva main

#include<stdio.h>

int main()
{
    //si no utilizamos static no se guarda el valor previo que tenia antes de la llamada a la funcion
    //Es decir, aquí cada vez que la función main() es llamada, se aumenta el valor de i a + 1.
    //La quinta vez que se llame a main() tendrá el valor 5, y la sexta vez que se llame a main() tendrá el valor 6

    //Si declaramos la variable como int (sin el modificador static), i siempre valdría 1
    //y el programa entraría en un bucle infinito.
    static int i = 1; 

    printf("%d\n", i++);

    if (i == 6)
    {
        return 0;
    }

    main(); //llamada recursiva a función main() 
}