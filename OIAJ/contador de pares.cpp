#include <iostream>
#include <vector>
using namespace std;

void Cargavec(vector<int>&vec, int n);
void Contador(vector<int>&vec);

int main(){
	int n;
	vector<int>vec;
	
	cin>>n;
	
	Cargavec(vec,n);
	Contador(vec);
	
	return 0;
}

void Cargavec(vector<int>&vec, int n){
	
	int nro;
	
	for (int i=0; i<n; i++){
		cin>>nro;
		vec.push_back(nro);
	}	
}

void Contador(vector<int>&vec){
	int c=0;
	int j=1;
	for (int i=0; i<vec.size();i++){
	   do{
 	   	  if((vec[i]+vec[j])%2==0){
 	   	  	c++;
			}
			j++;
	   }while(j<vec.size());
	   j=1;
	}
	cout<<c;
	}
