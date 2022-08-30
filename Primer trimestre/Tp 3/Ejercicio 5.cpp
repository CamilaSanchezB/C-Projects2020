//no pude simplificar el codigo
#include <iostream>
using namespace std;

int main(){
	int a, b, c, d, e, n1, n2;
	
	cout<<"Capture el elemento 1: "; cin>>a;
	cout<<"Capture el elemento 2: "; cin>>b;
	cout<<"Capture el elemento 3: "; cin>>c;
	cout<<"Capture el elemento 4: "; cin>>d;
	cout<<"Capture el elemento 5: "; cin>>e;
	cout<<"\nProporciona un numero: "; cin>>n1;
	cout<<"Proporciona otro numero: "; cin>>n2;
	
    if((n1==a)&&(n2==b)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}    
	else if((n1==a)&&(n2==c)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==a)&&(n2==d)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==a)&&(n2==e)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==b)&&(n2==a)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}    
	else if((n1==b)&&(n2==c)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==b)&&(n2==d)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==b)&&(n2==e)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==c)&&(n2==a)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}    
	else if((n1==c)&&(n2==b)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==c)&&(n2==d)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==c)&&(n2==e)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==d)&&(n2==a)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}    
	else if((n1==d)&&(n2==b)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==d)&&(n2==c)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==d)&&(n2==e)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==e)&&(n2==a)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}    
	else if((n1==e)&&(n2==b)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
    else if((n1==e)&&(n2==c)){
    	cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if((n1==e)&&(n2==d)){
		cout<<"\nAmbos numeros se encuentran en el arreglo"<<endl;
	}
	else if (n1==a){
		cout<<"\nEl numero "<<n1<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n1==b){
		cout<<"\nEl numero "<<n1<<" si se encuentra en el arreglo"<<endl;
    }
	else if (n1==c){
        cout<<"\nEl numero "<<n1<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n1==d){
		cout<<"\nEl numero "<<n1<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n1==e){
		cout<<"\nEl numero "<<n1<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n2==a){
		cout<<"\nEl numero "<<n2<<" si se encuentra en el arreglo"<<endl;
    }
	else if (n2==a){
		cout<<"\nEl numero "<<n2<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n2==b){
		cout<<"\nEl numero "<<n2<<" si se encuentra en el arreglo"<<endl;
    }
	else if (n2==c){
		cout<<"\nEl numero "<<n2<<" si se encuentra en el arreglo"<<endl;
	}
	else if (n2==e){
		cout<<"\nEl numero "<<n2<<" si se encuentra en el arreglo"<<endl;
    }
    else{
    	cout<<"\nNinguno de los numeros se encuentra en el arreglo"<<endl;
	}
        
	return 0;
}
