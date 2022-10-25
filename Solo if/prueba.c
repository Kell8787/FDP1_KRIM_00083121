#include <stdio.h>
int main(){

    int val;

    printf("Ingrese un numero: ");
    scanf("%d", &val);

    if( val<0){
        printf("El valor %d es menor que 0", val);
    }
    else{
        printf("El valor %d es mayor que 0", val);
    }

    return 0;


}