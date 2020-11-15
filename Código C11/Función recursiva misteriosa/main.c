#include <stdio.h>

unsigned int mystery(unsigned int a, unsigned int b); // function prototype

int main(void)
{
	printf("%s", "Introduce dos numeros enteros positivos: ");
	
	unsigned int x; // primer entero
	unsigned int y; // segundo entero
	
	scanf_s("%u%u", &x, &y);
	
	printf("El resultado es: %u\n", mystery(x, y));
}

// Parameter b must be a positive integer
// to prevent infinite recursion
unsigned int mystery(unsigned int a, unsigned int b)
{
	// base case
	if (1 == b) {
		return a;
	}
	else { // recursive step
		return a + mystery(a, b - 1);  //esta función suma el valor de a + (el valor de a el numero b de veces - 1)
		//Un ejemplo:   a = 4   b = 8
		//return  4  +  (4 un total de 7 veces)
	}
}