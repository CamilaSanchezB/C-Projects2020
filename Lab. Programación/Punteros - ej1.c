//Sánchez Camila- E.E.S.T. n°5- 4° 5°- Laboratorio de programación
#include <stdio.h>

void funcion() {
	printf("Estamos en la 1ra funcion\n");
}

void funcion2(){
	printf("Estamos en la 2da funcion\n");
}

void funcion3(){
	printf("Estamos en la 3er funcion\n");
}

int main() {
	void (*puntero_funcion)() = &funcion;
	void (*puntero_funcion2)()= &funcion2;
	void (*puntero_funcion3)()= &funcion3;

	puntero_funcion();
	puntero_funcion2();
	puntero_funcion3();

return 0;
}
