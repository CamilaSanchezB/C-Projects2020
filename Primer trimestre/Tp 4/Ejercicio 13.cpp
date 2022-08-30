#include<iostream>
#include<time.h>
#include <stdlib.h>
using namespace std;
int main(){
	int n, nr;
	
	srand(time(NULL));
	nr=1+ rand()%(100);
	
	cout<<"Usted digitara un numero y el programa va a generar otro aleatoriamente, luego se establecera la relacion (<, > o =) entre estos."<<endl;
	cout<<"\nIngrese un numero: ";cin>>n;
	
	if(n<nr){
		cout<<"\nEl numero "<<n<<" es menor que "<<nr;
	}
	if (n>nr){
		cout<<"\nEl numero "<<n<<" es mayor que "<<nr;
	}
	if (n==nr){
		cout<<"\nEl numero "<<n<<" es igual que "<<nr;
	}		
	
	return 0;
}
