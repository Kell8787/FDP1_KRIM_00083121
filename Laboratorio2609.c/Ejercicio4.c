#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

    srand(time(NULL)); 
    int K, U;
    
    K=rand()%10+1;

    do
    {
        printf("Ingrese un numero del 1 al 10: ");
        scanf("%d", &U);

        printf("Usted escogio: %d\n", U);
        printf("La PC escogio: %d\n", K);

        if(U==K){
            printf("El usuario gano\n");
        }
        else{
            printf("El usuario perdio\n");
        }

    } while ( U!=K); //Mi condicion dice que si U es distinto de K se seguira ejecutando hasta que U sea igual a K

    return 0;

}