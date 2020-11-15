//Puntero - Paso por referencia - Función cubo

#include <stdio.h>

//Función prototipo
void cuboPorReferencia(int *numPtr);  //Se le pasa a la función como argumento un puntero a entero

int main(void) {

	int numero = 5;  //inicializar variable numero a 5
	
	printf("El valor original de la variable numero es: %d", numero);

	//Pasar la dirección de memoria de la variable numero a la función cuboPorReferencia
	cuboPorReferencia(&numero);

	printf("\nEl nuevo valor de la variable numero es: %d\n", numero);
}

//Función cuboPorReferencia
void cuboPorReferencia(int *numPtr) {

	*numPtr = *numPtr * *numPtr * *numPtr;  //cubo *nPtr
}