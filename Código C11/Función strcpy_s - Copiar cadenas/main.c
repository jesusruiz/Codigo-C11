#include <stdio.h>
#include <string.h>

//Función strcpy_s(cadena de destino, tamaño de la cadena de destino, cadena de origen)
//Función strncpy_s(cadena de destino, tamaño de la cadena de destino, cadena de origen, máximo número de caracteres a ser copiado)

int main() {

	char cadenaOrigen[] = "Solo los mediocres estan siempre en su mejor momento";
	char cadenaDestino[50] = "";

	strncpy_s(cadenaDestino, sizeof(cadenaDestino), cadenaOrigen, 49); 
	if (strlen(cadenaOrigen) != strlen(cadenaDestino))  //Comprobamos si se ha producido algún recorte tras la copia de cadena
	printf("Cadena demasiado larga. Se produjo un recorte al copiar la cadena: \n%s\n", cadenaDestino);
	else
	printf("Cadena copiada correctamente: %s\n", cadenaDestino);
}