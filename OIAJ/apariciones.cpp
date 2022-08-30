#include <iostream>
#include <vector>
using namespace std;

void Cargavec(vector<int>&vec, int n);
void Comprobarvec(vector<int>&vec);

int main(){
	int n;
	vector<int>vec;
	
	cin>>n;
	
	Cargavec(vec,n);
	Comprobarvec(vec);
	
	return 0;
}

void Cargavec(vector<int>&vec, int n){
	
	int nro;
	
	for (int i=0; i<n; i++){
		cin>>nro;
		vec.push_back(nro);
	}	
}

void Comprobarvec(vector<int>&vec){
	int u=0,d=0,t=0,c=0,ci=0,se=0,si=0,o=0,nu=0,di=0;
	
	for (int i=0; i<vec.size(); i++){
		if (vec[i]==1){
			u++;
		}
		if (vec[i]==2){
			d++;
		}if (vec[i]==3){
			t++;
		}if (vec[i]==4){
			c++;
		}if (vec[i]==5){
			ci++;
		}if (vec[i]==6){
			se++;
		}if (vec[i]==7){
			si++;
		}if (vec[i]==8){
			o++;
		}if (vec[i]==9){
			nu++;
		}
		if (vec[i]==10){
			di++;
		}
		}
	cout<<u<<endl<<d<<endl<<t<<endl<<c<<endl<<ci<<endl<<se<<endl<<si<<endl<<o<<endl<<nu<<endl<<di;
	}

