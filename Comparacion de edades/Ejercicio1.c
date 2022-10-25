#include <stdio.h>
int main(int argv, char *varg[]){
    int edad1, edad2, edad3;

    //Entradas
    printf("Ingrese edad del estudiante 1= ");
    scanf("%d", &edad1);

    printf("Ingrese edad del estudiante 2= ");
    scanf("%d", &edad2);

    printf("Ingrese edad del estudiante 3= ");
    scanf("%d", &edad3);

    if(edad1<edad2 && edad1<edad3)
    {
        printf("El estudiante 1 es el menor de todos\n");
    }
    else if(edad2<edad3 && edad2<edad1)
    {
        printf("El estudiante 2 es el menor de todos\n");
    }
    else if(edad3<edad1 && edad3<edad2)
    {
        printf("El estudiante 3 es el menor de todos\n");
    }
    else if(edad1==edad2 && edad1<edad3)
    {
        printf("Los estudiantes 1 y 2 son menores que el estudiante 3\n");
    }
    else if(edad2==edad3 && edad2<edad1)
    {
        printf("Los estudiantes 2 y 3 son menores que el estudiante 1\n");
    }
    else if(edad3==edad1 && edad3<edad2)
    {
        printf("Los estudiante 3 y 1 son menores que el estudiante 2\n");
    }
    else
    {
        printf("Los estudiantes tienen la misma edad\n");
    }
    
    return 0;

}