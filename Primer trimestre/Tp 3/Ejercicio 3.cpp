#include <iostream>
using namespace std;
int main(){
	float num, suma, prom, cont=1;
	cout<<"Captura un numero: ";cin>>num;
	suma=num;
	
	while(num>0){
		cout<<"Captura un numero: ";cin>>num;
		if (num>0){
			suma+=num;
			cont++;
		}
		}
	
	prom=suma/cont;
	cout<<"\nEl promedio es: "<<prom;
			
	return 0;
}
