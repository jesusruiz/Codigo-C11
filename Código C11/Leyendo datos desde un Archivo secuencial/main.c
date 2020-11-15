/*
Leyendo datos desde un Archivo secuencial e imprimiendo los datos por pantalla
*/

#include <stdio.h>
#include <cerrno>

int main(void) {

	FILE *aPtr;  //puntero a Archivo
    char caracter;  //variable para almacenar un caracter del buffer que leamos del archivo que abramos
    char *archivo = "clientes.dat";  //Podemos definir una variable puntero a char que contenga el nombre del archivo 
                                     //que queremos abrir. De esta manera, podemos cambiar f�cilmente esta referencia
                                     //en el c�digo

	errno_t err;  //almacenar si se produce alg�n error al abrir el archivo

	/* fopen_s abre el archivo con seguridad. Sale del programa si no se pudo crear el archivo  */
	err = fopen_s(&aPtr, archivo, "r");  //leer el archivo y almacenar en la variable 'err' si se produce alg�n error

    if (err != 0)
    {
        printf("El archivo 'clientes.dat' no pudo abrirse\n");
        printf("%s\n", strerror(errno));
        exit(-1);  //Aqu� podr�amos salir del programa
    }
    else
    {
        printf("El archivo 'clientes.dat' fue abierto\n");
        printf("%s\n\n", strerror(errno));

        printf("Leyendo datos del archivo '%s':\n", archivo);
        //La funci�n fgetc() lee un caracter a la vez, del archivo que esta siendo se�alado con el puntero *archivo. 
        //En caso de que la lectura sea exitosa devuelve el caracter le�do 
        //y en caso de que no lo sea o de encontrar el final del archivo devuelve EOF. 
        //Prototipo de la funci�n:  
        //char fgetc(FILE *archivo);
        //Esta funci�n se usa generalmente para recorrer archivos de texto
        while ((caracter = fgetc(aPtr)) != EOF)
        {
            printf("%c", caracter);
        }
    }

    fclose(aPtr);

    return 0;
}