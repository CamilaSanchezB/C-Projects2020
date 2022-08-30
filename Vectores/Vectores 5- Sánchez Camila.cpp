#include <iostream>
#include <vector>

using namespace std;

void Cargavec(vector<int>&vec);
bool CompararVec(vector<int>vec1, vector<int>vec2);
void MostrarVec(vector<int>vec);

int main(){
	
	vector<int>vec1;
	vector<int>vec2;
	
	Cargavec(vec1);
	system("cls");
	Cargavec(vec2);
	system("cls");
	
	if(CompararVec(vec1,vec2)){
		cout<<"La carga de los vectores fue igual"<<endl<<endl;
	}
	else{
		cout<<"La carga de los vectores no fue igual"<<endl<<endl;
	}
	
	MostrarVec(vec1);
	MostrarVec(vec2);
	
	system("PAUSE");
	
	return 0;
}

void Cargavec(vector<int>&vec){
	
	int n;
	
	for (int i=0; i<5; i++){
		cout<<"Ingrese un valor: ";cin>>n;
		vec.push_back(n);
	}	
}

bool CompararVec(vector<int>vec1, vector<int>vec2){
	
	if (vec1==vec2){
		return true;
	}
	else{
		return false;
	}
}

void MostrarVec(vector<int>vec){
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"/ ";
	}
	cout<<endl<<endl;
}
