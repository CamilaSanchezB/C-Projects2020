//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
#include "stdio.h"

int main(){
	
	int x, n, i;
	
	printf("Cantidad de numeros a ingresar: ");
	scanf("%i",&x);
	
	int v[x];
	
	for (i=0; i<x; i++){
		printf("Ingresa el valor: ");
		scanf("%i",&v[i]);
	} //Se ingresan los valores al arreglo
	
	system ("cls");
	
	printf("Valores ingresados:\n");
	for (i=0; i<x; i++){
		printf("%i\t", v[i]);
	} //Se muestran los valores
	
	printf("\n\nIngrese el numero que desea buscar: ");
	scanf("%i",&n);
	
	int pos=0;
	
	for (i=0; i<x; i++){
		if (v[i]==n){
		pos=i+1;
		} //Busqueda del numero ingresado en el arreglo
	}
	
	//Se imprime en pantalla el resultado
	if (pos!=0){
		printf("\nEl numero se encuentra en la posicion %d\n\n",pos);
	}
	else {
		printf("\nEl numero no se encuentra en el arreglo\n\n");
	}
	
	system("pause");
	
	return 0;
}
