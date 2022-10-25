//Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>

int main(){

    int arreglo[20]; //Mi arreglo y su tamaño

    //Le pido al usuario que me ingrese un numero, y lo almaceno en la posicion 0 del arreglo
    printf("Ingrese un numero: ");
    scanf("%d", &arreglo[0]);
    
    //Creo un bucle para poder hacer los multiplos del numero ingresado

    printf("Los multiplos de %d son: ", arreglo[0]); 

    for(int i=0; i<20 ; i++){         //Comenzara desde i=0 hasta el i=20-1 y luego pongo que mi arreglo[i] es igual al arreglo multiplicado por i+1

        arreglo[i] = arreglo[0]*(i+1);
        printf("\n %d", arreglo[i]);
    
    }

    return 0;

}