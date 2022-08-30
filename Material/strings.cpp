#include<bits/stdc++.h>
	
//0.045
using namespace std;
ifstream ent;
ofstream sal;

void leer_vector(vector<string> &vs, int n);//PASAJE POR REFERENCIA
void grabar_vector(vector<string> vs);
int main(int argc, char** argv) {
	ent.open("palabras.in"); //prepro archivo fisico para trabajar  ---- cada vez que lo llame en vez de cin va a ser ent
    sal.open("palabras.out"); //preparo archivo fisico para trabajar  --- cada vez que lo llame en vez de cout va a ser sal
    
	int n; //declaro variable n
	vector<string> vs; //declaro vector de string vs

	ent>>n;//leo primer numero del archivo
leer_vector(vs,n); //llamo al procedimiento de lectoura del vector de strings
sort(vs.begin(), vs.end()); //ordeno vector vs desde el inicio -begin hasta el fin -end-
grabar_vector(vs); //grabo en archivo o si deseo muestro los elementos del vector 
ent.close(); //cierro archivo
sal.close(); //cierro archivo

return 0;
}

void leer_vector(vector<string> &vs, int n)
{int i;
string palabra;
for( i=0;i<n;i++)
    {
    ent>> palabra;
    vs.push_back(palabra);
    }
}

void grabar_vector(vector<string> vs)
{
	for (int i=0;i<vs.size();++i) {
		//cout<<vec[i]<<endl;	/// esto es para verlo por pantalla
		sal<<vs[i]<<endl;
		}
}
