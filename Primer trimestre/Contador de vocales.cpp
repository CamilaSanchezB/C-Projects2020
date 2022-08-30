#include <iostream>
#include <string>

using namespace std;

int ContVocales (string s1);

int main(){
	string str;
	int total;
	
	cout<<"Ingrese una frase: "; getline (cin, str);
	
	total=ContVocales (str);
	
	cout<<"Cantidad de vocales en "<<"'"<<str<<"'"<<" "<<total;
	
	return 0;
}

int ContVocales (string s1){
	int va=0, ve=0, vi=0, vo=0, vu=0, r;
	
	for (int i=0; i<s1.size(); i++){
		switch (s1[i]){
			case 'a':	va++; break;
			case 'e':	ve++; break;
			case 'i':	vi++; break;
			case 'o':	vo++; break;
			case 'u':	vu++; break;
		}
	}
	
	r= va+ve+vi+vo+vu;
	
	return r;
}
