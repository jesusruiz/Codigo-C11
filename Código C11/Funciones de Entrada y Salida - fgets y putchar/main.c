/* En este ejemplo se utilizan las funciones de entrada y salida fgets() y putchar()
para leer una l�nea de texto desde la entrada est�ndar (teclado) 
e imprimir recursivamente los caracteres de la l�nea de texto en orden inverso.

La funci�n fgets() lee los caracteres de la entrada est�ndar en su primer argumento, 
una matriz de caracteres, hasta que se encuentra una l�nea nueva o el indicador de fin de archivo, 
o hasta que se lee el n�mero m�ximo de caracteres.
El n�mero m�ximo de caracteres es uno menos que el valor especificado en el segundo argumento de fgets().
El tercer argumento especifica el flujo desde el cual se tienen que leer los caracteres; 
en este caso, usamos el flujo de entrada est�ndar (stdin). 
Se agrega un car�cter nulo ('\0') al array cuando termina la lectura de caracteres.

La funci�n putchar imprime su argumento de car�cter. 
El programa llama a la funci�n recursiva 'recursividad' para imprimir la l�nea de texto comenzando desde el final. 
Si el primer car�cter de la matriz recibido por la funci�n 'recursividad' es el car�cter nulo '\0', la funci�n retorna.
De lo contrario, vuelve a llamarse a la funci�n 'recursividad' con la direcci�n del subarray comenzando 
en el elemento sPtr[1], y el car�cter sPtr[0] se imprime con putchar() cuando se haya completado la llamada recursiva.

El orden de las dos instrucciones en la parte else de la instrucci�n if, hace que 'recursividad' 
vaya hasta el car�cter nulo de terminaci�n de la cadena antes de que se imprima un car�cter. 
A medida que se completan las llamadas recursivas, los caracteres se imprimen en orden inverso.
*/

#include <stdio.h>
#define TAMANO 80  //Tama�o m�ximo de n�mero de caracteres que podr� tener el array de caracteres

//Funci�n prototipo. Recibe un puntero constante que apunta a una cadena constante. 
//La funci�n no devuelve nada.
void recursividad(const char* const sPtr);  

int main(void) {
	
	char frase[TAMANO];  //Crea un array con un tama�o m�ximo para almacenar 80 caracteres

	puts("Introduzca una linea de texto:");

	//Utiliza fgets() para leer una linea de texto
	fgets(frase, TAMANO, stdin); 

	printf("\n%s", "La linea introducida de forma inversa es: ");
	recursividad(frase);
}

//Funci�n recursividad
void recursividad(const char* const sPtr) {

	//Si final de cadena
	if ('\0' == sPtr[0]) {  //caso base
		return;
	}
	else {  //si no se ha llegado al final de la cadena
		recursividad(&sPtr[1]);  //paso recursivo
		putchar(sPtr[0]);  //utilizar putchar() para mostrar el caracter
	}
}