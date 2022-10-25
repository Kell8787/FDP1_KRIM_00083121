// Kevin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void invertir(int N[], int Tamanio);

int main()
{

    int U, NumeroA;
    srand(time(NULL));

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &U);

    int arreglo[U];

    printf("El Arreglo es: \n");

    for (int i = 0; i < U; i++)
    {
        NumeroA = rand() % 10 + 1;
        arreglo[i] = NumeroA;     

        printf("%d-%d\n", i+1, arreglo[i]); 
    }

    printf("El Arreglo invertido es: \n");
    invertir(arreglo, U);

    return 0;
}

//Mi funcion 
void invertir(int N[], int Tamanio)
{
    for (int i = Tamanio - 1; i >= 0; i--) //Mi funcion comienza desde Tamanio que es mi limite superior del arreglo hasta i>0
    {
        printf("%d-%d\n", i+1, N[i]);
    }
}