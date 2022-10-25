//Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

    //Variables

    int NumeroA, N, H=0, repeticion;

    //Le pedimos al usuario el tamaño del arreglo y el numero que quiere contar cuantas veces se repite

    
    printf("Ingrese el tamanio del arreglo: ");                                 
    scanf("%d", &N);

    printf("Ingrese el numero del 1 al 10 que quiere saber cuantas veces se repite: ");
    scanf("%d", &repeticion);

    //Declaramos el arreglo e ingresamos en el tamaño del arreglo, luego creamos la semilla del numero aleatorio

    int arreglo[N];

    srand(time(NULL));

    printf("Los numeros generados son:\n");
    
    //Creamos un bucle que contenga el I desde 0 hasta N donde N es el valor de nuestro arreglo
    for(int i=0; i<N;i++){
        NumeroA= rand()%10+1;           //Numero aleatorio en el bucle
        arreglo[i]=NumeroA;             //Almacenamos un numero aleatorio en el arreglo i, y va ir almacenando numeros aleatorios hasta llegar
                                        // al numero 10


        printf("%d\n", arreglo[i]);     //Se imprimen los numeros generados y almacenados en el arreglo
    }

    for(int i=0 ; i<N; i++){

        if(arreglo[i]==repeticion){     //Cuenta las veces que se repite el numero que nosotros deseamos
            H++;
        }
        
    }
    printf("El numero %d se repite %d veces" , repeticion,H);
    
    return 0;
}