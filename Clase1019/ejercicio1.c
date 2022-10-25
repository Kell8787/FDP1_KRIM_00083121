#include <stdio.h>
#include <stdlib.h>
#define N 10
int main(){
    int numero[N];
    int i=1, elegido;
    printf("Serie de numeros: (0-9): ");
    scanf("%d",&numero[0]);
    while(numero[i-1]!=10&&i<N){
        scanf("%d",&numero[i]);
        i++;
    }
    printf("\nEscriba la posicion que desea mirar: ");
    scanf("%d",&elegido);
    //mirar_izquierdo(int elegido, int numero[N]); Esta función está sin desarrollar
   // mirar_derecha(int elegido, int numero[N]);  Esta función está sin desarrollar

   return 0;
}