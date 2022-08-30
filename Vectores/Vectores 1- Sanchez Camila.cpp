#include<bits/stdc++.h>
using namespace std;
 
vector<int>Generar_vector(vector<int>&vec, int n);
vector<int>Pares_vector(vector<int>vec,vector<int>&aux); 
void Mostrar_vector(vector<int>vec);
	
int main(){	
	
	vector<int>A;
	vector<int>B;

	A=Generar_vector(A,10);
	B=Pares_vector(A,B); 
	
	cout<<"A-Numeros: "<<endl;
	Mostrar_vector(A);
	cout<<endl<<endl;
	
	cout<<"B-Numeros pares: "<<endl;
	Mostrar_vector(B);
	cout<<endl<<endl;

	system ("PAUSE");
	return 0;
 }
 
 vector<int>Generar_vector(vector<int>&vec, int n){
	
	srand (time(NULL));
	int nro;
	
	for (int i=0; i<n; i++){
		nro=rand()%100;
		vec.push_back(nro);		
	}
	
	return vec;
 }
 
 vector<int>Pares_vector(vector<int>vec,vector<int>&aux){
	
	for(int i=0; i<vec.size();i++){
 		if((vec[i])%2==0){
 			aux.push_back(vec[i]);
	    }
    }
    
	return aux;
 }

void Mostrar_vector(vector<int>vec){
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"/ ";
	}
}
