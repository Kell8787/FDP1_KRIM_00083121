// Kelvin Rodrigo Iraheta Morales #00083121

#include <stdio.h>

int sumadenumeros(int num1, int num2); //Mi funcion suma

int main(){

    int a, b;

    printf("Valor inicial: "); //Le pido al Usuario el valor inicial
    scanf("%d", &a);

    printf("Valor final: "); //Le pido al Usuario el valor final
    scanf("%d", &b);

    printf("El resultado de la suma desde %d a %d es de %d", a, b, sumadenumeros( a, b)); //Aqui me va a mostar el valor final de la suma 


}


int sumadenumeros(int num1, int num2){

    int suma;    //Creo mi variable para podes dar inicio a la suma

    suma=0;      //Suma sera 0 para iniciar desde 0
    for( int i=num1; i<=num2 ; i++)//Aqui mi valor i, sera el valor inicial, y mi valor num2 sera el final,
    {  
        suma= suma + i;              // Comenzara desde 0 + (Nuestro valor inicial) y terminara de ejecutarse cuando llegue a i menor o igual que nuestro valor fin 
                                    // Pero el i va a ir aumentando en 1 hasta llegar a num2
    }

    return suma;
}