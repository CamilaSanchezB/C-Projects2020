#include <iostream>
#include <math.h>
using namespace std;
int main(){
	double n1, n2;
	cout<<"Ingrese una cantidad con cinco decimales: ";cin>>n1;
	cout<<"Ingrese otra cantidad con cinco decimales: ";cin>>n2;
	
	cout<<"\n"<<n1<<"/"<<n2<<"= "<<trunc(n1/n2);
	return 0;
}
