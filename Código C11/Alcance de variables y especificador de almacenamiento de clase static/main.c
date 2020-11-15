#include <stdio.h>

//Alcance de variables y especificador de almacenamiento de clase static

void utilizarLocal(void);  //prototipo de función
void utilizarStaticLocal(void);  //prototipo de función
void utilizarGlobal(void);  //prototipo de función

int x = 1;  //variable global

int main(void) {

	int x = 5;  //variable local a nivel de main

	printf("El valor de la variable local interna a nivel de main es de:  %d\n", x);

	{ //iniciar nuevo ámbito

		int x = 7; //variable local a nivel del nuevo ámbito

		printf("El valor de la variable local interna a nivel del nuevo ambito es de:  %d\n", x);

	}

	printf("El valor de la variable local interna a nivel de main es de:  %d\n", x);

	utilizarLocal();  //utilizarLocal() la variable x local tiene un especificador de almacenamiento automatic
	utilizarStaticLocal();  //utilizarStaticLocal() la variable x local tiene un especificador de almacenamiento static
	utilizarGlobal();  //utilizarGlobal() utiliza la variable global x
	utilizarLocal();  //utilizarLocal() reinicializa la variable x local de almacenamiento automatic
	utilizarStaticLocal();  //utilizarStaticLocal() la variable x local con especificador de almacenamiento static conserva su valor anterior
	utilizarGlobal();  //utilizarGlobal() utiliza la variable global x que también conserva su valor

	printf("\nEl valor de la variable local x en main es de: %d\n", x);
}

//La función utilizarLocal() reinicializa la variable local x durante cada llamada
void utilizarLocal(void) {

	int x = 25; //variable local inicializada cada vez que se llama a la función utilizarLocal()

	printf("\nEl valor de la variable local x tras entrar en la funcion utilizarLocal() es de: %d\n", x);
	++x;
	printf("El valor de la variable local x antes de salir de la funcion utilizarLocal() es de: %d\n", x);
}

//utilizarStaticLocal() inicializa la variable local x de almacenamiento static, solo la primera vez
//que la función es llamada
//el valor de x es guardado entre las llamadas a esta función
void utilizarStaticLocal(void) {

	static int x = 50; //se inicializa una sola vez en toda la vida del programa

	printf("\nEl valor de la variable local x de almacenamiento static tras entrar en la funcion utilizarStaticLocal() es de: %d\n", x);
	++x;
	printf("El valor de la variable local x de almacenamiento static antes de salir de la funcion utilizarStaticLocal() es de: %d\n", x);
}

//la función utilizarGlobal() modifica la variable x global en cada llamada
//hay que destacar que dentro de esta función utilizarGlobal() no definimos ninguna variable x
//por lo que la función utilizará la variable global definida
void utilizarGlobal(void) {

	printf("\nEl valor de la variable global x al acceder a la funcion utilizarGlobal() es de: %d\n", x);
	x *= 10; //se multiplica el valor de la variable global x por diez y almacena el resultado en la variable global x
	printf("El valor de la variable global x antes de salir de la funcion utilizarGlobal() es de: %d\n", x);
}