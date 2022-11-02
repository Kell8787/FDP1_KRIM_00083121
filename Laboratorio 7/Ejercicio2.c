// Kelvin Rodrigo Iraheta Morales 00083121

#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ArchivoNotas;
    ArchivoNotas = fopen("Notas", "w");

    float resultado, Numeros, Cantidad, sumatoria = 0;

    if (ArchivoNotas == NULL)
    {
        printf("ERROR");
        return 1;
    }

    printf("Cantidad de Notas o Numeros:");     //Pedirle al usuario que ingrese la cantidad de numeros que añadira
    scanf("%f", &Cantidad);

    for (int i = 0; i < Cantidad; i++)
    {
        printf("Escriba las Notas o numeros, para calcular su promedio: ");     //Le pedimos los numeros 

        scanf("%f", &Numeros);

        fprintf(ArchivoNotas, "%f", Numeros);

        fprintf(ArchivoNotas, "\n");
        sumatoria = sumatoria + Numeros;
        resultado = sumatoria / Cantidad;
    }

    char ch;

    ch = fgetc(ArchivoNotas);
    
    while (ch != EOF)
    {
        printf("%c", ch);
        ch = fgetc(ArchivoNotas);
    }

    printf("El promedio de las Notas o numeros ingresados es: %f", resultado);

    fclose(ArchivoNotas);

    return 0;
}