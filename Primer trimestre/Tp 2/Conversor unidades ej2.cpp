#include <iostream>
using namespace std;
int main(){
	double pies, yardas, pulgadas, centimetros, metros; 
	cout<<"Ingrese una medida (pies): "; cin>>pies;
	
	yardas=pies*1/3;
	pulgadas=pies*12/1;
	centimetros=pulgadas*2.54;
	metros=centimetros/100;
	
	cout<<"Medidas equivalentes en: "<<endl;
	cout<<"\nYardas:"<<yardas<<endl;
	cout<<"Pulgadas:"<<pulgadas<<endl;
	cout<<"Centimetros:"<<centimetros<<endl;
	cout<<"Metros:"<<metros<<endl;

	return 0;
}
