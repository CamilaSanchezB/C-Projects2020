#include <iostream>
#include <string>
using namespace std;

int Esminimo (int a, int b){
	if (a<b){
		return a;
	}
	if (b<a){
		return b;
	}
}

int main (){
	int n1,n2,r;
	string mensaje= "Ingrese un numero: ";
	
	cout<<mensaje; cin>>n1;
	cout<<mensaje; cin>>n2;
	
	r=Esminimo (n1,n2);
	
	mensaje= "\nEl minimo es: ";
	cout<<mensaje<<r;
	
	return 0;
}
