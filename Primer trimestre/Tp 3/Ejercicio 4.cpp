#include <iostream>
using namespace std;
int main (){
	int a, b, aux;
	cout<<"Digite un numero: ";cin>>a;
	cout<<"Digite un numero: ";cin>>b;
	aux=b;
	
	if(a==b){
		cout<<"\nLa serie es: "<<endl<<a;
	}
	else if (a>b){
		cout<<"\nLa serie es: "<<endl;
		for(a+=0; a>=b; a--){
		cout<<a<<endl; 
		}
	}
	else{
		cout<<"\nLa serie es: "<<endl;
		for(a+=0; a<=b; a++){
		cout<<a<<endl; 
		}
	}
	
	return 0;
}
