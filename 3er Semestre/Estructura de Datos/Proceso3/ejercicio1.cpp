/*1- Notas de estudiantes Cargar en un vector las notas de 10 alumnos y
calcular:
-Promedio general.
-Cantidad de aprobados y reprobados(nota igual a 1)*/
#include<iostream>
using namespace std;
int main(){
	
	int n=10, acumulador=0, cont_reprob = 0, cont_aprob=0;
	float promedio;
	
	int notas[n];
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese la nota del alumno ["<<i+1<<"]: ";
		cin>>notas[i];
		
		acumulador = acumulador + notas[i];
		
		if(notas[i]==1){
		cont_reprob = cont_reprob + 1;
		}
		else if(notas[i]>1){
			cont_aprob = cont_aprob + 1;
		}
	}
	
	promedio = float(acumulador)/n;
	
	cout<<"\nEl promedio general es: "<<promedio;
	cout<<"\nCantidad de aprobados ("<<cont_aprob<<"), y reprobados("<<cont_reprob<<")"<<endl;
	
	return 0;
}