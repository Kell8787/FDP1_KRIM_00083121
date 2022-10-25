#include <stdio.h>
int main(){

    int n;

    do
    {
        printf("Ingrese un numero positivo: ");
        scanf("%d", &n);
    } while (n<0);
    
    printf("El numero ingresado fue : %d", n);

    return 0;
}