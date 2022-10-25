// Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>

void Evaluacion(int num1); //Mi funcion

int main()
{

    int K;

    printf("Ingrese un numero: "); //Aqui le pedimos al usuario cualquier numero, el que desee
    scanf("%d", &K);               //Guardamos el numero

    Evaluacion(K);                 //Manda a llamar la funcion y la evalua en K, y luego realiza la operacion si es par o impar

    return 0;
}

void Evaluacion(int num1)                //Aqui tengo el procedimiento que hara la funcion, ocupamos void porque no necesitamos retornar ningun valor
{

    if( num1%2 == 0 ){                          //Evalua si la el residuo del numero es 0, si no concluye que es impar
        printf("El %d es par", num1);
    }
    else{
        printf("El %d es impar", num1);
    }

}



