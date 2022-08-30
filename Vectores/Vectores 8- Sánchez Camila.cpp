#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string>Cargavec(vector<string>&vec, int nro);
string CambiarNombre (string s1);
void MostrarVec(vector<string>vec);

int main (){
    int nro;
    string n,nj;
    vector<string>vec;
    cin>>nro;
    vec=Cargavec(vec,nro);
    for(int i=0; i<vec.size(); i++){
    	vec[i]=CambiarNombre(vec[i]);
	}
    MostrarVec(vec);
    return 0;
}

vector<string> Cargavec(vector<string>&vec, int nro){
	string n;
	for (int i=0; i<=nro; i++){
		getline(cin,n);
		vec.push_back(n);
	}	
	return vec;
}

string CambiarNombre (string s1){
    string s2;
    for(int i=0;i<s1.size() ;i++){
 		 if (s1[i]==' '){
             s2 +=s1[i];
		}
		else if (s1[i]=='N'||s1[i]=='A'||s1[i]=='E'||s1[i]=='I'||s1[i]=='O'||s1[i]=='U'){
             s2 +=s1[i];
            }
	    else if (s1[i]!='N'&&s1[i]!='A'&&s1[i]!='E'&&s1[i]!='I'&&s1[i]!='O'&&s1[i]!='U'&&s1[i+1]=='A'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='N'&&s1[i]!='A'&&s1[i]!='E'&&s1[i]!='I'&&s1[i]!='O'&&s1[i]!='U'&&s1[i+1]=='E'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='I'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='O'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='U'){
	    	s2 +=s1[i];
		} 
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]!='a'&&s1[i+1]!='e'&&s1[i+1]!='i'&&s1[i+1]!='o'&&s1[i+1]!='u' ){
	 		 s2 +=s1[i];
     	  	 s2 +="u";
	   }
   	    else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='a'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='e'){
	    	s2 +=s1[i];
		}
		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='i'){
	    	s2 +=s1[i];
		}
	 	else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='o'){
	    	s2 +=s1[i];
		}

		else if (s1[i]!='n'&&s1[i]!='a'&&s1[i]!='e'&&s1[i]!='i'&&s1[i]!='o'&&s1[i]!='u'&&s1[i+1]=='u'){
	    	s2 +=s1[i];
		}  
  
        else  if (s1[i]=='n'||s1[i]=='a'||s1[i]=='e'||s1[i]=='i'||s1[i]=='o'||s1[i]=='u'){
             s2 +=s1[i];
        }
	}  
    return s2;
}

void MostrarVec(vector<string>vec){
	for(int i=1;i<vec.size();i++){
		cout<<"Konichi wa, "<<vec[i]<<"-san"<<endl;
	}	
}
