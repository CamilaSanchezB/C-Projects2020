#include <iostream>
using namespace std;
int main(){
	
	float num;
	cout<<"Digite un numero: ";cin>>num;
	
	if (num==0){
		cout<<"\nEl numero es nulo";
	}
	else if(num>0){
		cout<<"\nEl numero es positivo";
	}
	else{
		cout<<"\nEl numero es negativo";
	}
		
	return 0;
}
