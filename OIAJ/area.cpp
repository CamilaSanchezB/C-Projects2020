#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int main(){
	string fig;
	int ancho,largo,alto,lado,area;
	
	cout<<"";cin>>fig;
	
	if (fig=="cuadrado"){
		cout<<"";cin>>lado;
			area=pow(lado,2);
			cout<<area;
	}
	if (fig=="rectangulo"){
		cout<<"";cin>>ancho>>alto;
			area=(ancho*alto);
			cout<<area;
	}
	if (fig=="cubo"){
		cout<<"";cin>>lado;
			area=(pow(lado,2))*6;
			cout<<area;
	}
	if (fig=="caja"){
		cout<<"";cin>>ancho>>largo>>alto;
            area=((ancho*alto)*2)+((largo*alto)*2)+((ancho*largo)*2);
            cout<<area;
	}

	return 0;
}
