#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int  Usuario, Pc, Piedra = 1 , Papel = 2, Tijeras = 3;
  
  //Varible para el numero del usuario
printf("Ingresar un numero del 1 al 3= \n");
    scanf("%d", &Usuario);

    srand(time(NULL));
    Pc=rand()%3+1;

    switch (Usuario)
    {
    case 1:
        if( Usuario==1 && Pc== 1){
            printf("Fue un empate\n");
        }
        else if(Pc==2){
            printf("Gano la pc\n");
        }
        else{
            printf("El usuario gano\n");
        }
        break;

        case 2:
        if( Usuario==2 && Pc==2){
            printf("Fue un empate\n");
        }
        else if(Pc==3){
            printf("Gano la pc\n");
        }
        else{
            printf("Gano el usuario\n");
        }
        break;

        case 3:
        if( Usuario==3 && Pc==3){
            printf("Es un empate\n");
        }
        else if(Pc==1){
            printf("Gano la pc\n");
        }
        else{
            printf("Gano el usuario\n");
        }
        break;

    default:
    printf("Eror: Ingrese un valor de 1 a 3\n");
        break;
    }


    return 0;
}