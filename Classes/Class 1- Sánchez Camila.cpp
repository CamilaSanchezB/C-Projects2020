#include <iostream>
using namespace std;

class CNumber{
	private:
		int n1;
		int n2;
		int n3;
	public:
		CNumber (int num1, int num2, int num3);
		
		int max();
		int min();
		float prom();
		int par();
		int impar();
		void mostrar();
};

CNumber::CNumber(int num1, int num2, int num3){
	n1=num1;
	n2=num2;
	n3=num3;
}

int CNumber::max(){
	if (n1>n2 && n1>n3){
		return n1;
	}
	if (n2>n1 && n2>n3){
		return n2;
	}
	if(n3>n1 && n3>n2){
		return n3;
	}
}

int CNumber::min(){
	if (n1<n2 && n1<n3){
		return n1;
	}
	if (n2<n1 && n2<n3){
		return n2;
	}
	if(n3<n1 && n3<n2){
		return n3;
	}
}

float CNumber::prom(){
	return (n1+n2+n3)/3;
}

int CNumber::par(){
	int x=0;
	if(n1%2==0){
		x++;
	}
	if(n2%2==0){
		x++;
	}
	if(n3%2==0){
		x++;
	}
	return x;
}

int CNumber::impar(){
	int x=0;
	if(n1%2!=0){
		x++;
	}
	if(n2%2!=0){
		x++;
	}
	if(n3%2!=0){
		x++;
	}
	return x;
}

void CNumber::mostrar(){
	cout<<"El maximo: "<<max()<<endl;
	cout<<"El minimo: "<<min()<<endl;
	cout<<"El promedio: "<<prom()<<endl;
	cout<<"Cantidad de numeros pares: "<<par()<<endl;
	cout<<"Cantidad de numeros impares: "<<impar()<<endl;
}

int main(){
	CNumber nums(20,15,10);
	nums.mostrar();
}
