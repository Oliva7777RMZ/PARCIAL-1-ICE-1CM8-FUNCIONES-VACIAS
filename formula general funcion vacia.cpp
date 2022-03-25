#include <stdio.h>
#include<math.h>
//Declarar funcion vacia formula general
void formulageneral();
int main(){
    //LLamar funcion
    formulageneral();
    return 0;
}
//Definir funcion
void formulageneral(){
    //Compilar
    float va,vb,vc,x1,x2;
    //Pedir datos
    printf("Ingresa el valor de A ");
    scanf("%f",&va);
    printf("Ingresa el valor de B ");
    scanf("%f",&vb);
    printf("Ingresa el valor de C ");
    scanf("%f",&vc);
    //formulageneral
    x1 = (-vb+sqrt(pow(vb,2)- 4 * va * vc))/ (2 * va);
    x2 = (-vb-sqrt(pow(vb,2)- 4 * va * vc))/ (2 * va);
    //Resultado
    printf(" Valor X1 = %f ",x1 );
    printf(" Valor X2 = %f ",x2 );
}

