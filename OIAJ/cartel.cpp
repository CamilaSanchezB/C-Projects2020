#include<iostream>
#include <string>
using namespace std;

void Cartel(string p);

int main(){
	
	string p;
	
	cin>>p;
	
	Cartel(p);
	
	return 0;
}

void Cartel (string p){
	
	for (int i=0; i<p.size()+2;i++){
		cout<<"*";
	}
	cout<<endl<<"*"<<p<<"*"<<endl;
	for (int i=0; i<p.size()+2;i++){
		cout<<"*";
	}
}
