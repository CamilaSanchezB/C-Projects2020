#include <iostream>
#include <string>

using namespace std;

int main(){
	string A,B;
	
	cin>>A>>B;
	
	if (A==B){
		cout<<"Empate";
	}
	else{
		switch(A){
			case 'Piedra': 
				 if (B=='Tijera'){
				 	cout<<Ana;
				 }
				 if (B=='Papel'){
				 	cout<<Bartolo;
				 }
				 break;
	        case 'Tijera':
	        	if (B=='Papel'){
				 	cout<<Ana;
				 }
				 if (B=='Piedra'){
				 	cout<<Bartolo;
				 }
				 break;
		    case 'Papel':
		    	if (B=='Piedra'){
				 	cout<<Ana;
				 }
				 if (B=='Tijera'){
				 	cout<<Bartolo;
				 }
				 break;        	
		}	
	}
return 0;
}
