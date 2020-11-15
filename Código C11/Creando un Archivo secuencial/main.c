//Creando un Archivo secuencial

#include <stdio.h>
#include <cerrno>

int main(void)
{
    int cuenta;          /* número de cuenta */
    char nombre[30];    /* nombre de la cuenta */
    double saldo;       /* saldo de la cuenta */

    errno_t err;

    FILE* cfPtr;          /* cfPtr = clientes.dat puntero a tipo archivo */

    /* fopen_s abre el archivo con seguridad. Sale del programa si no se pudo crear el archivo  */
    err = fopen_s(&cfPtr, "clientes.dat", "w");
    if (err == 0)
    {
        printf("El archivo 'clientes.dat' fue abierto\n");
        printf("%s\n", strerror(errno));
    }
    else
    {
        
        printf("clients.dat' was not opened\n");
        printf("%s\n", strerror(errno));
        exit(-1);  //Aquí podríamos salir del programa
    }

    puts("Introduzca 0 como Numero de cuenta si desea salir del programa\n"); //Usuario puede salir del programa

    /*
    El while (1) no se usa para nada en especifico salvo para permitir la ejecución sin limite del contenido del ciclo,
    su equivalente en cualquiera de sus derivados seria:

    while (true) {
    // Código aquí.
    }

    Se va a mantener ejecutando lo que hay en el bucle hasta que se establezca alguna condición que lo haga salir
    con una instrucción break o alguna similar.
    */
    //while (!feof(stdin))  TAMBIÉN VALDRÍA
    while (1)
    {
        printf("Introduzca el numero de cuenta: ");
        scanf_s("%d", &cuenta);
        if (cuenta == 0)
            break;
        printf("Introduzca el nombre del titular de la cuenta: ");
        scanf_s("%s", nombre, 29);  //máximo 29 caracteres
        printf("Introduzca el saldo de la cuenta: ");
        scanf_s("%lf", &saldo);
        //printf("Introduzca 0 si desea salir del programa");
        //printf("? ");
        /* escribir en el archivo los datos de la cuenta, utilizando fprintf() */
        fprintf_s(cfPtr, "%d %s %.2f\n", cuenta, nombre, saldo);
    } /* end while */

    fclose(cfPtr);  /* cerrar archivo con fclose() */
}