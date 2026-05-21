#include<iostream>
#include<cstring>
using namespace std;
//estructura a utilizar
struct jugadores {
	char nombre[30];
	char apellido [30];
	int edad;
	char disciplina [30];
};

int main(){
	char usuario_valido[]="adminclub", contrasenia_valida[]="deporte2026"; //registro en BD
	char usuario [30], contrasenia[30]; //para guardar lo que ingresa el usuario
	
	//Usuario intenta login
	cout<<"\nIngrese usuario: "<<endl;
	cin>>usuario;
	cout<<"\nIngrese contrasenia: "<<endl;
	cin>>contrasenia;
	
	if(strcmp(usuario,usuario_valido)==0 && strcmp(contrasenia,contrasenia_valida)==0){ //verificacion de login correcto
		
		cout<<"\n===Bienvenido==="<<endl;
		
		int n; 
		int joven_fut=99999, pos; //para guardar el mas joven de futbol y su posicion dentro del arreglo
		char fut_comp[60];//para guardar el nombre completo del jugador
		
		cout<<"\nIngrese la cantidad de jugadores que quiere registrar: "<<endl;
		cin>>n;
		
		jugadores j[n];
		
		//bucle para la carga de datos
		for (int i=0; i<n; i++){
			cout<<"\nIngrese el nombre del jugador ["<<i+1<<"]: "<<endl;
			cin>>j[i].nombre;
			
			cout<<"\nIngrese el apellido del jugador ["<<i+1<<"]: "<<endl;
			cin>>j[i].apellido;
			
			cout<<"\nIngrese la edad del jugador ["<<i+1<<"]: "<<endl;
			cin>>j[i].edad;
			
			cout<<"\nIngrese la disciplina del jugador ["<<i+1<<"]: "<<endl;
			cout<<"\nIngrese solo en minuscula una de estas modalidades: futbol, basquet, natacion, atletismo "<<endl;
			cin>>j[i].disciplina;
			
			//condicion para buscar al mas joven de futbol
			if(strcmp(j[i].disciplina,"futbol")==0 && j[i].edad<joven_fut){ 
				joven_fut = j[i].edad;
				pos = i;
			}
			
			cout<<"\n----------------------------------"<<endl;
		}
	
		strcpy(fut_comp, j[pos].nombre);
		strcat(fut_comp, " ");
		strcat(fut_comp, j[pos].apellido);
	
	
		cout<<"\n=====Los nombres de los jugadores de Futbol: ====="<<endl;//bucle para mostrar los jugadores de futbol
		for(int i = 0; i<n ; i++){
			if(strcmp(j[i].disciplina, "futbol")==0){
				cout<<"\n "<<j[i].nombre<<endl;
			}
			
		}
		
		cout<<"\n	===El jugador mas joven de Futbol es: "<<fut_comp<<endl;
		
		cout<<"\n=====Los nombres con mas de 6 caracteres: ====="<<endl;//bucle para mostrar los nombres con mas de 6 caracteres
		for(int i = 0; i<n ; i++){
			if(strlen(j[i].nombre)>6){
				cout<<"\n "<<j[i].nombre<<endl;
			}
			
		}
		
		
	}else{
		cout<<"\n===Acceso Denegado==="<<endl; //en caso de login incorrecto
	}
	
	return 0;
}