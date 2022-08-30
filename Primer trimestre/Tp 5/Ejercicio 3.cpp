#include <iostream>
#include <string>
using namespace std;

bool Esmultiplode3 (int a){
 	int r;
	r=((a%3)==0);
	return r;
}

int main(){
	int a;
	bool r;
	string mensaje;
	cout<<"Ingrese un numero: ";cin>>a;
	
	r=Esmultiplode3(a);
		
	if (r==1) {
		mensaje="\nEl numero es multiplo de 3";
		cout<<mensaje;
	}
	else{
		mensaje = "\nEl numero no es multiplo de 3";
  		cout<<mensaje;
	}
	
	return 0;
}
