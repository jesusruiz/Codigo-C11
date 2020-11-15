#include <stdio.h>
#include <string.h>

#define STDC_WANT_LIB_EXT1__ = 1;

int main() {

	#if defined STDC_WANT_LIB_EXT1__
		printf("Funciones opcionales definidas\n");
	#else 
		printf("Funciones opcionales no definidas\n");
	#endif

	return 0;
}