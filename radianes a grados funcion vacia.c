#include <stdio.h>
#include <math.h>
//Funcion vacia radianes a grados
//Declarar Funcion
void radianesagrados();
int main(){
    //LLamar Funcion
    radianesagrados();
    return 0;
}
//Definen Funcion
void radianesagrados(){
    //Compilar 
    float radianes,grados;
    //Pedir datos
    printf("Ingresa los radianes ");
    scanf("%f",&radianes);
    //Formula
    grados = (radianes * 180)/ M_PI;
    //Resultado
    printf("Los Grados son = %f",grados);

}