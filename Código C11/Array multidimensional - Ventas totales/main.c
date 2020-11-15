/*(Ventas totales) Utilice una matriz bidimensional para resolver el siguiente problema: 

Una empresa tiene cuatro vendedores (1 a 4) que venden cinco productos diferentes (1 a 5). 
Una vez al d�a, cada vendedor pasa una hoja de pedido de cada tipo diferente de producto vendido. Cada hoja contiene:

a) El n�mero de vendedor
b) El n�mero de producto
c) El valor total en euros de ese producto vendido en ese d�a

Por lo tanto, cada vendedor pasa entre 0 y 5 hojas de ventas por d�a.

Escriba un programa que lea toda esta informaci�n de ventas y resuma las ventas totales por vendedor por producto. 
Todos los totales deben almacenarse en las ventas de matriz bidimensional. 

Despu�s de procesar toda la informaci�n del mes pasado, imprima los resultados en formato de tabla 
con cada columna representando a un vendedor en particular y cada fila representando un producto en particular. 

Cruce el total de cada fila para obtener las ventas totales de cada producto del mes pasado; 
total cruzado de cada columna para obtener las ventas totales por vendedor del �ltimo mes. 

Su impresi�n tabular debe incluir estos totales cruzados a la derecha de las filas totalizadas 
y al final de las columnastotalizadas.
*/

#include <stdio.h>
#define TAMANOVENDEDORES 4
#define TAMANOPRODUCTOS 5

//Funciones prototipo
void obtenerVentas(float ventas[][TAMANOPRODUCTOS]);
void imprimirCabecera(void);
void imprimirVentas(float ventas[][TAMANOPRODUCTOS]);

//Funci�n principal
int main(void) {

	/* declara e inicializa el array */
	float ventas[TAMANOVENDEDORES][TAMANOPRODUCTOS] = { 0.0 };

	/* llama a la funci�n obtenerVentas() para leer (introducir) las ventas de los vendedores. */
	obtenerVentas(ventas);  //pasamos como argumento el array ventas

	/* llama a la funci�n imprimirCabecera() para mostrar la cabecera de la tabla */
	imprimirCabecera();

	/* llama a la funci�n imprimirVentas() para mostrar las ventas */
	imprimirVentas(ventas);
}

//Funci�n obtenerVentas
/************* obtenerVentas ******************************
 * Descripci�n: lee las ventas desde el teclado
 *      hasta que se introduce -1
* Parametros: array de 2 dimensiones de tipo float (4 x 5)
* Tipo de Retorno:  void (ninguno)
**********************************************************/
void obtenerVentas(float ventas[][TAMANOPRODUCTOS]) {

	int vendedor;
	int producto;
	float valor;

	printf("\nIntroduzca el numero de vendedor, el numero producto y las ventas totales.\n");
	printf("(Introduzca -1 en numero de vendedor para salir del programa):  ");
	scanf_s("%d", &vendedor);

	while (vendedor != -1)
	{
		scanf_s("%d%f", &producto, &valor);
		ventas[vendedor - 1][producto - 1] += valor;
		printf("\nIntroduzca el numero de vendedor, el numero producto y las ventas totales.\n");
		printf("(Introduzca -1 en numero de vendedor para salir del programa):  ");
		scanf_s("%d", &vendedor);
	}
}

//Funci�n imprimirCabecera
/************* imprimirCabecera ****************************
Descripci�n: muestra la cabecera de la tabla
Parametros: void (ninguno)
Tipo de Retorno:  void (ninguno)
********************************************************/
void imprimirCabecera(void) {

	printf("\n\n\tLas ventas totales de cada vendedor\n");
	printf("\tse muestran al final de cada fila\n");
	printf("\ty las ventas totales de cada producto\n");
	printf("\tse muestran en la parte inferior de cada columna\n\n");
	printf("Ventas-%30s\n", "Productos");
	printf("vendedor %10d%10d%10d%10d%10d%12s\n", 1, 2, 3, 4, 5, "Total");
}

//Funci�n imprimirVentas
/************* imprimirVentas ****************************
Descripci�n: muestra las ventas y res�menes
Parametros: array de 2 dimensiones de tipo float (4 x 5)
Tipo de Retorno:  void (ninguno)
********************************************************/
void imprimirVentas(float ventas[][TAMANOPRODUCTOS]) {

	float totalVentas;
	int i, j;
	float ventaProductos[5] = { 0.0 };

		for (i = 0; i < 4; i++)
		{
			totalVentas = 0.0;
			printf("%4d     ", i + 1);
		
			for (j = 0; j < 5; j++)
			{
				totalVentas += ventas[i][j];
				ventaProductos[j] += ventas[i][j];
				printf("%9.2f", ventas[i][j]);
			}

			printf("%9.2f\n", totalVentas);
		}

		printf("Total    ");

		for (j = 0; j < 5; j++)
		printf("%9.2f", ventaProductos[j]);

		printf("\n");
}