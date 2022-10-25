#include <stdio.h>
int main (){

//Variables
double numero1, numero2;

//Ingresar el primer numero
printf("Ingrese un numero= ");
scanf("%lf", &numero1);

//Ingresar el segundo numero
printf("Ingrese otro numero= ");
scanf("%lf", &numero2);

//Suma

double suma= numero1+numero2;
printf("La suma de los numeros es: %lf\n", suma);

//Resta

double resta= numero1-numero2;
printf("La resta de los numeros es: %lf\n", resta);

//Multiplicacion

double multiplicacion= numero1*numero2;
printf("La multiplicacion de los numeros es: %lf\n", multiplicacion);

//Divicion

double divicion= numero1/numero2;
printf("La divicion de los numeros es: %lf\n", divicion);


return 0;

}