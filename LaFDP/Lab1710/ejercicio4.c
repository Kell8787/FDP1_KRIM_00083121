//Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    
    //declaro mis varibales para Tamaño del arreglo y Numero Aleatorio
    int N, NumA;

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &N);

    int arr[N];

    srand(time(NULL));

    //Me imprime mi numero aleatorio, por medio de un for

    printf("El arreglo es: \n");

    for (int i = 0; i < N; i++)
    {
        NumA=rand()%20+1;
        arr[i]=NumA;

        printf("%d\n", arr[i]);
    }

    //Tengo que crear otra 2 variables para poder preguntarle al usuario si desea modificar el arreglo o dejarlo asi

    int opcion, modificar;

    printf("Desea podificar el programa?\nSi su respuesta es SI, introduzca 1\nSi su respuesta es NO, introduzca 2\nSu respuesta es: ");
    scanf("%d", &opcion);

    if(opcion==1)                                                                   //Si la opcion que escojemos es igual a 1, El programa le pedira el valor
    {                                                                               //que desee modificar
        int mod, Nuev;    
        printf("Ingrese el valor que quiere modificar de 0 a %d: ", N-1);           //Variable Nuev--Es para almacenar el nuevo valor    
        scanf("%d", &mod);                                                          //Variable Mod--Es para elegir que posicion cambiara de valor
        if(mod<N)                                                                   //Si el valor es menor que N, va a ejecutar lo siguiente: 
        {
            printf("El nuevo numero en la posicion %d es: ", mod);                  //Le pide al usuario que ingrese el nuevo numero
            scanf("%d", &Nuev);
            arr[mod]=Nuev;                                                          //Almacena el numero en la posicion anteriormente dada

            printf("El nuevo arreglo es: \n");                                      //Muestra nuevamente el arreglo ya modificado

            for(int i = 0; i < N; i++)
            {
                printf("%d\n", arr[i]);
            }

            printf("Gracias por utilizar mi programa C:");
        }
        else                                                                           //Si el valor es mayor que N entonces no lo ejecutara y le dira que ingrese el valor entre el rango
        {
            printf("Ingrese un valor dentro de 0 y %d", N-1);
        }

    }
    else
    {
        printf("Gracias por usar mi programa:c");                                      //Esto si el usuario no desea modificar el arreglo
    }

    return 0;
}
