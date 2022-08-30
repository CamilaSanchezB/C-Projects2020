#include<bits/stdc++.h>
using namespace std;

vector<int> Generar_vector(vector<int>&vec);
void Mostrar_vector(vector<int>vec);
bool Repetidos(vector<int>vec);

int main(){
	
	vector<int>A;
	
	A=Generar_vector(A);
	sort(A.begin(),A.end());
	Mostrar_vector(A);
	
	if (Repetidos(A)){
		cout<<endl<<endl<<"HAY REPETIDOS"<<endl<<endl;
	}
	else{
		cout<<endl<<endl<<"NO HAY REPETIDOS"<<endl<<endl;
	}
	
	system ("PAUSE");
	
	return 0;
}

vector<int> Generar_vector(vector<int>&vec){
	srand (time(NULL));
	
	for (int i=0;i<100;i++){
		vec.push_back(rand()%100000);
	}
	
	return vec;
}

void Mostrar_vector(vector<int>vec){
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"/ ";
	}
}

bool Repetidos (vector<int>vec){
	
	for (int i=0; i<vec.size();i++){
		
		if (vec[i]==vec[i]+1){
			return true;
		}
	}
}
