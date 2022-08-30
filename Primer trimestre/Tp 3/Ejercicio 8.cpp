#include <iostream>
using namespace std;
int main (){
	float n1, n2, n3;
	cout<<"Digite un numero: "; cin>>n1;
	cout<<"Digite otro numero: "; cin>>n2;
	cout<<"Digite otro numero: "; cin>>n3;
	
	if (n1<n2 && n1<n3){
		cout<<"El menor es el numero "<<n1;
	}
	else if(n2<n1 && n2<n3){
		cout<<"El menor es el numero "<<n2;
	}
	else if(n3<n1 && n3<n2){
		cout<<"El menor es el numero "<<n3;
	}
		
	return 0;
}
