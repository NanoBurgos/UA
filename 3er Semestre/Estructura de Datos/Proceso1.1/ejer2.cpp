/*Declarar una matriz de 3x4 que represente el número de pacientes atendidos en 3 salas durante 4 días. Ingresar los datos y calcular el total de pacientes atendidos por cada sala.*/
#include<iostream>
using namespace std;
int main(){
	// fila = numero de sala
	// columas = dias
	int f=3, c=4;
	
	//acumuladores
	int acum1=0, acum2=0, acum3=0;
		
	int matriz[f][c];
	
	for(int i=0; i<f;i++){
		for(int j=0; j<c; j++){
				cout<<"Ingrese el elemento ["<<i+1<<"]["<<j+1<<"]"<<endl;
				cin>>matriz[i][j];
		}
	}
	
	for(int i=0; i<f;i++){
		for(int j=0; j<c; j++){
				if(i==0){
					acum1=acum1+matriz[i][j];
				}
				if(i==1){
					acum2=acum2+matriz[i][j];
				}
				if(i==2){
					acum3=acum3+matriz[i][j];
				}
		}
	}
	cout<<"====================================="<<endl;
	

	cout<<"Pacientes atendidos de la sala 1: "<<acum1<<endl;
	cout<<"Pacientes atendidos de la sala 2: "<<acum2<<endl;
	cout<<"Pacientes atendidos de la sala 3: "<<acum3<<endl;
	
	
	return 0;
}