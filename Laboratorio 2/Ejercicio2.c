#include <stdio.h>
int main(){

    //Variable para la Letra
    char Letra;

    printf("Ingrese una letra: ");
    scanf("%c", &Letra);

    switch(Letra){
        case 'A':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'a':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'E':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'e':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'I':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'i':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'O':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'o':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'U':
        printf("La letra '%c' es una vocal", Letra);
        break;

        case 'u':
        printf("La letra '%c' es una vocal", Letra);
        break;
        
        default:{
            printf("La Letra '%c' es una consonante", Letra);
        }
    }

    return 0;
}