#include <iostream>
#include <string.h>
using namespace std;

string cambiarletras(string s1);

int main(){
	string texto;
	cout<<"Ingrese el texto que desea transformar: ";getline(cin, texto);
	cout<<"\nEl texto cambiado es: "<<cambiarletras(texto);
	return 0;
}

string cambiarletras(string s1){
	int i;
	for(i=0; i<s1.size(); i++){
		if(s1[i]=='a'||s1[i]=='A'){
			s1[i]='4'; 
		}
		if(s1[i]=='b'||s1[i]=='B'){
			s1[i]='8';
		}
		if(s1[i]=='e'||s1[i]=='E'){
			s1[i]='3';
		}	
		if(s1[i]=='g'||s1[i]=='G'){
			s1[i]='6';
		}
		if(s1[i]=='i'||s1[i]=='I'){
			s1[i]='1';
		}
		if(s1[i]=='o'||s1[i]=='O'){
			s1[i]='0';
		}
		if(s1[i]=='p'||s1[i]=='P'){
			s1[i]='9';
		}
		if(s1[i]=='s'||s1[i]=='S'){
			s1[i]='5';
		}
		if(s1[i]=='t'||s1[i]=='T'){
			s1[i]='7';
		}	
	}
	return s1;
}
