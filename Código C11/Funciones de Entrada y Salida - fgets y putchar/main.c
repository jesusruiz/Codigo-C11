/* En este ejemplo se utilizan las funciones de entrada y salida fgets() y putchar()
para leer una línea de texto desde la entrada estándar (teclado) 
e imprimir recursivamente los caracteres de la línea de texto en orden inverso.

La función fgets() lee los caracteres de la entrada estándar en su primer argumento, 
una matriz de caracteres, hasta que se encuentra una línea nueva o el indicador de fin de archivo, 
o hasta que se lee el número máximo de caracteres.
El número máximo de caracteres es uno menos que el valor especificado en el segundo argumento de fgets().
El tercer argumento especifica el flujo desde el cual se tienen que leer los caracteres; 
en este caso, usamos el flujo de entrada estándar (stdin). 
Se agrega un carácter nulo ('\0') al array cuando termina la lectura de caracteres.

La función putchar imprime su argumento de carácter. 
El programa llama a la función recursiva 'recursividad' para imprimir la línea de texto comenzando desde el final. 
Si el primer carácter de la matriz recibido por la función 'recursividad' es el carácter nulo '\0', la función retorna.
De lo contrario, vuelve a llamarse a la función 'recursividad' con la dirección del subarray comenzando 
en el elemento sPtr[1], y el carácter sPtr[0] se imprime con putchar() cuando se haya completado la llamada recursiva.

El orden de las dos instrucciones en la parte else de la instrucción if, hace que 'recursividad' 
vaya hasta el carácter nulo de terminación de la cadena antes de que se imprima un carácter. 
A medida que se completan las llamadas recursivas, los caracteres se imprimen en orden inverso.
*/

#include <stdio.h>
#define TAMANO 80  //Tamaño máximo de número de caracteres que podrá tener el array de caracteres

//Función prototipo. Recibe un puntero constante que apunta a una cadena constante. 
//La función no devuelve nada.
void recursividad(const char* const sPtr);  

int main(void) {
	
	char frase[TAMANO];  //Crea un array con un tamaño máximo para almacenar 80 caracteres

	puts("Introduzca una linea de texto:");

	//Utiliza fgets() para leer una linea de texto
	fgets(frase, TAMANO, stdin); 

	printf("\n%s", "La linea introducida de forma inversa es: ");
	recursividad(frase);
}

//Función recursividad
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