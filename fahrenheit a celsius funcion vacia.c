#include <stdio.h> 
#include <math.h>
//Funcion vacia fahrenheit a celsius
//Declarar Funcion
void fahrenheitacelsius();
int main(){
    //LLamar Funcion
    fahrenheitacelsius();
    return 0;
}
//Definir Funcion
void fahrenheitacelsius(){
    //Compilar
    float fahrenheit,celsius;
    //Pedir datos 
    printf("Ingresa el valor de los grados fahrenheit ");
    scanf("%f",&fahrenheit);
    //Formula
    celsius = (fahrenheit - 32 )/1.8;
    //Resultado
    printf("Los grados celsius son = %f",celsius);
}