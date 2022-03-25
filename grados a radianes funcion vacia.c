#include <stdio.h>
#include <math.h>
//Funcion Vacia
//Radianes a Grados
//Declarar Funcion
void radianesagrados();
int main(){
//Llamar la Funcion Vacia
radianesagrados();
  return 0;
}
//Definir Funcion
void radianesagrados(){
    //Compilar
    float grados,radianes;
    //Pedir datos
    printf("Ingrea el valor de los grados");
    scanf("%f",&grados);
    //Formula
    radianes = (grados * M_PI)/180;
    //Resultado
    printf("Los Radianes son = %f",radianes);
}