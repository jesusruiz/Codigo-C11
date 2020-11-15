#include <stdio.h>
#include <string.h>

//Funci�n strcpy_s(cadena de destino, tama�o de la cadena de destino, cadena de origen)
//Funci�n strncpy_s(cadena de destino, tama�o de la cadena de destino, cadena de origen, m�ximo n�mero de caracteres a ser copiado)

int main() {

	char cadenaOrigen[] = "Solo los mediocres estan siempre en su mejor momento";
	char cadenaDestino[50] = "";

	strncpy_s(cadenaDestino, sizeof(cadenaDestino), cadenaOrigen, 49); 
	if (strlen(cadenaOrigen) != strlen(cadenaDestino))  //Comprobamos si se ha producido alg�n recorte tras la copia de cadena
	printf("Cadena demasiado larga. Se produjo un recorte al copiar la cadena: \n%s\n", cadenaDestino);
	else
	printf("Cadena copiada correctamente: %s\n", cadenaDestino);
}