#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

vector<int>Cargavec(vector<int>&vec);
void Mostrarvec(vector<int>vec);

int main(){
	vector<int>vec;
	vec=Cargavec(vec);
	Mostrarvec(vec);	
	
	return 0;
}

vector<int>Cargavec(vector<int>&vec){
	int a=0, b=0;
	string letras;
	
	while(letras[0]!='F'){
		getline(cin, letras);
		for (int i=0; i<letras.size(); i++){
			if (letras[i]=='A'&&letras[i-1]!='B'){
				a=a+1;
			}
			if(letras[i]=='B'&&letras[i-1]!='A'){
				b=b+1;
			}
		}
		vec.push_back(a);
		vec.push_back(b);
		a=0; b=0;
	}
	
	return vec;
}

void Mostrarvec(vector<int>vec){
	for(int i=0; i<vec.size(); i=i+2){	
		cout<<vec[i]<<"-"<<vec[i+1]<<endl;
	}
}
