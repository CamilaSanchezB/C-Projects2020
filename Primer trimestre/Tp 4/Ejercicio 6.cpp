#include <iostream>
#include <math.h>
using namespace std;
int main (){
	float n1,n2,n3,r;
	
	cout<<"Ingrese un numero: ";cin>>n1;
	cout<<"Ingrese otro numero: ";cin>>n2;
	cout<<"Ingrese otro numero: ";cin>>n3;
	
	r=pow(n3,(n1+n2)) ;
	
	cout<<"\n("<<n1<<"+"<<n2<<")^"<<n3<<"= "<<r;
		
	return 0;
}
