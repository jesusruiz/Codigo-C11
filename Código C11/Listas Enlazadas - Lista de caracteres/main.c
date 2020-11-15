/*
Lista vinculada

Este ejemplo maneja una lista vinculada de caracteres.
Puede insertar un carácter en la lista en orden alfabético (insertar función)
o eliminar un carácter de la lista (eliminar función).
*/

#include <stdio.h>
#include <stdlib.h>

//estructura autorreferencial
struct nodoLista {
	char data;  //cada nodoLista contiene un caracter
	struct nodoLista *sigPtr;  //puntero que apunta al siguiente nodo de la lista
};

typedef struct nodoLista NodoLista;  //sinónimo para la estructura nodoLista
typedef NodoLista *NodoListaPtr;  //sinónimo para NodoLista*

//Funciones prototipo
void insertar(NodoListaPtr *cPtr, char valor);
char eliminar(NodoListaPtr *cPtr, char valor);
int estaVacia(NodoListaPtr cPtr);
void imprimirLista(NodoListaPtr actualPtr);
void instrucciones(void);

int main(void) {

	NodoListaPtr inicioPtr = NULL;  //inicialmente no existen nodos creados
	char elemento;  //caracter introducido por usuario

	instrucciones();  //mostrar el menú
	printf("%s", "? ");
	unsigned int eleccion;  //elección seleccionada por parte del usuario
	scanf_s("%u", &eleccion);

	//bucle mientras el usuario no seleccione la opción '3 (salir del programa)'
	while (eleccion != 3) {

		switch (eleccion) {
		case 1:
			printf("%s", "Introduzca un caracter: ");
			scanf_s("\n%c", &elemento);
			insertar(&inicioPtr, elemento);  //insertar elemento en la lista
			imprimirLista(inicioPtr);
			break;

		case 2: //eliminar un elemento
				//si lista no está vacía
			if (!estaVacia(inicioPtr)) {
				printf("%s", "Introduzca el caracter a eliminar: ");
				scanf_s("\n%c", &elemento);

				//si el caracter es encontrado, proceder a eliminarlo
				if (eliminar(&inicioPtr, elemento)) { //eliminar elemento
					printf("%c eliminado.\n", elemento);
					imprimirLista(inicioPtr);
				}
				else {
					printf("%c no encontrado.\n\n", elemento);
				}
			}
			else {
				puts("La lista esta vacia.\n");
			}

			break;

		default:
			puts("Eleccion no valida.\n");
			instrucciones();
			break;
		}

		printf("%s", "? ");
		scanf_s("%u", &eleccion);
	}

	puts("Fin de ejecucion de programa.");
}

//mostrar las instrucciones del programa al usuario
void instrucciones(void)
{
	puts("Introduzca su eleccion:\n"
		" 1 insertar un elemento en la lista.\n"
		" 2 eliminar un elemento de la lista.\n"
		" 3 salir del programa.");
}

//insertar un nuevo valor dentro de la lista por orden alfabetico
//La función recibe la dirección de memoria de la lista (puntero a la lista) y un carácter a insertar.
//La dirección de la lista es necesaria cuando se debe insertar un valor al principio de la lista.
//Proporcionar la dirección permite modificar la lista (es decir, el puntero al primer nodo de la lista) 
//mediante una llamada por referencia. 
//Debido a que la lista en sí es un puntero (a su primer elemento), pasar su dirección crea un puntero a un puntero
//(es decir, doble indirección).
void insertar(NodoListaPtr *cPtr, char valor) {

	//crear nodo
	//Crea un nodo llamando a la función malloc() asignando a nuevoPtr la dirección de la memoria asignada.
	NodoListaPtr nuevoPtr = malloc(sizeof(NodoLista));  

	if (nuevoPtr != NULL) { //¿hay espacio disponible?
		//asigna el carácter que se insertará en el campo miembro nuevoPtr->data
		nuevoPtr->data = valor; //establecer valor en nodo
		//y asigna NULL a nuevoPtr-> sigPtr
		nuevoPtr->sigPtr = NULL; //nodo no vinculado a otro nodo

		NodoListaPtr previoPtr = NULL;  //Inicializa previoPtr a NULL
		NodoListaPtr actualPtr = *cPtr;  //y actualPtr a *cPtr (el puntero al inicio de la lista.)
		//Los punteros previoPtr y actualPtr almacenan respectivamente las ubicaciones del nodo anterior y posterior 
		//al puntero de inserción.

		//bucle para encontrar la ubicación correcta en la lista
		//Mientras actualPtr no sea NULL y el valor a insertar sea mayor que actualPtr->data,
		while (actualPtr != NULL && valor > actualPtr->data) {
			//asignar actualPtr a previoPtr
			previoPtr = actualPtr; // saltar hasta el...
			//y apuntar (avanzando una posición) actualPtr al siguiente nodo de la lista
			actualPtr = actualPtr->sigPtr; // ... siguiente nodo
		}

		//insertar un nuevo nodo al principio de la lista
		//Si previoPtr es NULL
		if (previoPtr == NULL) {
			//insertar el nuevo nodo en la primera posición de la lista
			//Asignar * cPtr a nuevoPtr->sigPtr (el enlace del nuevo nodo apunta al (antiguo/former?) 
			//primer nodo anterior)
			nuevoPtr->sigPtr = *cPtr;
			//y asigna nuevoPtr a *cPtr (*cPtr apunta al nuevo nodo).
			*cPtr = nuevoPtr;
		}
		else { //insertar un nuevo nodo entre previoPtr y actualPtr
			//De lo contrario, si previoPtr no es NULL, insertar el nuevo nodo en su lugar
			//Asignar nuevoPtr a previoPtr->sigPtr (el nodo anterior apunta al nuevo nodo)
			previoPtr->sigPtr = nuevoPtr;
			//y asignar actualPtr a nuevoPtr->sigPtr (los puntos de enlace del nuevo nodo en el nodo actual).
			nuevoPtr->sigPtr = actualPtr;
		}
	}
	else {
		//si la función malloc() no pudo obtener memoria libre disponible, imprimir dicha información
		printf("%c no introducido. No hay memoria disponible.\n", valor);
	}
}

//eliminar un elemento de la lista
char eliminar(NodoListaPtr *cPtr, char valor)
{
	//eliminar el primer nodo si se encuentra una coincidencia
	if (valor == (*cPtr)->data) {
		NodoListaPtr tempPtr = *cPtr; //guardar el nodo que se está eliminado
		*cPtr = (*cPtr)->sigPtr; //desvincular el nodo
		free(tempPtr); //liberar el nodo desvinculado
		return valor;
	}
	else {
		NodoListaPtr previoPtr = *cPtr;
		NodoListaPtr actualPtr = (*cPtr)->sigPtr;

		//bucle para encontrar la ubicación correcta en la lista
		while (actualPtr != NULL && actualPtr->data != valor) {
			previoPtr = actualPtr; // saltar hasta el ...
			actualPtr = actualPtr->sigPtr; // ... next node
		}

		//eliminar nodo apuntado por actualPtr
		if (actualPtr != NULL) {
			NodoListaPtr tempPtr = actualPtr;
			previoPtr->sigPtr = actualPtr->sigPtr;
			free(tempPtr);
			return valor;
		}
	}

	return '\0';
}

//retornar 1 si la lista está vacía, 0 de lo contrario
//Las funciones de predicado no es más que una función la cual dice si algo es True o False, 
//es decir, es una función que devuelve un tipo de datos booleano.
//Nota: si está utilizando un compilador que cumple con el estándar C99, puede usar el tipo _Bool en lugar de int.]
//Esta función no modifica la lista en ningún momento
//más bien determina si la lista está vacía (es decir, el puntero al primer nodo
//de la lista es NULL).Si la lista está vacía, se devuelve 1; de lo contrario, se devuelve 0.
int estaVacia(NodoListaPtr cPtr)
{
	return cPtr == NULL;
}

//imprimir la lista
void imprimirLista(NodoListaPtr actualPtr)
{
	//si lista está vácia
	if (estaVacia(actualPtr)) {
		puts("Lista está vacía.\n");
	}
	else {
		puts("La lista es:");

		//mientras no sea el final de la lista
		while (actualPtr != NULL) {
			printf("%c --> ", actualPtr->data);
			actualPtr = actualPtr->sigPtr;
		}
		puts("NULL\n");
	}
}