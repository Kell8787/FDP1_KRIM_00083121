#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void funcion(int arr[], int N);

int main(){
    int a,bAleatorio;

    srand(time(NULL));

    printf("Cual es el tamanio del arreglo: ");
    scanf("%d", &a);

    int arreglo[a];

    printf("Arreglo 1 es: \n");

    for(int i=0; i<a; i++){
        bAleatorio=rand()%10+1;
        arreglo[i]=bAleatorio;
        printf("%d\n", arreglo[i]);
    }

    printf("Arreglo invertido es: \n");
    funcion(arreglo, a);

    return 0;
}

void funcion(int arr[], int N)
{
    for(int i= N-1; i>0; i--)
    {
        printf("%d\n",arr[i]);
    }

}