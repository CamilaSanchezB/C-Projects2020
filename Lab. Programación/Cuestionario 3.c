/*Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
Diseñar un programa que complete un array (vector) con los 20 primeros números enteros y los muestre en pantalla en orden ascendente*/
#include "stdio.h"

int main(){
	int i, vec[20];
	
	for(i=1;i<=20;i++){
		vec[i]=i;
	}
	for(i=1;i<=20;i++){
		printf("%d\n",vec[i]);
	}

	system("PAUSE");     
	return 0;
}
