//Funci�n recursiva main

#include<stdio.h>

int main()
{
    //si no utilizamos static no se guarda el valor previo que tenia antes de la llamada a la funcion
    //Es decir, aqu� cada vez que la funci�n main() es llamada, se aumenta el valor de i a + 1.
    //La quinta vez que se llame a main() tendr� el valor 5, y la sexta vez que se llame a main() tendr� el valor 6

    //Si declaramos la variable como int (sin el modificador static), i siempre valdr�a 1
    //y el programa entrar�a en un bucle infinito.
    static int i = 1; 

    printf("%d\n", i++);

    if (i == 6)
    {
        return 0;
    }

    main(); //llamada recursiva a funci�n main() 
}