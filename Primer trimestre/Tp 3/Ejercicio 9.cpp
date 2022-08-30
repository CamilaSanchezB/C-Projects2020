#include <iostream>
using namespace std;
int main(){
	
	float tempC, tempF;
	cout<<"Ingrese la temperatura en grados centigrados: "; cin>>tempC;
	
	tempF=((tempC*9)/5)+32;
	cout<<"\nConvertido en grados Fahrenheit: "<<tempF;	
	
	return 0;
}
