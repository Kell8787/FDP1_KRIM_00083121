//Kelvin Rodrigo Iraheta Morales 00083121

#include <stdio.h>

int main()
{
    FILE *ArchivosPos;
    ArchivosPos= fopen("Num_positivos.txt", "w");

    FILE *ArchivoNeg; 
    ArchivoNeg = fopen("Num_ Neg.txt", "w");

    FILE *Cerozz;
    Cerozz = fopen("Cero.txt", "w");

    //Esto solo para evaluar si existe o no el archivo
    
    if( ArchivosPos ==  NULL)
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

    //Este do-while pedira al usuario que ingrese un numero entero y depende de si es mayor a 0 o menor a 0 lo guardara en un archivo y si el numero es 0 se guardara en otro archivo
    do
    {
        printf("Ingrese un numero entero: ");
        scanf("%d", &n);
    
        if( n > 0 )
        {
            fprintf(ArchivosPos, "%d", n);
            fprintf(ArchivosPos, "\n");
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

    //Cerramos los FILES
    fclose(ArchivosPos);
    fclose(ArchivoNeg);
    fclose(Cerozz);


    return 0;
}