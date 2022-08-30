#include<bits/stdc++.h>
using namespace std;

class CAhorcado{
	  private:
 		string palabra;
  	  	int vidas;
  	  	int puntos;
	  public:
	  	CAhorcado (string p, int v, int pu, int categoria);
	  	string GenerarPalabra(int categoria, string p);
	  	string PonerAstericos(string ast, string p);
	  	bool EstaEnPalabra(string p, char l);
	  	string ReemplazarAsterisco (string p, char l, string ast);
	  	string Error (char l, string error);
	  	char Pista(string p, string ast);
	  	void YaEstaba(string ast, string error, char l);
	  	int GetVidas();
	  	int GetPuntos();

};

CAhorcado::CAhorcado(string p, int v, int pu, int categoria){
	palabra=GenerarPalabra(categoria, p);
	vidas=v;
	puntos=pu;
}

string CAhorcado::GenerarPalabra(int categoria, string p){
	srand(time(NULL));
	
	int x;
	
	x=rand()%36;
	
	string Paises[]{"ARGENTINA", "BRASIL", "CHILE", "PERU", "BOLIVIA", "PARAGUAY", "COLOMBIA", "ECUADOR", "URUGUAY", "VENEZUELA", "MEXICO", "ESTADOS UNIDOS", "CANADA", "CUBA", "REPUBLICA DOMINICANA", "ALEMANIA", "FRANCIA", "PORTUGAL", "RUSIA", "ITALIA", "GRECIA", "HOLANDA", "AUSTRIA", "REPUBLICA CHECA", "INGLATERRA", "FINLANDIA", "IRLANDA", "MONACO", "SUECIA", "CHINA", "INDIA", "JAPON", "KENIA", "EGIPTO", "NUEVA ZELANDA"}; //35
	string Capitales[]{"BUENOS AIRES", "BRASILIA", "SANTIAGO DE CHILE", "LIMA", "SUCRE", "ASUNCION", "BOGOTA", "QUITO", "MONTEVIDEO", "CARACAS" , "CIUDAD DE MEXICO" , "WASHINGTON" , "OTTAWA" , "LA HABANA", "SANTO DOMINGO", "BERLIN", "PARIS", "LISBOA", "MOSCU", "ROMA", "ATENAS", "AMSTERDAM", "VIENA", "PRAGA", "LONDRES", "HELSINKI", "DUBLIN", "MONACO", "ESTOCOLMO", "PEKIN", "NUEVA DELHI", "TOKIO", "NAIROBI", "EL CAIRO", "WELLINGTON"};//35
	string Mamiferos[]{"BALLENA", "CABALLO", "CHIMPANCE", "DELFIN", "ELEFANTE", "PATO", "GORILA", "HIPOPOTAMO", "JIRAFA", "LEON", "MURCIELAGO", "NUTRIA", "ORNITORRINCO", "OSO POLAR", "RINOCERONTE", "TIGRE", "ZORRO", "PERRO", "KOALA", "LEOPARDO", "ARDILLA", "LLAMA", "CANGURO", "OSO HORMIGUERO", "YAGUARETE", "VACA", "CONEJO", "RATA", "OVEJA", "ORCA", "OSO PANDA", "OSO PARDO", "PANTERA", "CIERVO", "ALPACA"}; //35
	string Aves[]{"GANSO", "URRACA", "CONDOR", "LECHUZA", "GOLONDRINA", "LORO", "CANARIO", "CISNE", "PAJARO CARPINTERO", "PAVO REAL", "TUCAN", "HALCON", "CUERVO", "FLAMENCO", "GUACAMAYA", "PINGUINO", "GALLINA", "GALLO", "BUHO", "AVESTRUZ", "PERICO", "PALOMA", "GAVIOTA", "AGUILA", "BUITRE", "GORRION", "PELICANO", "COLIBRI", "CACATUA", "PATO", "COTORRA", "JILGUERO", "KOEL", "AZULEJO", "SECRETARIO"}; //35
	string MusicosInt[]{"FREDDIE MERCURY", "MICHAEL JACKSON", "ELTON JOHN", "MADONNA", "HARRY STYLES", "DAVID BOWIE", "JOHN LENON", "DIANNA ROSS", "CELINE DION", "WHITNEY HOUSTON", "PAUL MCCARTNEY", "EMINEM", "ED SHEERAN", "SHAWN MENDES", "CAMILA CABELLO", "SELENA GOMEZ", "LADY GAGA", "SHAKIRA", "BEYONCE", "ROXANNE", "ARIANA GRANDE", "MILEY CYRUS", "DUA LIPA", "NIALL HORAN", "LOUIS TOMLINSON", "ZAYN MALIK", "LIAM PAYNE", "GLORIA GAYNOR", "CINDY LAUPER", "TAYLOR SWIFT", "BOB MARLEY", "DEMI LOVATO", "ADELE", "FRANK SINATRA", "BILLY JOEL", "BILLY IDOL"};	//35
	string MusicosNac[]{"CALLEJEROS", "BERSUIT VERGARABAT", "MERCEDES SOSA", "PALITO ORTEGA", "VIRUS", "CACHO CASTANA", "PATRICIA SOSA", "SODA STEREO", "LUIS ALBERTO SPINETTA", "CHARLY GARCIA", "FITO PAEZ", "PAPPO", "RODRIGO", "GILDA", "INDIO SOLARI", "PATRICIO REY Y SUS REDONDITOS DE RICOTA", "LALI", "VILMA PALMA E VAMPIROS", "ANDRES CALAMARO", "CARLOS GARDEL", "SANDRO", "WOS", "MIRANDA", "TAN BIONICA", "LA MOSCA", "LOS PIOJOS", "CIRO Y LOS PERSAS", "GUSTAVO CERATI", "JULIETA VENEGAS", "ULISES BUENO", "ABEL PINTOS", "AIRBAG", "CATUPECU MACHU", "LOS CADILLACS", "LOS AUTENTICOS DECADENTES"}; //35

	switch (categoria){
		case 1: p= Paises[x];
			break;
		case 2: p= Capitales[x];
			break;
		case 3: p= Mamiferos[x];
			break;
		case 4: p= Aves[x];
			break;
		case 5: p= MusicosInt[x];
			break;
		case 6: p= MusicosNac[x];
			break;
	}
	
	return p;
}

string CAhorcado::PonerAstericos(string ast, string p){
	ast=p;
  	for(int i=0; i<p.size(); i++){
    	if(ast[i]!=' '){
        	ast[i]='*';
  		}
  }
  return ast;
}

bool CAhorcado::EstaEnPalabra(string p, char l){	
	bool rta=false;
	for (int i=0; i<p.size(); i++){
		if (p[i]==l){
			puntos=puntos+20;
			rta = true;
		}
	}
	return rta;
}

string CAhorcado::ReemplazarAsterisco(string p, char l, string ast){
	for (int i=0; i<p.size(); i++){
		if (p[i]==l){
			ast[i]=l;
		}
	}
	return ast;
}

string CAhorcado::Error(char l, string error){
	vidas=vidas-1;
	puntos=puntos-20;
	
	error+=l;
	error+='-';
	
	return error;
}

char CAhorcado::Pista(string p, string ast){
	int x=rand()%p.size()+1;
	
	while(p[x]==ast[x]){
		x=rand()%p.size()+1;
	}

	char pista=p[x];
	puntos=puntos-50;
	return pista;
}

void CAhorcado::YaEstaba(string ast, string error, char l){
	for(int i=0; i<error.size(); i++){
		if(error[i]==l){
			puntos=puntos-20;
		}
	}
	for(int i=0; i<ast.size(); i++){
		if(ast[i]==l){
			puntos=puntos-20;
		}
	}
	
}

int CAhorcado::GetVidas(){
	return vidas;
}

int CAhorcado::GetPuntos(){
	return puntos;
}

int main(){
	int categoria,vidas=7, puntos=100;
	bool op;
	char l,aux,pista;
	string palabra, error, ast;
	
do{
	cout<<"\t-----AHORCADO-----"<<endl;
	cout<<"1-Paises"<<"\n2-Capitales"<<"\n3-Mamiferos"<<"\n4-Aves"<<"\n5-Musicos internacionales"<<"\n6-Musicos nacionales"<<endl;
	cout<<"\nSeleccione una categoria: ";cin>>categoria;
	
	while (categoria<1 || categoria>6){
	   	cout<<"Opcion incorrecta, ingrese una nueva opcion: "; cin>>categoria;
	}
	CAhorcado Ahorcado(palabra, vidas, puntos, categoria);
	system("cls");
	palabra=Ahorcado.GenerarPalabra(categoria,palabra);
	ast=Ahorcado.PonerAstericos(ast, palabra);
	cout<<"\t-----AHORCADO-----"<<endl<<endl<<"Cada pista cuesta 50 puntos"<<endl<<"Cada letra repetida resta 20 puntos"<<endl<<"Cada acierto suma 20 puntos"<<endl<<"Cada error resta 20 puntos"<<endl<<endl;
	system("PAUSE");
	system("cls");
	
	do{
		vidas=Ahorcado.GetVidas();
		puntos=Ahorcado.GetPuntos();
		cout<<"\t-----AHORCADO-----"<<endl;
		cout<<"Vidas= "<<vidas<<endl<<"Puntos= "<<puntos<<endl<<"Letras erroneas: "<<error<<endl<<"Ingrese '!' para obtener una pista"<<endl;
		cout<<"\n\t"<<ast<<endl;
		cout<<"\nIngrese una letra: ";cin>>l;
		l=toupper(l);
		Ahorcado.YaEstaba(ast,error,l);
		if (Ahorcado.EstaEnPalabra(palabra, l)==true &&l!='!'){
			ast=Ahorcado.ReemplazarAsterisco(palabra, l, ast);
		}
		else if (Ahorcado.EstaEnPalabra(palabra, l)==false &&l!='!'){
			error=Ahorcado.Error(l,error);
		}
		
		if(l=='!'){
			if (puntos>=50){
			   pista=Ahorcado.Pista(palabra, ast);
			   ast=Ahorcado.ReemplazarAsterisco(palabra,pista,ast);
			   cout<<"\n\t"<<ast<<endl;
			}
			else{
				cout<<"\nPuntos insuficientes."<<endl;
				system("PAUSE");
			}	
		}

		system("cls");
	}while(vidas>0 && ast!=palabra);
	
	if(ast!=palabra){
		cout<<"\tGAME OVER\nLa palabra era: "<<palabra<<endl;
	}
	else{
		cout<<"\t¡Felicitaciones, ganaste!\n\tLa palabra era: "<<palabra<<endl;
	}

	cout<<"\n\t0-Salir\t\t1-Volver a jugar\n: ";cin>>op;
	system("cls");
	error="";
	vidas=7;
	puntos=100;
	
}	while(op==true);
	
	system("PAUSE");
	return 0;
}
