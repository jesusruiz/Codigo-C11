//Operador miembro de estructura
//Operador puntero de estructura

#include <stdio.h>

struct carta {

	char *cara;  //definir puntero 'cara'  Cara de la carta
	char *palo;  //definir puntero 'palo'  Palo de la baraja 
};

int main(void) {

	struct carta unaCarta;  //definir una variable estructura de tipo 'carta'

	//introducir valores de cadena en 'unaCarta'
	unaCarta.cara = "As";
	unaCarta.palo = "Espadas";

	struct carta *cartaPtr = &unaCarta; //asigna la dirección de 'unaCarta' al puntero 'cartaPtr'

	//Estas tres instrucciones imprimen exactamente lo mismo
	printf("%s%s%s\n%s%s%s\n%s%s%s\n", unaCarta.cara, " de ", unaCarta.palo,
		cartaPtr->cara, " de ", cartaPtr->palo,
		(*cartaPtr).cara, " de ", (*cartaPtr).palo);
}