/*
typedef - Construir nuevos nombres de tipo
*/

#include <stdio.h>

//typedef [tipo de dato a renombrar] [nombre nuevo]
typedef int precio;  //creamos un tipo de dato 'precio' que en realidad es un tipo de dato 'int'
                     //Con esto conseguimos mayor claridad en el código. Un código más explicativo de por sí
                     //También conseguimos dar mayor portabilidad al código

//A menudo, typedef se utiliza para crear sinónimos para los tipos de datos básicos.
//Por ejemplo, un programa que requiera enteros de cuatro bytes puede usar el tipo int en un sistema y el tipo long en otro.
//Los programas diseñados para la portabilidad a menudo usan typedef para crear un alias para cuatro bytes.
//enteros, tales como Integer.
//El alias Integer se puede cambiar una vez en el programa para que el programa funcione en ambos sistemas.

int main(void) {

	precio venta, recomendado, mayorista;  //se crean 3 variables de tipo 'precio' que en realidad son de tipo 'int'

    venta = 10;
    recomendado = 8;
    mayorista = 6;


    printf("El precio de venta es de %d.\nEl precio recomendado es de %d.\nEl precio para mayoristas es de %d.\n",
        venta, recomendado, mayorista);
}