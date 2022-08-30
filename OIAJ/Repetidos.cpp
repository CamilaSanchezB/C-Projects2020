#include<bits/stdc++.h>

using namespace std;

vector<int>CargarVec(vector<int>&vec);
void Repetidos(vector<int>&vec);

int main(){
	vector<int>vec;
	
	vec=CargarVec(vec);
	Repetidos(vec);
	
	return 0;
}
vector<int>CargarVec(vector<int>&vec){
	int nro;
	do{
		cin>>nro;
		vec.push_back(nro);	
	}while(nro!=0);

	return vec;
 }
 void Repetidos(vector<int>&vec){
 	sort(vec.begin(), vec.end());
 	bool x=false; 
 	for (int i=0; i<vec.size(); i++){
		if(vec[i]==vec[i+1]){
			x=true;
		}
	}
	if (x==true){
		cout<<"Hay repetidos";
	}
	else{
		cout<<"No hay repetidos";
	}
 }
 
 
