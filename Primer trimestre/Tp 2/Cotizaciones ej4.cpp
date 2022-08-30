//Cotización del euro:68.20- Cotización del Real: 12.51- Cotización peso uru.: 1.38 
#include <iostream>
using namespace std;
int main(){
	double ars, usd, usd_tarjeta, euro, real, uru;
	cout<<"Ingrese la cantidad que desea convertir (ARS): "; cin>>ars;
	
	usd=ars/84;
	usd_tarjeta=ars/(84*1.3);
	euro=ars/68.20;
	real=ars/12.51;
	uru=ars/1.38;
	
	cout<<ars<<" Equivale a:"<<endl;
	cout<<"\nDolar: "<<usd<<endl;
	cout<<"Dolar tarjeta: "<<usd_tarjeta<<endl;
	cout<<"Euro: "<<euro<<endl;
	cout<<"Real: "<<real<<endl;
	cout<<"Peso uruguayo: "<<uru<<endl;
	
	return 0;
}
