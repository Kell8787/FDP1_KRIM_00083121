//Kelvin Rodrigo Iraheta Morales 00083121

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{  
    FILE *ArchivoPos = fopen("Num_positivos.txt", "w");
    FILE* Cerozz = fopen("Cero.txt", "w");

    if( ArchivoPos ==  NULL)
    {
        printf("Error");
        return 1;
    }

    int Num;

    do
    {
        printf("Ingrese un numero positivo: ");
        scanf("%d", &Num);
        fprintf(ArchivoPos, "%d", Num);
        fprintf(ArchivoPos, "\n");

    }
    while(Num != 0);

    FILE *ArchivoPos = fopen("Num_positivos.txt", "r");


    int suma, cantidad, p;

    double N;

    int atoi(FILE *ArchivoPos);


    for(int i=0 ; i<p; i++)
    {  
        suma= i+suma;
    }  
    
    N=suma/p;

    printf("El promedio es: %lf",   N);






    return 0;
}