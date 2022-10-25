#include <stdio.h>

int main()
{
    int num; 
    printf ("Ingrese un numero entero: ");
    scanf ("%d",&num);
    
    if (num % 3 ==0 ) 
    {
        printf("FIS");
    }
    if (num % 5 == 0)
    {
        printf ("FUS");
    }
    if (num % 3 !=0 && num %5 !=0 )
    {
        printf("El numero ingresado es: %d",num);
    }

    return 0;
}