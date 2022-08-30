//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
#include <stdio.h>
#include <math.h>

int sumar(int a, int b){
return a+b;
}
int restar(int a, int b){
return a-b;
}
int dividir(int a, int b){
return a/b;
}
int potenciar(int a, int b){
return pow(a,b);
}

void funcion_principal(int a, int b, int (*funcion)(int, int)){
int resultado = funcion(a,b);
printf("El resultado es %d\n", resultado);
}

int main(){

int num1 = 20;
int num2 = 4;

printf("Suma:\n");
funcion_principal(num1, num2, sumar);

printf("\nResta:\n");
funcion_principal(num1, num2, restar);

printf("\nDivision:\n");
funcion_principal(num1, num2, dividir);

printf("\nPotenciacion:\n");
funcion_principal(num1, num2, potenciar);

return 0;
}
