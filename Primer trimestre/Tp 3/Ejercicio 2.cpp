#include <iostream>
using namespace std;
int main(){
	float km1, l1, km2, l2, km3, l3, kmxl1, kmxl2, kmxl3;
	cout<<"Introduzca los km recorridos con el 1er tanque: "; cin>>km1;
	cout<<"Introduzca los litros consumidos en el 1er tanque: "; cin>>l1;
	cout<<"\nIntroduzca los km recoridos con el 2do tanque: "; cin>>km2;
	cout<<"Introduzca los litros consumidos en el 2do tanque: "; cin>>l2;
	cout<<"\nIntroduzca los km recorridos con el 3er tanque: "; cin>>km3;
	cout<<"Introduzca los litros consumidos en el 3er tanque: "; cin>>l3;
	
	kmxl1=km1/l1;
	kmxl2=km2/l2;
	kmxl3=km3/l3;
	
	cout<<"\nRendimiento del 1er tanque: "<<kmxl1<<" kilometros por litro"<<endl;
	cout<<"Rendimiento del 2do tanque: "<<kmxl2<<" kilometros por litro"<<endl;
	cout<<"Rendimiento del 3er tanque: "<<kmxl3<<" kilometros por litro"<<endl;
		
	return 0;
}
