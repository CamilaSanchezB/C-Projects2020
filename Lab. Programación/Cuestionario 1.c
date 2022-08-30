/*Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
Diseñar un programa que lea un vector de 10 posiciones, luego que determine si la quinta posición es positiva, si la primera posición es negativa y si la ultima posición es cero.*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
	int i,x,vec[10];
	srand(time (NULL));
	
	for(i=0;i<10;i++){		
		x=(rand()%11)-(rand()%4);
		vec[i]=x;
	}
	for(i=0;i<10;i++){
		printf("%d\t",vec[i]);
	}
	
	if(vec[0]<0){
		printf("\n\nLa primera posicion es negativa.");
	}
	else if(vec[0]==0){
		printf("\n\nLa primera posicion es 0");
	}
	else{
		printf("\n\nLa primera posicion es positiva.");
	}
	
	if(vec[4]>0){
		printf("\nLa quinta posicion es positiva.");
	}
	else if(vec[4]==0){
		printf("\nLa quinta posicion es 0");
	}
	else{
		printf("\nLa quinta posicion es negativa.");
	}
	
	if(vec[10]==0){
		printf("\nLa ultima posicion es 0.\n\n");
	}
	else{
		printf("\nLa ultima posicion no es 0.\n\n");
	}
	
	system("PAUSE");
	return 0;
}
