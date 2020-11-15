#include <stdio.h>
#include <string.h>

//Funciones strnlen_s()  strlen()   sizeof()

int main() {

	char cadena[] = "Cuantos caracteres contiene esta cadena?";
	
	printf("%s", cadena);
	printf("\n\nNumero de caracteres que contiene esta cadena sin contar el caracter null: %zu", strlen(cadena));
	printf("\nNumero de caracteres que contiene esta cadena contando el caracter null: %zu", sizeof cadena);

	printf("\nNumero de caracteres que contiene esta cadena sin contar el caracter null: %zu\n", 
			strnlen_s(cadena, sizeof cadena));

	return 0;
}