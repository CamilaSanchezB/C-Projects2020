#include<bits/stdc++.h>
using namespace std;

class CPassword{
	private:
		int Longitud=8;
		string Contrasena;
	public: 
		CPassword();
		void setLongitud(int l);
		string GenerarContrasena();
		bool esFuerte();
		int getLongitud();
		string getContrasena();
};
CPassword::CPassword(){
}
void CPassword::setLongitud(int l){
	Longitud=l;
}
int CPassword::getLongitud(){
	return Longitud;
}
string CPassword::GenerarContrasena(){
	srand(time(NULL));
	string c="";
	int x;
	char vec[]{'a','A','b','B','c','C','d','D','e','E','f','F','g','G','h','H','i','I','j','J','k','K','l','L','m','M','n','N','o','O','p','P','q','Q','r','R','s','S','t','T','u','U','v','V','w','W','y','Y','z','Z','0','1','2','3','4','5','6','7','8','9'};

	for(int i=0; i<Longitud; i++){
		x=rand()%vec.size();
		c+=vec[x];
	}
	
	return c;
}
bool CPassword::esFuerte(){
	int min=0, may=0, n=0;
	for(int i=0; i<Contrasena.size(); i++){
		if(Contrasena[i]>='a' && Contrasena[i]<='z'){
			min++;
		}
		if(Contrasena[i]>='A' && Contrasena[i]<='Z'){                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
			may++;
		}
		if(Contrasena[i]>='0' && Contrasena[i]<='9'){
			n++;
		}
	}
	if(min>1 && may>2 && n>5){
		return true;
	}
}

string CPassword::getContrasena(){
	Contrasena=GenerarContrasena();
	return Contrasena;
}

int main(){
	
	int Longitud;
	cout<<"Establecer longitud: ";cin>>Longitud;
	CPassword Pass1;
	
	if (Longitud<8){
		Pass1.setLongitud(8);
	}
	else{
		Pass1.setLongitud(Longitud);
	}
	system("cls");
	cout<<"Contrasena: "<<Pass1.getContrasena()<<endl;
	cout<<"Longitud: "<<Pass1.getLongitud()<<endl;
	if(Pass1.esFuerte()){
		cout<<"Es fuerte"<<endl;
	}
	else{
		cout<<"No es fuerte"<<endl;
	}
	
	system("PAUSE");
	return 0;
}
