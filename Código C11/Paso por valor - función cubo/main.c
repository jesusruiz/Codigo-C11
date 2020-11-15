//Paso por valor - función cubo

#include <stdio.h>

//Función prototipo
int cuboPorValor(int num);

int main(void) {

	int numero = 5;  //inicializar variable numero a 5

	printf("El valor original de la variable numero es: %d", numero);

	numero = cuboPorValor(numero);

	printf("\nEl nuevo valor de la variable numero es: %d", numero);
}

//Función cuboPorValor
//Calcula y retorna el cubo del argumento pasado a la función de tipo entero
int cuboPorValor(int num) {

	return num * num * num;  //variable local retorna el resultado
}