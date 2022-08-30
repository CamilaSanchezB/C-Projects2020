#include <iostream>
#include <vector>
using namespace std;

bool BuscarVal(vector<int>&vec, int val);
void Mostrar_vector(vector<int>vec);

int main(){
	
	vector<int>vec;
	int val,n;
	
	
	for (int i=0; i<8; i++){
		cout<<"Ingrese un valor: ";cin>>n;
		vec.push_back(n);
	}
	
	system("cls");
	
	Mostrar_vector(vec);

	cout<<endl<<endl<<"Valor a buscar: ";cin>>val;
	
	if (BuscarVal(vec,val)){
		cout<<endl<<"El valor se encuentra en el vector"<<endl<<endl;
	}
	else{
		cout<<endl<<"El valor no se encuentra en el vector"<<endl<<endl;
	}
	
	system("PAUSE");
	
	return 0;
}

void Mostrar_vector(vector<int>vec){
	
	for(int i=0;i<vec.size();i++){
		cout<<vec[i]<<"/ ";
	}
}

bool BuscarVal(vector<int>&vec, int val){
	
	for (int i=0; i<vec.size();i++){
		if (vec[i]==val){
			return true;
		}
	}
	
}

