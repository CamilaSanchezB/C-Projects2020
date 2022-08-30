#include <iostream>      
#include <string>          
#include <locale> 
#include <vector>        
using namespace std;
bool  SePuedeFiltrar(string nombre);
string Minus(string nombre);
int main ()
{
	int n,i;
	vector<string>vec;
	string nombre;
	cin>>n;
	
	for (i=0;i<n;i++){
		cin>>nombre;
		vec.push_back(Minus(nombre));
	}
	for (i=0;i<n;i++){
		if (SePuedeFiltrar(vec[i])){
			cout <<vec[i]<<endl;
		}		
	}
  return 0;
}

string Minus(string nombre){
    string minus;
	for(int i=0;i<nombre.size();i++){
		minus+=tolower(nombre[i]);
	}
	return minus;
}

bool  SePuedeFiltrar(string nombre)
{	bool flag;

	if(nombre[0]==nombre[nombre.size()-1]){
		flag= true;
	}
	else{
		flag= false;
	}
	return flag;		
}

