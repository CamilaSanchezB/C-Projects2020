//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
#include "stdio.h"

int main(){
	
	int x, n, i=0, pos=0;
	
	printf("Cantidad de numeros a ingresar: ");
	scanf("%i",&x);
	
	int v[x];
	
	while (i<x){
		printf("Ingresa el valor: ");
		scanf("%i",&v[i]);
		i++;
	} //Se ingresan los valores al arreglo
	
	system ("cls");
	
	printf("Valores ingresados:\n");
	
	i=0;
	while (i<x){
		printf("%i\t", v[i]);
		i++;
	} //Se muestran los valores
	
	printf("\n\nIngrese el numero que desea buscar: ");
	scanf("%i",&n);
	
	i=0;
	while (pos==0&&i<x){
		if (v[i]==n){
		pos=i+1;
		} //Busqueda del numero ingresado en el arreglo
		i++;
	}
	
	//Se imprime en pantalla el resultado
	if (pos!=0){
		printf("\nEl numero se encuentra en la posicion %d\n\n", pos);
	}
	else {
		printf("\nEl numero no se encuentra en el arreglo\n\n");
	}
	
	system("pause");
	
	return 0;
}
