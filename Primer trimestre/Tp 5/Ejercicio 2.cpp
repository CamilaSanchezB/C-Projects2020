#include <iostream>
#include <string>
using namespace std;

int Esmaximo (int a, int b, int c){
	
	if (a>b && c){
		return a;
	}
	if (b>a&&c){
		return b;
	}
	if (c>a&&b){
		return c;
	}
}

int main(){
	int n1,n2,n3,r;
	string mensaje;
	
	mensaje= "Ingrese un numero: ";
	
	cout<<mensaje; cin>>n1;
	cout<<mensaje; cin>>n2;
	cout<<mensaje; cin>>n3;
	
	r=Esmaximo (n1,n2,n3);
	
	mensaje= "\nEl maximo es: ";
	cout<<mensaje<<r;
	
	return 0;
}
