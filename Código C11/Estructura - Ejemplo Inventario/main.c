/*
Estructura 'inventario' que contiene: 
un miembro array de tipo caracter nombrePieza[30], 
un miembro de tipo int numeroPieza, 
un miembro de tipo punto flotante precio, 
un miembro de tipo entero stock,
y un miembro de tipo entero reponerUnidades.
*/

#include <stdio.h>

struct inventario {
	char nombrePieza[30];
	unsigned int numeroPieza;
	float precio;
	unsigned int unidadesStock;
	unsigned int reponerUnidades;
};

int main(void) {

	struct inventario inventarioAlmacen;  //definir una variable estructura de tipo 'inventario'

	printf("Introduzca el Nombre de la pieza: ");
	scanf_s("%s", inventarioAlmacen.nombrePieza, 20);

	printf("Introduzca el Numero de la pieza: ");
	scanf_s("%u", &inventarioAlmacen.numeroPieza);

	printf("Introduzca el Precio de la pieza: ");
	scanf_s("%f", &inventarioAlmacen.precio);

	printf("Introduzca el Numero de Unidades en stock de la pieza: ");
	scanf_s("%u", &inventarioAlmacen.unidadesStock);

	printf("Introduzca el Numero de Unidades que desea añadir al stock actual de la pieza: ");
	scanf_s("%u", &inventarioAlmacen.reponerUnidades);

	printf("\n\nDatos introducidos:");
	printf("%s %u %.2f %u %u", inventarioAlmacen.nombrePieza, inventarioAlmacen.numeroPieza,
		inventarioAlmacen.precio, inventarioAlmacen.unidadesStock, inventarioAlmacen.reponerUnidades);
}