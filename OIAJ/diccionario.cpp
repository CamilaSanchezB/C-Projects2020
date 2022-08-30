#include <iostream>
#include <string.h>

using namespace std;

void ordenar(string p1, string p2);

int main(){
	
	string p1,p2;

	cin>>p1>>p2;
	
	for(int i=0; i<p1.size();i++){
		p1[i]=tolower(p1[i]);
	}
		for(int i=0; i<p2.size();i++){
		p2[i]=tolower(p2[i]);
	}
	
	ordenar(p1,p2);
		
	return 0;
}


void ordenar (string p1, string p2){
	
	if (p1<p2){
		cout<<"LA PRIMERA";
	}
	if (p1==p2){
		cout<<"IGUALES";
	}
	if (p1>p2){
		cout<<"LA SEGUNDA";
	}
}
