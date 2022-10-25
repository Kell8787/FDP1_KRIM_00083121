#include <stdio.h>

int main()
{

    int n, producto, respuesta;

    producto=1;

    printf("Ingrese un numero: ");
    scanf("%d", &n);

    if(n==0)
    {
        producto=1;
    }
    else
    {
        for( int i = n ; i>=1 ; i=i-1)
        {
            printf(" i=%d\n", i);
            producto = producto * i;
        }
    }

    respuesta= producto;

    printf("El factorial de %d es: %d\n", n, respuesta);
    
    return 0;
}