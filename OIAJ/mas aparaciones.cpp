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
	if (u>d&&u>t&&u>c&&u>ci&&u>se&&u>si&&u>o&&u>nu&&u>di){
		cout<<"1 "<<u;
	}
	if (d>u&&d>t&&d>c&&d>ci&&d>se&&d>si&&d>o&&d>nu&&d>di){
		cout<<"2 "<<d;
	}
	if (t>u&&t>d&&t>c&&t>ci&&t>se&&t>si&&t>o&&t>nu&&t>di){
		cout<<"3 "<<t;
	}
	if (c>u&&c>d&&c>t&&c>ci&&c>se&&c>si&&c>o&&c>nu&&c>di){
		cout<<"4 "<<c;
	}
	if (ci>u&&ci>d&&ci>t&&ci>c&&ci>se&&ci>si&&ci>o&&ci>nu&&ci>di){
		cout<<"5 "<<ci;
	}
	if (se>u&&se>d&&se>t&&se>c&&se>ci&&se>si&&se>o&&se>nu&&se>di){
		cout<<"6 "<<se;
	}
	if (si>u&&si>d&&si>t&&si>c&&si>ci&&si>se&&si>o&&si>nu&&si>di){
		cout<<"7 "<<si;
	}
	if (o>u&&o>d&&o>t&&o>c&&o>ci&&o>se&&o>si&&o>nu&&o>di){
		cout<<"8 "<<o;
	}
	if (nu>u&&nu>d&&nu>t&&nu>c&&nu>ci&&nu>se&&nu>si&&nu>o&&nu>di){
		cout<<"9 "<<nu;
	}
	if (di>u&&di>d&&di>t&&di>c&&di>ci&&di>se&&di>si&&di>o&&di>nu){
		cout<<"10 "<<di;
	}
	}
