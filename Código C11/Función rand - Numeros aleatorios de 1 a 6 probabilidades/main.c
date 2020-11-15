#include <stdio.h>
#include <stdlib.h>  //Archivo de cabecera que incluye la función rand() y el valor de constante RAND_MAX

//Función rand() - Tirando un dado de seis lados 60.000.000 veces. Demostración de probabilidad. 

int main(void) {

	unsigned int frecuencia1 = 0;  //Llevar la cuenta de las probabilidades de que salga un 1 al tirar el dado
	unsigned int frecuencia2 = 0;  //Llevar la cuenta de las probabilidades de que salga un 2 al tirar el dado
	unsigned int frecuencia3 = 0;  //Llevar la cuenta de las probabilidades de que salga un 3 al tirar el dado
	unsigned int frecuencia4 = 0;  //Llevar la cuenta de las probabilidades de que salga un 4 al tirar el dado
	unsigned int frecuencia5 = 0;  //Llevar la cuenta de las probabilidades de que salga un 5 al tirar el dado
	unsigned int frecuencia6 = 0;  //Llevar la cuenta de las probabilidades de que salga un 6 al tirar el dado

	printf("%s", "Valor maximo que puede tener un numero entero aleatorio: ");
	printf("%d\n", RAND_MAX);  //imprime el valor máximo que puede tener un número aleatorio: 32767 (2 bytes - 16 bits)

	//Contador que hace tirar un dado 20 veces
	for (unsigned int tirada = 1; tirada <= 60000000; tirada++) {

		int cara = 1 + rand() % 6; //numero aleatorio de 1 a 6

		//determinar el valor de la cara e incrementar el contador apropiado
		switch (cara) {

		case 1: //cara 1 del dado
			++frecuencia1;
			break;

		case 2: //cara 2 del dado
			++frecuencia2;
			break;

		case 3: //cara 3 del dado
			++frecuencia3;
			break;

		case 4: //cara 4 del dado
			++frecuencia4;
			break;

		case 5: //cara 5 del dado
			++frecuencia5;
			break;

		case 6: //cara 6 del dado
			++frecuencia6;
			break;
		}
	}

		//Mostrar los resultados en formato tabular
		printf("%s%13s\n", "Cara", "Frequencia");
		printf("   1%13u\n", frecuencia1);
		printf("   2%13u\n", frecuencia2);
		printf("   3%13u\n", frecuencia3);
		printf("   4%13u\n", frecuencia4);
		printf("   5%13u\n", frecuencia5);
		printf("   6%13u\n", frecuencia6);

	return 0;
}