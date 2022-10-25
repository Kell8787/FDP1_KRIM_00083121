#include <stdio.h>
int main(){

    //Variable del numero
    double numero;
    printf("Ingrese un numero: ");
    scanf("%lf", &numero);


    //Si el numero es menor que 0
    if ( numero < 0){
        printf("El %lf es menor que 0", numero); //El "numero", es donde se guarda el numero ingresado anteriormente
    }

    //Si el numero es mayor que el 0
    else if( numero > 0){
        printf("El %lf es mayor que 0", numero); //El "numero", es donde se guarda el numero ingresado anteriormente
    }

    //Si el numero es igual a 0
    else{
        printf("El %lf es igual a 0", numero); //El "numero", es donde se guarda el numero ingresado anteriormente
    }

    return 0;
}