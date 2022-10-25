// Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
#include <math.h>

double elevado( double *num1, double *num2);

int main(){

    //Le debo pedir al usuario 2 numeros, el Primero sera el numero base, y el segundo sera la potencia

    double a, b, N;

    printf("Ingrese su numero base: ");    //Pide un numero base al usuario
    scanf("%lf", &a);

    printf("Ingrese la potencia: ");      //Pide una potencia al usuario
    scanf("%lf", &b);

    printf("El resultado de %lf^%lf=%lf", a, b, elevado( &a, &b));  //Me da el resultado

}

double elevado (double *num1, double *num2)
{
    double Y;

    Y = pow( *num1, *num2);  //Pow es para potencias, y asi no ahorramos trabajo, luego lo que  hace es que toma num1 como base y num2 como potencia

    //return pow( *num1, *num2);
    return Y;
}