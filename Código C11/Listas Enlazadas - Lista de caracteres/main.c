/*
Lista vinculada

Este ejemplo maneja una lista vinculada de caracteres.
Puede insertar un car�cter en la lista en orden alfab�tico (insertar funci�n)
o eliminar un car�cter de la lista (eliminar funci�n).
*/

#include <stdio.h>
#include <stdlib.h>

//estructura autorreferencial
struct nodoLista {
	char data;  //cada nodoLista contiene un caracter
	struct nodoLista *sigPtr;  //puntero que apunta al siguiente nodo de la lista
};

typedef struct nodoLista NodoLista;  //sin�nimo para la estructura nodoLista
typedef NodoLista *NodoListaPtr;  //sin�nimo para NodoLista*

//Funciones prototipo
void insertar(NodoListaPtr *cPtr, char valor);
char eliminar(NodoListaPtr *cPtr, char valor);
int estaVacia(NodoListaPtr cPtr);
void imprimirLista(NodoListaPtr actualPtr);
void instrucciones(void);

int main(void) {

	NodoListaPtr inicioPtr = NULL;  //inicialmente no existen nodos creados
	char elemento;  //caracter introducido por usuario

	instrucciones();  //mostrar el men�
	printf("%s", "? ");
	unsigned int eleccion;  //elecci�n seleccionada por parte del usuario
	scanf_s("%u", &eleccion);

	//bucle mientras el usuario no seleccione la opci�n '3 (salir del programa)'
	while (eleccion != 3) {

		switch (eleccion) {
		case 1:
			printf("%s", "Introduzca un caracter: ");
			scanf_s("\n%c", &elemento);
			insertar(&inicioPtr, elemento);  //insertar elemento en la lista
			imprimirLista(inicioPtr);
			break;

		case 2: //eliminar un elemento
				//si lista no est� vac�a
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
//La funci�n recibe la direcci�n de memoria de la lista (puntero a la lista) y un car�cter a insertar.
//La direcci�n de la lista es necesaria cuando se debe insertar un valor al principio de la lista.
//Proporcionar la direcci�n permite modificar la lista (es decir, el puntero al primer nodo de la lista) 
//mediante una llamada por referencia. 
//Debido a que la lista en s� es un puntero (a su primer elemento), pasar su direcci�n crea un puntero a un puntero
//(es decir, doble indirecci�n).
void insertar(NodoListaPtr *cPtr, char valor) {

	//crear nodo
	//Crea un nodo llamando a la funci�n malloc() asignando a nuevoPtr la direcci�n de la memoria asignada.
	NodoListaPtr nuevoPtr = malloc(sizeof(NodoLista));  

	if (nuevoPtr != NULL) { //�hay espacio disponible?
		//asigna el car�cter que se insertar� en el campo miembro nuevoPtr->data
		nuevoPtr->data = valor; //establecer valor en nodo
		//y asigna NULL a nuevoPtr-> sigPtr
		nuevoPtr->sigPtr = NULL; //nodo no vinculado a otro nodo

		NodoListaPtr previoPtr = NULL;  //Inicializa previoPtr a NULL
		NodoListaPtr actualPtr = *cPtr;  //y actualPtr a *cPtr (el puntero al inicio de la lista.)
		//Los punteros previoPtr y actualPtr almacenan respectivamente las ubicaciones del nodo anterior y posterior 
		//al puntero de inserci�n.

		//bucle para encontrar la ubicaci�n correcta en la lista
		//Mientras actualPtr no sea NULL y el valor a insertar sea mayor que actualPtr->data,
		while (actualPtr != NULL && valor > actualPtr->data) {
			//asignar actualPtr a previoPtr
			previoPtr = actualPtr; // saltar hasta el...
			//y apuntar (avanzando una posici�n) actualPtr al siguiente nodo de la lista
			actualPtr = actualPtr->sigPtr; // ... siguiente nodo
		}

		//insertar un nuevo nodo al principio de la lista
		//Si previoPtr es NULL
		if (previoPtr == NULL) {
			//insertar el nuevo nodo en la primera posici�n de la lista
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
		//si la funci�n malloc() no pudo obtener memoria libre disponible, imprimir dicha informaci�n
		printf("%c no introducido. No hay memoria disponible.\n", valor);
	}
}

//eliminar un elemento de la lista
char eliminar(NodoListaPtr *cPtr, char valor)
{
	//eliminar el primer nodo si se encuentra una coincidencia
	if (valor == (*cPtr)->data) {
		NodoListaPtr tempPtr = *cPtr; //guardar el nodo que se est� eliminado
		*cPtr = (*cPtr)->sigPtr; //desvincular el nodo
		free(tempPtr); //liberar el nodo desvinculado
		return valor;
	}
	else {
		NodoListaPtr previoPtr = *cPtr;
		NodoListaPtr actualPtr = (*cPtr)->sigPtr;

		//bucle para encontrar la ubicaci�n correcta en la lista
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

//retornar 1 si la lista est� vac�a, 0 de lo contrario
//Las funciones de predicado no es m�s que una funci�n la cual dice si algo es True o False, 
//es decir, es una funci�n que devuelve un tipo de datos booleano.
//Nota: si est� utilizando un compilador que cumple con el est�ndar C99, puede usar el tipo _Bool en lugar de int.]
//Esta funci�n no modifica la lista en ning�n momento
//m�s bien determina si la lista est� vac�a (es decir, el puntero al primer nodo
//de la lista es NULL).Si la lista est� vac�a, se devuelve 1; de lo contrario, se devuelve 0.
int estaVacia(NodoListaPtr cPtr)
{
	return cPtr == NULL;
}

//imprimir la lista
void imprimirLista(NodoListaPtr actualPtr)
{
	//si lista est� v�cia
	if (estaVacia(actualPtr)) {
		puts("Lista est� vac�a.\n");
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