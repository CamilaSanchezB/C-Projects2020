#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;
int main(){
	double a,r;
	cout<<"Ingrese un numero: ";cin>>a;
	
	r=cos(a*PI/180);
	
	cout<<"\nEl coseno de "<<a<<" es= "<<r;
	
	return 0;
}
