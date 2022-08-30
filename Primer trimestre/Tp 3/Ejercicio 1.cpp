#include <iostream>
using namespace std;

int main(){
	float a, b, c, d, resultado;
	cout<<"Introduzca el valor de A: "; cin>>a;
	cout<<"Introduzca el valor de B: "; cin>>b;
	cout<<"Introduzca el valor de C: "; cin>>c;
	cout<<"Introduzca el valor de D: "; cin>>d;
	
	if (a==0){
		cout<<"\nEl valor de la variable A no es valido. Fin del programa.";
	}
	else{
		resultado= ((a+b)/2)*((c*d)/a)+1;
		cout<<"\nEl resultado de la formula es: "<<resultado;
	}

	return 0;
}
