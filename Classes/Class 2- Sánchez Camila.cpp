#include<bits/stdc++.h>
using namespace std;

class CPersona{
	private:
		string Nombre;
		char Genero='M';
		int Edad=18;
		int DNI;
		float Peso;
		float Altura;
	public:
		CPersona (string n, char g, int e, int dni, float p, float a);
			string SetNombre(string n);
			char SetGenero(char g);
			int SetEdad(int e);
			int SetDNI(int d);
			float SetPeso(float p);
			float SetAltura(float a);
			int CalcularIMC();
			bool EsMayorDeEdad();
			bool ComprobarSexo(char g);
			void MostrarDatos();
};
CPersona::CPersona(string n, char g, int e, int dni, float p, float a){
	Nombre=SetNombre(n);
	Genero=SetGenero(g);
	Edad=SetEdad(e);
	DNI=SetDNI(dni);
	Peso=SetPeso(p);
	Altura=SetAltura(a);
}
string CPersona::SetNombre(string n){
	Nombre=n;
	return Nombre;
}
char CPersona::SetGenero(char g){
	if (ComprobarSexo(g)){
		Genero=g;
	}
	else{
		Genero='H';
	}
	return Genero;
}
int CPersona::SetEdad(int e){
	Edad=e;
	return Edad;
}
int CPersona::SetDNI(int d){
	DNI=d;
	return DNI;
}
float CPersona::SetPeso(float p){
	Peso=p;
	return Peso;
}
float CPersona::SetAltura(float a){
	Altura=a;
	return Altura;
}
int CPersona::CalcularIMC(){
	float IMC=(Peso/(pow(Altura,2)));
	if (IMC<20){
		return -1;
	}
	if (IMC>=20&&IMC<=25){
		return 0;
	}	
	if (IMC>25){
		return 1;
	}
}
bool CPersona::EsMayorDeEdad(){
	if (Edad>=18){
		return true;
	}
	else{
		return false;
	}
}
bool CPersona::ComprobarSexo(char g){
	if (Genero!=g){
		return false;
	}
}
void CPersona::MostrarDatos()
{
	 if(CalcularIMC()==-1){
	 	cout<<"Debajo del peso ideal"<<endl;
	 }
	 if(CalcularIMC()==0){
	 	cout<<"Peso ideal"<<endl;
	 }
	 if(CalcularIMC()==1){
	 	cout<<"Sobrepeso"<<endl;
	 }
	 if (EsMayorDeEdad()){
	 	cout<<"Es mayor de edad";
	 }
	 else{
	 	cout<<"No es mayor de edad";
	 }
}
int main(){
	string Nombre;
	char Genero;
	int Edad, DNI;
	float Peso, Altura;
	
	cout<<"Nombre: "; cin>>Nombre;
	cout<<"Genero: ";cin>>Genero;
	cout<<"Edad: ";cin>>Edad;
	cout<<"DNI: ";cin>>DNI;
	cout<<"Peso: ";cin>>Peso;
	cout<<"Altura: ";cin>>Altura;
	
	CPersona P1(Nombre,Genero,Edad,DNI,Peso,Altura);
	P1.MostrarDatos();
	
	return 0;
}
