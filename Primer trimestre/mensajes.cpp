#include <iostream>
#include <string.h>
using namespace std;

bool Sepuedeleer (string palabra, string base);
string Invertir (string frase);
int main(){
	string palabra, base, aux;
	int r;
	cout<<"Hilada base: ";getline(cin, base);
	cout<<"Pablabra clave: ";getline(cin, palabra);
	r=Sepuedeleer(palabra, base);
	if (r==0){
	aux=Invertir(base);
	r=Sepuedeleer(palabra, aux);
	if (r==0){
		cout<<"\nNO";
	}
	else{
		cout<<"\nSI\nD";
	}
}
else{
	cout<<"\nSI\nI";
}
	return 0;
}

bool Sepuedeleer (string palabra, string base){
	int i;
	i=base.find(palabra);
	if (i<=-1){
	return 0;
	}
	else {
		return 1;
	}
}
string Invertir (string frase){
	string s;
	for(int i= frase.size()-1; i>=0; i--){
		s+=frase.at(i);
	}
	return s;
}
