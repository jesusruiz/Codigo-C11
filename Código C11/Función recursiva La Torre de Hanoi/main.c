//Función recursiva La Torre de Hanoi

#include <stdio.h>

void torre(int c, int inicio, int fin, int aux);  //Función prototipo

int main(void) {

	int n;  //numero de discos
	printf("%s", "Introduzca el numero inicial de discos: ");
	scanf_s("%d", &n);

	//imprimir instrucciones para mover discos desde la
	//torre 1 a la torre 3 utilizando la torre 2 para almacenamiento temporal
	torre(n, 1, 3, 2);
}
	
//la función torre imprime recursivamente el movimiento de discos
//desde la torre inicial hasta la torre final mediante el uso de la torre auxiliar
void torre(int c, int inicio, int fin, int aux)
{ 
	//caso base
	if (1 == c) { 
		printf( "%d --> %d\n" , inicio, fin); 
		return ; 
	}
	  
	//mover c - 1 discos desde inicio a final
	torre(c - 1 , inicio, aux, fin); 
	
	//mover ultimo disco desde inicio a final 
	printf("%d --> %d\n" , inicio, fin);
	
	//mover c - 1 discos desde aux a final 
	torre( c - 1 , aux, fin, inicio); 
}