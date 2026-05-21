#include<iostream>
using namespace std;
//estructura a utilizar
struct persona {
	char nombre[30];
	int edad;
};
int main(){
	
	int n = 2; //declaramos la cant como variable, si se quiere hacer mas registros, se modifica solo aca
	
	persona p[n];
	
	cout<<"\nBienvenido"<<endl; //mensaje de bienvenida
	
	//bucle para la carga de datos
	for (int i=0; i<n; i++){
		cout<<"\nIngrese el nombre de la persona ["<<i+1<<"]: "<<endl;
		cin>>p[i].nombre;
		
		cout<<"\nIngrese la edad de la persona ["<<i+1<<"]: "<<endl;
		cin>>p[i].edad;
		
		//Condicionales para mostrar los mensajes de acuerdo a su edad
		if(p[i].edad > 0 && p[i].edad < 18){ //condicion menores de edad
			cout<<"\n "<<p[i].nombre<<" usted sera atendido en la VENTANILLA 2 "<<endl;
		} //el ejercicio dice "mostrar los nombres de los menores de edad"
			
		else if (p[i].edad>= 18){ //condicion mayores de edad
			cout<<"\nUsted sera atendido en la VENTANILLA 5 "<<endl;
		}
		else { // por si meten edad 0, negativos o algo invalido
			cout<<"\nIngreso de Edad invalido"<<endl;
		}
		cout<<"\n----------------------------------"<<endl;
	}
	
	//al final mostramos todos los registros
	cout<<"\n======= Lista de Registros Realizados ======="<<endl;
	
	//Bucle para mostrar todos los registros
	for (int i=0; i<n; i++){
		cout<<"\nRegisto ["<<i+1<<"]: Nombre: "<<p[i].nombre<<" con edad: "<<p[i].edad<<endl;
	}
	
	return 0;
}