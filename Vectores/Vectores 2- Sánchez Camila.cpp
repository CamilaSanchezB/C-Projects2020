#include<bits/stdc++.h>
using namespace std;

vector<int>VectorA(vector<int>&vec, int n);
vector<int>VectorB(vector<int>&vec, vector<int>&aux, int n, float p);
vector<int>VectorC(vector<int>&vec, vector<int>&aux, int n);
float Promedio (vector<int>vec, int n);
int Multiplos (vector<int>vec);
int Suma (vector<int>vec);
void Mostrar_vector(vector<int>vec);

int main(){
	int n,m,s;
	float p;
	vector<int> A;
	vector<int> B;
	vector <int> C;
	
	cout<<"Numero de elementos: ";cin>>n;
	
	A=VectorA (A,n);
	p=Promedio (A,n);
	B=VectorB(A,B,n,p);
	m=Multiplos(B);
	s=Suma(B);
	C=VectorC(A,C,n);
	
	cout<<endl<<"Vector A: ";
	Mostrar_vector(A);
	cout<<endl<<"Vector B: ";
	Mostrar_vector(B);
	cout<<endl<<"Vector C: ";
	Mostrar_vector(C);
	cout<<endl<<endl<<"Promedio de los elementos de A: "<<p<<endl;
	cout<<endl<<"Elementos de B que son multiplos de 2 y 3 a la vez: "<<m<<endl;
	cout<<endl<<"Suma de los elementos de B: "<<s<<endl<<endl;
	
	system ("PAUSE");	
}

void Mostrar_vector(vector<int>vec){
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"/ ";
	}
}

vector<int>VectorA(vector<int>&vec, int n){
	
	srand (time(NULL));
	
	int nro;
	
	for (int i=0; i<n; i++){
		nro=rand()%32000;
		vec.push_back(nro);		
	}
	
	return vec;
 }
 
float Promedio (vector<int>vec, int n){
	float prom;
 	
	for (int i=0; i<n; i++){
		prom+=vec[i];
	}
	
	prom=prom/n;

	return prom;
 }
 
vector<int>VectorB(vector<int>&vec, vector<int>&aux, int n, float p){

	for (int i=0; i<n; i++){
		if(vec[i]>p){
 			aux.push_back(vec[i]);
		}
	}	
	return aux; 
 }
 
int Multiplos (vector<int>vec){
	int cont;
 	
    for (int i=0; i<vec.size(); i++){
		if (vec[i]%6==0){
			cont++;
	    }
    }
    return cont;
}

int Suma (vector<int>vec){
	int r;
	
	for (int i=0; i<vec.size(); i++){
		r+=vec[i];
	}
	
	return r;
}

vector<int>VectorC(vector<int>&vec, vector<int>&aux, int n){
	
	for (int i=0; i<n; i++){
		
		aux.push_back(vec[i]*2);
	}	
	return aux; 
}
