// El c�digo imprime �falso� ya que no se cumple la condici�n x>y && x==y
#include <iostream>
using namespace std;
int main (){
int x = 2, y = 6; 

if(x<y && x==y) 

 cout<<"verdadero"; 

else 

cout<<"falso";

return 0;
}

