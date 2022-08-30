#include <iostream>
#include <math.h>
#define PI 3.14159265
using namespace std;
int main(){
	double a,r;
	cout<<"Ingrese un numero: ";cin>>a;
	
	r=sin(a*PI/180);
	
	cout<<"\nEl seno de "<<a<<" es= "<<r;
	
	return 0;
}
