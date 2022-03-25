#include<stdio.h>
//Funcion vacia celsius a fahrenheit
//Declarar Funcion
void celsiusafahrenheit();
int main(){
    //LLamar Funcion
    celsiusafahrenheit();
    return 0;
}
//Definen Funcion
void celsiusafahrenheit(){
    //Compilar
    float celsius,fahrenheit;
    //Pedir datos
    printf("Ingresa el valor de los grados celsius_");
    scanf("%f",&celsius);
    //Formula
    fahrenheit = (celsius * 1.8) + 32;
    //Resultado
    printf("Los grados fahrenheit son = %f",fahrenheit);
}