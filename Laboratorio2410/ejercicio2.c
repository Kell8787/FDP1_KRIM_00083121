//Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
int main()
{
    int n;

    printf("Ingrese el tamanio del arreglo: ");
    scanf("%d", &n);


    char nombre[n];
    printf("Ingresa tu nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    puts(nombre);
    return 0;
}
