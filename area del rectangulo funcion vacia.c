# include <stdio.h> 
//Area del rectangulo Funcion vacia
//Declarar funcion vacia
void arearectangulo(void);
int main(){
    arearectangulo();
    return 0;
}
//Definir funcion vacia
void arearectangulo(void){
    //compilar
    long base;
    long altura;
    long area;
    // pedir datos
    printf("dame la base ");
    scanf("%ld",&base);
    printf("dame la altura ");
    scanf("%ld",&altura);
    //realizar formula
    area = base * altura;
    //resultado
    printf("base = %ld ", base);
    printf("altura = %ld ", altura);
    printf("area = %ld ", area);
}
