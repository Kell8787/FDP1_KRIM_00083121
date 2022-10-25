#include <stdio.h>
int main(){

    int zapatos;

    double descuento1, descuento2, descuento3, total1, total2,total3, total4;

    printf("Ingrese la cantidad de zapatos: ");
    scanf("%d", &zapatos);

    descuento1 = ( zapatos * 80 )*0.1;
    descuento2 = ( zapatos * 80 )*0.2;
    descuento3 = ( zapatos * 80 )*0.4;

    total1= ( zapatos * 80 ) - descuento1;
    total2= ( zapatos * 80 ) - descuento2;
    total3= ( zapatos * 80 ) - descuento3;
    total4= ( zapatos * 80 );

    if ( zapatos > 10 && zapatos < 21)
    {
        printf("El total es de %lf", total1);
    }
    else if ( zapatos > 20 && zapatos < 31)
    {
        printf(" El total es de %lf", total2);
    }
    else if ( zapatos > 30 )
    {
        printf("El total es de %lf", total3);
    }
    else
    {
        printf("El total es de %lf", total4);
    }

    return 0;
}

