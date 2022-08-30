//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
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
	
	printf("\n\n%d",suma);
}

