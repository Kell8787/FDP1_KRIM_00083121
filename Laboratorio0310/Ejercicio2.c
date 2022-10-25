// Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>

double suma (double num1, double num2);                   //Declaro todas las funciones
double resta (double num1, double num2);
double multiplicacion (double num1, double num2);
double division (double num1, double num2);

int main(){

    int Resultado;

    double a, b;

    //Le pido al usuario 2 numeros que quiera evaluar

    printf("Ingrese un numeros:    ", a);   
    scanf("%lf", &a);

    printf("Ingrese otro numero: ", b);
    scanf("%lf", &b);

    //Le muestro al usuario una tabla y le pido al usuario que operacion quiere realizar

    printf("¿Que operacion quiere realizar?\n 1. Suma\n 2. Resta\n 3. Multiplicacion\n 4. Division\n Escoja una opcion: "); 
    scanf("%d", &Resultado);

    //Depende el resultado del usuario el programa va a realizar una de las 4 opciones

    switch (Resultado)
    {
        case 1:
        printf("La suma de %lf+%lf=%lf", a,b, suma(a, b));
        break;

        case 2:
        printf("La resta de %lf-%lf=%lf", a,b, resta(a, b));
        break;

        case 3:
        printf("La multiplicacion de %lf*%lf=%lf", a, b, multiplicacion(a, b));
        break;

        case 4:
        printf("La division de %lf/%lf=%lf", a, b, division(a, b));
        break;

        default:
        printf("Ingrese un numero entre 1 y 4");
        break;
    }

}

//Funcion para Suma
double suma( double num1, double num2)
{
    double suma= num1+num2;
    
    return suma;

}

//Funcion para resta
double resta( double num1, double num2)
{
    double resta= num1-num2;
    
    return resta;

}

//Funcion para multiplicacion

double multiplicacion( double num1, double num2)
{
    double Multi= num1*num2;
    
    return Multi;

}

//Funcion para Division

double division( double num1, double num2)
{
    double Divi= num1/num2;
    
    return Divi;

}


