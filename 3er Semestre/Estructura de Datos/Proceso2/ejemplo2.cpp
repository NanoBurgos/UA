/*Lectura y escritura de una matriz (arreglo bidimensional)*/
#include<iostream>
using namespace std;
int main(){
	int matriz[3][5]; //Declaramos una matriz de 3 filas y 5 columnas
	
	
	//Lectura de la Matriz
	cout<<"Ingrese los valores de la matriz (3x5): "<<endl;
	for(int f=0; f<3; f++){
		for(int c=0; c<5; c++){
			cin>>matriz[f][c];
		}	
	}
	

	//Escritura de la matriz
	cout<<"La matriz ingresada es: "<<endl;
	for(int f=0; f<3; f++){
		for(int c=0; c<5; c++){
			cout<<matriz[f][c]<<" ";
		}	
		cout<<endl; //salto de linea al terminar cada fila
	}
	
	return 0;
}