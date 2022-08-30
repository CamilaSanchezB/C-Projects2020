#include <iostream>      
#include <string>          
#include <locale>         
using namespace std;
bool  SePuedeFiltrar(string nombre);
int main ()
{
	int n,i;
	string nombre;
	cin>>n;
	
	for (i=0;i<n;i++)
	{
		cin>>nombre;
	
		if (SePuedeFiltrar(nombre))
		{
			cout << "\t\t\t    " << nombre<<endl;
		}
	}
  
  return 0;
}

bool  SePuedeFiltrar(string nombre)
{
	bool flag;
	string minus;
	
	for(int i=0;i<nombre.size();i++){
		minus+=tolower(nombre[i]);
	}
	if(minus[0]==minus[nombre.size()-1]){
		flag= true;
	}
	else{
		flag= false;
	}

	return flag;		
}
