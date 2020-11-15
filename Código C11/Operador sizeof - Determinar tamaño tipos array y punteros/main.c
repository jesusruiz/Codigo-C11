//Utilizar el operador sizeof para determinar el tamaño de los tipos standard, array y punteros.

#include <stdio.h>

int main(void) {

	char c;
	short s;
	int i;
	long l;
	long long ll;
	float f;
	double d;
	long double ld;
	int array[20];  //Crear array de 20 elementos de tipo entero
	int* ptr = array; //Crear puntero que apunta a array

	printf("sizeof c = %u\tsizeof(char) = %u"
		   "\nsizeof s = %u\tsizeof(short) = %u"
		   "\nsizeof i = %u\tsizeof(int) = %u"
		   "\nsizeof l = %u\tsizeof(long) = %u"
		   "\nsizeof ll = %u\tsizeof(long long) = %u"
		   "\nsizeof f = %u\tsizeof(float) = %u"
		   "\nsizeof d = %u\tsizeof(double) = %u"
		   "\nsizeof ld = %u\tsizeof(long double) = %u"
		   "\nsizeof array = %u"
		   "\nsizeof ptr = %u\n",
		  sizeof c, sizeof(char), sizeof s, sizeof(short), sizeof i,
		  sizeof(int), sizeof l, sizeof(long), sizeof ll,
		  sizeof(long long), sizeof f, sizeof(float), sizeof d,
		  sizeof(double), sizeof ld, sizeof(long double),
		  sizeof array, sizeof ptr);
}