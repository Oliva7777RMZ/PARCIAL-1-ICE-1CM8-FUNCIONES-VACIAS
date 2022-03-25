#include <stdio.h>
#include <math.h>
//FUNCION VACIA
//AREA DEL CIRCULO
void areacirculo();
int main(){
	//llamar la FUNCION
	areacirculo();
	return 0;
}
void areacirculo(){
    //Compilar
    float radio,area;
	//Pedir datos
	printf("Ingresa el valor del radio_");
	scanf("%f",&radio);
	//Formula
	area = M_PI * pow(radio,2);
	//Resultado
	printf("Area del Circulo = %f",area);
	
}