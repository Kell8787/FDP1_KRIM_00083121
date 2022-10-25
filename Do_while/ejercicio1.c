#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *varg[])
{
    int user_data, pc_data, gano, perdio, empato;
    
    gano=0;
    perdio=0;
    empato=0;
    
    for(int i=1; i<10; i++){
    
    //menu se repite si el usuario ingresa dato erróneo
 do {
    printf("Elija una de las siguietnes opciones:\n");
    printf("\t1. Piedra\n");
    printf("\t2. Papel\n");
    printf("\t3. Tijera\n");
    printf("Su opcion es: ");
    scanf("%d", &user_data);
 }while (user_data != 1 && user_data !=2 && user_data != 3);

    // Generar número aleatorio
    srand(time(NULL));
    pc_data = rand() % 3 + 1;
    printf("Usted escogio: %d\n", user_data);
    printf("La PC escogio: %d\n", pc_data);

    // Evaluación de los casos
    switch (user_data)
    {
    case 1:               // El Usuario ingresa Piedra
        if (pc_data == 1) // piedra
        {
         empato++;
            printf("empato\n");
        }
        else if (pc_data == 2) // papel
        {
            perdio++;
            printf("Usted perdio\n");
        }
        else // tijera
        {
            gano++;
            printf("Usted gano\n");
        }
        break;            // Termina el caso 1
    case 2:               // El Usuario ingresa papel
        if (pc_data == 1) // piedra
        {
            gano++;
            printf("Usted gano\n");
        }
        else if (pc_data == 2) // papel
        {
            empato++;
            printf("Usted empato\n");
        }
        else // tijera
        {
            perdio++;
            printf("Usted perdio\n");
        }
        break;            // Termina el caso 2
    case 3:               // El Usuario ingresa tijera
        if (pc_data == 1) // piedra
        {
            perdio++;
            printf("Usted perdio\n");
        }
        else if (pc_data == 2) // papel
        {
            gano++;
            printf("Usted gano\n");
        }
        else // tijera
        {
            empato++;       
            printf("Usted empato\n");
        }
        break;
    }
    }
    printf("Usted gano %d\n", gano);
    printf ("usted empato %d\n", empato);
    printf ("Usted perdio %d\n", perdio);
    return 0;
}