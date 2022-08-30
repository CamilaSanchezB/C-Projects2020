#include <iostream>
#include <string>
using namespace std;

int duplicar (int a){
	
	int r;
	r=a*2;
	
	return r;
}

int main (){
	int n1,r;
	string mensaje= "Ingrese un numero: ";
	
	cout<<mensaje; cin>>n1;
	
	r=duplicar(n1);
	
	mensaje= "\nEl doble del numero es: ";
	cout<<mensaje<<r;
	
	return 0;
}
