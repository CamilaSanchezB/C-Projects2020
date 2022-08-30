#include <iostream>
#include <string>
using namespace std;

int main(){
	string p;
	int n;
	
	cout<<""; cin>>p;
	cout<<""; cin>>n;
	
	p[n-1]='X';
	
	cout<<p;
	
	system ("PAUSE");
	
	return 0;
}
