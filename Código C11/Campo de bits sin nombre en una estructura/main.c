/*
Campo de bits sin nombre en una estructura.

Es posible especificar un campo de bits sin nombre para utilizarlo como relleno en la estructura. 
*/

/*
La siguiente estructura definida utiliza utiliza un campo de 19 bits sin nombre como relleno; 
no se puede almacenar nada en esos 19 bits. 
El miembro b (en nuestra computadora de 4 bytes de palabra) se almacena en otra unidad de almacenamiento.
*/
struct ejemplo {
	unsigned int a : 13;
	unsigned int : 19;
	unsigned int b : 4;
};

/*
Se utiliza un campo de bits sin nombre con un ancho de cero para alinear el siguiente campo de bits 
en un nuevo límite de unidad de almacenamiento. 
Por ejemplo, la definición de la siguiente estructura, utiliza un campo de 0 bits sin nombre 
para omitir los bits restantes (tantos como haya) de la unidad de almacenamiento en la que se almacena 'a' 
y para alinear 'b' en el límite de la siguiente unidad de almacenamiento.
*/
struct ejemplo2 {
	unsigned int a : 13;
	unsigned int : 0;
	unsigned int b : 4;
};

int main(void) {


}