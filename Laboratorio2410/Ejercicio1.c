#include <stdio.h>
#include <string.h>

int main()
{
    char SuTexto[100], ordendeLetras[30];               //Mis arreglos con un rango mas o menos grande

    printf("Escriba una frase: ");                      //Le pido al usuario una frase
    fgets(SuTexto, sizeof(SuTexto), stdin);             //Guardo en fgets almacenara una linea de texto, en este caso la que el usuario ingrese
                                                        //Lo guardamos en la variable de SuTexto
    printf("Escriba una secuencia de letras: ");        //Le pedimos al usuario que ingrese la secuencia de letras (Estas deben de ir en orden porque si no, el programa dira que no estan)
    scanf("%s", ordendeLetras);                         // Almacenamos en ordendeLetras 

    if (strstr(SuTexto, ordendeLetras))
    {
        printf("La secuencia de letras '%s' si esta en el texto\n", ordendeLetras);

        printf("Por lo tanto la secuencia '%s' esta en la frase: ", ordendeLetras);
        puts(SuTexto);
    }
    else
    {
        printf("La secuencia de letras '%s' no esta en el texto", ordendeLetras);
    }
    
    return 0;
}