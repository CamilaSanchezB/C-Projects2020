#include <iostream>
using namespace std; 
int main(){
	
	int A, B, aux;
	cout<<"Ingrese el valor de A: "; cin>>A;
	cout<<"Ingrese el valor de B: "; cin>>B;
	
	aux=A;
	A=B;
	B=aux;
	
	cout<<"A:"<<A<<endl; cout<<"B:"<<B<<endl;
	
	return 0;
}
