/*Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
Diseñar un programa que lea 5 números por teclado, los copie a otro array multiplicados por 2 y los muestre todos ordenados usando un tercer array.*/
#include "stdio.h"

int main(){
	
	int n,i,j=0,aux,vec1[5],vec2[5],vec3[10];
	
	for(i=0;i<5;i++){
		printf("Ingrese un numero: ");
		scanf("%d",&n);
		vec1[i]=n;
		vec2[i]=n*2;
	}
	
	for(i=0;i<10;i++){
		for(i=0;i<5;i++){
			vec3[i]=vec1[i];
		}
		for(i=5;i<10;i++){
			vec3[i]=vec2[j];
			j++;
		}
		for(i=0;i<10;i++){
			for(j=i+1;j<10;j++){
				if(vec3[i]>vec3[j]){
					aux=vec3[i];
					vec3[i]=vec3[j];
					vec3[j]=aux;
				}
			}
		}
	}
	
	system("cls");
	
	printf("Valores originales:\n");
	for(i=0;i<5;i++){
		printf("%d\t",vec1[i]);
	}
	printf("\n\nValores duplicados:\n");
	for(i=0;i<5;i++){
		printf("%d\t",vec2[i]);
	}
	printf("\n\nTodos los valores:\n");
	for(i=0;i<10;i++){
		printf("%d\t",vec3[i]);
	}
	printf("\n\n");
	
	system ("PAUSE");
	return 0;
}
