#include <stdio.h>

//Programa principal
int main(int argc,char *argv) {
    
    //Declaracion de Variables
    int vida_util,anio,i;
    double costo,val_rescate,depreciacion,val_ac,dep_acum;
    
    //Introducir datos
    printf("Introduzca el valor de compra del auto: ");
    scanf("%lf",&costo);
    
   printf("Vida Util: ");
   scanf("%d",&vida_util);
   
   printf("Valor final de rescate: ");
   scanf("%lf",&val_rescate);
   
   //Establecer año
   anio=2023;
   i=1;
   depreciacion=(costo-val_rescate)/vida_util;
   //Impresion de cabeceras
   printf("Anio    Depreciacion   Depreciacion acumulada    Valor Actual\n");
   while (i<=vida_util){
   dep_acum=dep_acum+depreciacion;
   val_ac=costo-dep_acum;
   printf("%d       %7.2lf           %8.2lf                 %8.2lf\n",i,depreciacion,dep_acum,val_ac);
   i=i+1;
   }
 
    
    
    

    return 0;
}