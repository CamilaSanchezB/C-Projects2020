//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
#include <stdio.h>

void funcion(int valor1, int valor2){
	printf("Valor 1 = %d\n", valor1);
	printf("Valor 2 = %d\n", valor2);
}
void ord1(int valor1, int valor2){
	int i=valor1;
	while(i<=valor2){
		printf("%d\t", i);
		i++;
	}
	printf("\n");
}
void ord2(int valor1, int valor2){
	int i=valor2;
	while(i>=valor1){
		printf("%d\t", i);
		i--;
	}
}

int main(){
	void (*puntero_funcion)(int, int) = &funcion;
	void (*puntero_ord1)(int, int) = &ord1;
	void (*puntero_ord2)(int, int) = &ord2;

	puntero_funcion(2, 5);
	puntero_ord1(2, 5);
	puntero_ord2(2, 5);

	return 0;
}
