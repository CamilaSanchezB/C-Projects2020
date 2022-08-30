#include<bits/stdc++.h>
using namespace std;

class CTriangulo{
	private:
		float A,B,C;
	public:
		CTriangulo();
		void setA(float a);
		void setB(float b);
		void setC(float c);
		float getA();
		float getB();
		float getC();
		bool esEscaleno();
		bool esIsosceles();
		bool esEquilatero();
		bool tieneAnguloRecto();
};
CTriangulo::CTriangulo(){
}
void CTriangulo::setA(float a){
	A=a;
}
void CTriangulo::setB(float b){
	B=b;
}
void CTriangulo::setC(float c){
	C=c;
}
bool CTriangulo::esEscaleno(){
	if(A!=B && A!=C && B!=C){
		return true;
	}
	else{
		return false;
	}
}
bool CTriangulo::esIsosceles(){
	if(A==B && A!=C){
		return true;
	}
	else{
		return false;
	}
}
bool CTriangulo::esEquilatero(){
	if (A==B && A==C){
		return true;
	}
	else{
		return false;
	}
}
bool CTriangulo::tieneAnguloRecto(){
	if(sqrt(pow(A,2)+pow(B,2))==C){
		return true;
	}
	else{
		return false;
	}
}

int main(){
	float a,b,c;				
	cout<<"Lado A: ";cin>>a;					
	cout<<"Lado B: ";cin>>b;
	cout<<"Lado C/Base/Hipotenusa: ";cin>>c;
	
	CTriangulo T1;
	T1.setA(a);
	T1.setB(b);
	T1.setC(c);
	
	if(T1.esEscaleno()){
		cout<<"\nEs un triangulo escaleno";
	}
	if(T1.esIsosceles()){
		cout<<"\nEs un triangulo isosceles";
	}
	if(T1.esEquilatero()){
		cout<<"\nEs un triangulo equilatero";
	}
	if(T1.tieneAnguloRecto()){
		cout<<"\nTiene un angulo recto";
	}
	
	return 0;
}

