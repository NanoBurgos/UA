/*Ejemplo 4 : cargar nombres de estudiante con sus respectivas notas , al final 
mostrar la nota del estudiante con la nota mas baja*/
#include<iostream>
using namespace std;
int main(){
	string nombres[5]; //Vector para nombres
	int notas[5]; //Vector para notas
	int cantidad = 5; //Numero de estudiantes
	
	//Cargar datos
	cout<<"Ingrese los nombres y las notas de "<<cantidad<<" estudiantes: "<<endl;
	for(int i=0; i<cantidad; i++){
		cout<<"Nombre del estudiante "<<i+1<<" : ";
		cin>>nombres[i];
		cout<<"Nota de "<<nombres[i]<<" : ";
		cin>>notas[i];
	}
	
	//Buscar la nota mas baja
	int menor=notas[0];
	int posMenor=0;
	
	for(int i=0; i<cantidad; i++){
		if(notas[i]<menor){
			menor=notas[i];
			posMenor=i;
		}
	}
	
	//Mostrar el resultado
	cout<<"\nEl estudiante con la nota mas baja es: "<<nombres[posMenor]
		<<" con nota "<<menor<<endl;
	
	return 0;
}