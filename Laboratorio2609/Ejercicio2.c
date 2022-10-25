#include <stdio.h>
int main(){

    // n sera el numero que ingrese el usuario, i esta asignado como 1
    // Luego de ingresar el numero , entra a un while y va a multiplicar el numero "n" por 1 hasta que el resultado sea
    // menor o igual al numero ingresado por 10

    int n, i=1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    while ( n*i<=n*10)
    {
        printf("%d x %d= %d \n", n, i, n*i); // Aca me imprime el numero multiplicado por 1 hasta 10 
        n*i++;
    }
    
    printf ("El resultado es la tabla de %d", n);

    return 0;
}