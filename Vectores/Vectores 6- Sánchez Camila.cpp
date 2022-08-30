#include <iostream>
#include <vector>
using namespace std;

void Cargavec(vector<int>&vec);
bool CompararVec(vector<int>&vec1, vector<int>&vec2);
void Vaciarvec(vector<int>&vec);
void MostrarVec(vector<bool>&vec);

int main(){
	
	int n;
	vector<int>arriba;
	vector<int>abajo;
	vector<bool>resultado;
	
	cin>>n;
	
	for (int i=0; i<n; i++){
		Cargavec(arriba);
		Cargavec(abajo);
		resultado.push_back(CompararVec(arriba,abajo));
		Vaciarvec(arriba);
		Vaciarvec(abajo);
	} 
	
	MostrarVec(resultado);
	
	return 0;
}

void Cargavec(vector<int>&vec){
	
	int d;
	
	for (int i=0; i<6; i++){
		cin>>d;
		if (d>=0 && d<=2000){
			vec.push_back(d);
		}
	}
}

void Vaciarvec(vector<int>&vec){
	vec.erase(vec.begin(),vec.end());
}

bool CompararVec(vector<int>&vec1,vector<int>&vec2){

	for (int i=0; i<6; i++){
		//intercalado
		if (vec1[i]!=vec1[i+1]){
			if(vec1[i]==vec2[i+1]&&vec1[i+1]==vec2[i]){
				return true;
			}
			if (vec1[i]!=vec2[i+1]){
				return false;
			}
		}
		//iguales
		if (vec1[i]==vec1[i+1]&&vec2[i]==vec2[i+1]){
			if (vec1[i]==vec2[i]){
				return true;
			}
			if (vec1[i]!=vec2[i]){
				return false;
			}
		}
		//ninguno
		else {
			return false;
		}
	}

}

void MostrarVec(vector<bool>&vec){
	for(int i=0;i<vec.size();i++){
		if (vec[i]==true){
			cout<<"SI"<<endl;
		}
		if (vec[i]==false){
			cout<<"NO"<<endl;
		}
	}
}
