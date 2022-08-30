/*Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
Diseñar un programa en C, que lea un vector de un máximo de 20 posiciones, y luego determine:
    -La suma de todos los valores
    -El mayor de los valores, así como la posición del mismo.*/
#include "stdio.h"
#include "stdlib.h"
#include "time.h"

int main(){
	int i,j,n,suma=0,aux,pos=0,vec[20];
	srand(time (NULL));
	
	for(i=0;i<20;i++){
        n=rand()%100;
        if(i>0){  
		for(j=0; j<i; j++){	       
		    if(n==vec[j]){
            	n=rand()%100;
            	j=-1;                    
        	}
    	}
    	}
    	vec[i]=n;
	}

	for(i=0;i<20;i++){
		printf("%d\t",vec[i]);
	}
	for(i=0;i<20;i++){
		suma=suma+vec[i];
	}

	aux=vec[0];
	
	for(i=0;i<20;i++){
		if (vec[i]>aux){
			aux=vec[i];
		}
		for (j=0;j<20;j++){
			if (vec[j]==aux){
			   pos=j+1;
			}
		}
		
	}
	printf("\n\nLa suma de todos los valores es %d \nEl mayor de los valores es %d y se encuentra en la posicion %d.\n\n",suma,aux,pos);

	system ("PAUSE");
	return 0;
}
