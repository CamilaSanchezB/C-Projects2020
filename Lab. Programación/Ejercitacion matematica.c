//Programa para ejercitar con calculos matematicos de distintos niveles de dificultad
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
int main (){
	int n1,n2,n3,nvl,r,op;
	srand(time (NULL));
 do{
	printf("------Ejercicios matematicos basicos------\n");
	printf("\n SELECCIONA UN NIVEL\n\n\t1-Facil\n\t2-Medio\n\t3-Dificil\n\n Opcion elegida: "); scanf("%d",&nvl);
	system ("cls");
	switch(nvl){
		case 1: n1=10+rand()%30; n2=0+rand()%20;
			 	printf("\t---Nivel: FACIL---\n\n Resuelva el siguiente ejercicio");
			 	printf("\n\t%d+%d-10\n",n1,n2);
			 	r=n1+n2-10;
			 	printf("\n Resultado: ");scanf("%d", &n3);
				if (n3==r){
					printf("\n ¡Felicitaciones, el resultado es correcto!\n\n");
				}
				else{ printf("\n Incorrecto. El resultado es: %d\n\n", r);
				}break;
		case 2: n1=0+rand()%30; n2=0+rand()%20;
			 	printf("\t---Nivel: MEDIO---\n\n Resuelva el siguiente ejercicio");
			 	printf("\n\t(%d-%d)*5+15\n",n1,n2);
	 			r=(n1-n2)*5+15;
		   		printf("\n Nota: Recorda separar en terminos, en caso de ser necesario\n\n Resultado: ");scanf("%d", &n3);
	 			if (n3==r){
					printf("\n ¡Felicitaciones, el resultado es correcto!\n\n");
				}
				else{ printf("\n Incorrecto. El resultado es: %d\n\n", r);
				}break;
		case 3: n1=0+rand()%12; n2=0+rand()%26;
			 	printf("\t---Nivel: DIFICIL---\n\n Resuelva el siguiente ejercicio");
			 	printf("\n\t%d*%d-%d*2+7*7-%d\n",n1,n1,n2,n1);
			 	r=(n1*n1)-n2*2+(7*7)-n1;
			 	printf("\n Nota: Recorda separar en terminos, en caso de ser necesario\n\n Resultado: ");scanf("%d", &n3);
	 			if (n3==r){
					printf("\n ¡Felicitaciones, el resultado es correcto!\n\n");
				}
				else{ printf("\n Incorrecto. El resultado es: %d\n\n", r);
				}break;
		default: printf("\n La opcion elegida no existe\n\n"); break;
		}	
	printf("-------------------------------------------\n");
	printf(" ELIJA UNA OPCION\n\n\t1-Volver al selector de niveles\n\t2-Salir\n\n Opcion elegida: ");scanf("%d",&op);
	system ("cls");
	}while (op==1);
	return 0;
	}
