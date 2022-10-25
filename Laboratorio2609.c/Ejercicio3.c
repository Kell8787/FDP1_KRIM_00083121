#include <stdio.h>
int main(){

    // "N" sera el numero del usuario y sera tambien mi limite a la hora de calcular el 2 elevado a X numero

    int N, Y;
    Y = 1; //Asigno Y
    
    printf("Ingrese un numero: ");
    scanf("%d", &N);

    for(int i=1 ; i<=N ; i++) //Aqui comienzo calculando desde 2^1 hasta el valor que el usuario ingreso.
    {
        Y = 2*Y;
        printf("2^%d es igual a %d \n", i, Y); //Me imprimira cada uno de los calculos, si Lo quiero omitir le pongo dos plecas, porque esto si es si queremos 
    }                                          //que nos muestre cada calculo hasta nuestro numero
    printf("2^%d el resultado es %d", N, Y);

    return 0;
}