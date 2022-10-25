#include <stdio.h>
int main(){

    //Mi variable es n, y comienza desde 1, termina en 10
    // Si mi numero dividido entre 2 me da residuo 1 es impar, si no, sera par

    for ( int n=1; n <= 10; n++)
    {
        printf(" %d ", n );

        if( n%2 == 1)  //Aqui mi programa divide el numero, y evalua si el residuo es par o impar

        { 
            printf("Es un numero impar \n"); 
        }

        else

        {
            printf("Es par \n");
        }
    }

    return 0;
    
}