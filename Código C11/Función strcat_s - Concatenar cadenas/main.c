#include <stdio.h>
#include <string.h>

//Funci�n strcat_s() - Concatenar cadenas
//strcat_s (cadena destino, longitud m�xima de la cadena destino, cadena origen)
//La funci�n devuelve un c�digo de error entero como un valor de tipo errno_t, 
//que es un tipo entero que depende del compilador. Normalmente 0 en caso de �xito. Un n�mero distinto a 0 en caso de error

int main() {
	
	char cadenaOrigen[50] = "Hola";
	char cadenaDestino[20] = " Mundo";

	int valorRetornado = strcat_s(cadenaOrigen, sizeof(cadenaOrigen), cadenaDestino);

	if (valorRetornado)
		printf("Se produjo un error al concatenar las cadenas. Codigo de error = %d", valorRetornado);
	else
		printf("%s\n", cadenaOrigen);
}