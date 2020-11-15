#include <stdio.h> 
#include <string.h> 

void imprimirArray(char* arr[], int n)
{
    for (int i = 0; i < n; i++) {
        printf("%s ", arr[i]);
    }
    puts("");
}

void invertirArray(char* arr[], int n)
{
    char* temp;

    // Recorrer desde el inicio hasta el final. 
    // Intercambiar cadenas.  
    int j = n - 1;
    for (int i = 0; i < j; i++) {
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        j--;
    }
}

int main()
{
    char* arr[] = { "Codificacion", "nunca", "me", "falla" };
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Numero de elementos en el array: %d\n\n", n);

    imprimirArray(arr, n);

    printf("\n");

    invertirArray(arr, n);

    imprimirArray(arr, n);

    return 0;
}
