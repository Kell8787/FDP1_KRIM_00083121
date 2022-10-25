#include <stdio.h>

//Declarando funciones
int Factorial_Re(int n);

int main(int argc, int *argv[])
{
    int num;

    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    printf("El factorial de %d es de %d", num, Factorial_Re(num));

    return 0;
}

int Factorial_Re(int n)
{
    int respuesta;

    if(n==0) return (1);
    else 
    {
        respuesta = n *Factorial_Re(n-1);
        return(respuesta);
    }
}