#include <iostream>
#include <math.h>
using namespace std;
int main(){
	float a,b,r;
	cout<<"Digite un numero: ";cin>>a;
	cout<<"Digite otro numero: ";cin>>b;
	
	r=pow(a,b);
	
	cout<<"\n"<<a<<"^"<<b<<"="<<r;
	
	return 0;
}
