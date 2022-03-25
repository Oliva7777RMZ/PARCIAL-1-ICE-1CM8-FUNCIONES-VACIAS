#include<stdio.h>
#include <math.h>
//Declarar funcion area trapecio
void areayperimetrotrapecio();
int main(){
    //LLamar la funcion
    areayperimetrotrapecio();
    return 0;
}
//Definir funcion
void areayperimetrotrapecio(){
    //Compilar
    float basemayor,basemenor,altura,area,lado,perimetro;
    //Pedir datos
    printf("Ingresa el valor de la base mayor ");
    scanf("%f",&basemayor);
    printf("Ingresa el valor de la base menor ");
    scanf("%f",&basemenor);
    printf("Ingresa el valor de la altura ");
    scanf("%f",&altura);
    //Formula
    area = ((basemayor+basemenor) * altura) / 2;
    lado = sqrt(pow((basemayor-basemenor)/2,2) + pow((basemenor / 2),2));
    perimetro = ((lado * 2) + (basemayor + basemenor));
    //Resultado
    printf(" Area es = %f",area );
    printf(" Lado es = %f",lado );
    printf(" Perimetro es = %f",perimetro );
}
    




