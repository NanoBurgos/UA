/*Ejemplo1: Lectura y escritura de valores en un arreglo unidimensional (vector)*/
#include<iostream>
using namespace std;
int main(){
	int notas[5]; //Arreglo de 5 enteros
	int suma = 0; //Variable acumuladora
	float promedio; //Variable para el resultado
	
	//Cargar valores en el arreglo
	cout<<"Ingrese 5 notas: "<<endl;
	for(int i=0; i<5; i++){
		cin>>notas[i];
		suma += notas[i]; //Acumulamos cada nota	
	}
	
	//Calculamos el promedio
	promedio= float(suma)/5;
	
	//Mostrar los valores y el promedio
	cout<<"Las notas ingresadas son: "<<endl;
	for(int i=0; i<5; i++){
		cout<<"Nota["<<i<<"]: "<<notas[i]<<endl;
	}
	
	cout<<"El promedio de las notas es: "<<promedio<<endl;
	
	return 0;
}