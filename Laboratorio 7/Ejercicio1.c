//Kelvin Rodrigo Iraheta Morales 00083121

#include <stdio.h>

int main()
{
    FILE *ArchivoPos = fopen("Num_positivos.txt", "w");
    FILE* ArchivoNeg = fopen("Num_ Neg.txt", "w");
    FILE* Cerozz = fopen("Cero.txt", "w");

    if( ArchivoPos ==  NULL)
    {
        printf("Error");
        return 1;
    }

    if( ArchivoNeg ==  NULL)
    {
        printf("Error");
        return 1;
    }

    int n;

    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &n);
    
        if( n > 0 )
        {
            fprintf(ArchivoPos, "%d", n);
            fprintf(ArchivoPos, "\n");
        }

        else if( n < 0 )
        {
            fprintf(ArchivoNeg, "%d", n);
            fprintf(ArchivoNeg, "\n");
        }

        else
        {
            fprintf(Cerozz, "%d", n);
        }

    }
    while(n != 0);

    fclose(ArchivoPos);
    fclose(ArchivoNeg);


    return 0;
}