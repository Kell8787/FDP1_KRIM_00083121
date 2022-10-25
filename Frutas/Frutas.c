#include <stdio.h>
int main(){

    //Variables
    int manzanas, naranjas;

    printf("Cantidad de manzanas: ");
    scanf("%d", &manzanas);

    printf("Cantidad de naranjas: ");
    scanf("%d", &naranjas);

    //Total
    int total= manzanas+naranjas;
    printf("Total de Frutas es: %d\n", total);




    //Calcular de farenhet a celcius

    double val1, farenhet;

    printf("Grados: ");
    scanf("%lf", &val1);


    farenhet= ((val1*9/5)+32);

    printf("El resultado es: %lf", farenhet);

    return 0;
}