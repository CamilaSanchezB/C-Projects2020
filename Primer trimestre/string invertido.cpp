#include <iostream>
#include <string.h>

using namespace std;

string invertir (string s1);
int main (){
	string frase,str;
	
	cout<<"Ingrese una frase: "; getline(cin,frase);
	str=invertir(frase);
	
	cout<<"\nLa frase invertida es:"<<str<<endl;

	return 0;
}

string invertir (string s1){
	string s2;
	for(int i= s1.size()-1; i>=0; i--){
		s2+=s1.at(i);
	}
	return s2;
}
