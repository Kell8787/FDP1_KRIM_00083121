// Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>
#include <string.h>

int EsoNoPalin(char *Palabra2);

int main()
{
    int Respuesta;      //Sera la variable que evalue si 
    char Palabra[80];
    printf("Escriba una palabra toda en minuscula o toda en mayuscula:");
    scanf("%s", Palabra);   //Almacena la palabra ingresada

    Respuesta = EsoNoPalin(Palabra);    //Evalua en nuestra funcion

    if (Respuesta)
    {
        printf("La palabra '%s' es palindromo\n", Palabra);
    }
    else
    {
        printf("La palabra '%s' no es palindromo\n", Palabra);
    }

    return 0;
}

// Funcion que evalua si es palindromo o no
int EsoNoPalin(char *Palabra2)
{

    int Tamanio, inicio, final; // Contara el tamanio del arreglo
    Tamanio = strlen(Palabra2);

    inicio = 0;          // Variable que inicia del valor inicial
    final = Tamanio - 1; // Variable que inicia del valor final

    while (Palabra2[inicio] == Palabra2[final]) //Mientras los valores (Caracteres) sean los mismos ira recorriendo de uno en uno el arreglo
    {

        if (inicio >= final)
            return 1;

        inicio++;
        final--;
    }
    return 0;
}