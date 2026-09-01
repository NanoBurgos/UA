/*4.Ventas de supermercado: Usar una matriz 3×4 para registrar ventas de 3
productos en 4 sucursales. Calcular el total vendido por producto y por
sucursal.*/
#include<iostream>
using namespace std;
int main(){
	int fila=3, columna=4;
	int producto[fila]={0};
	int sucursal[columna]={0};
	int ventas[fila][columna] = {{5, 2, 4, 8}, {2, 8, 4, 6}, {1, 8, 2, 9}};
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
					producto[i] = producto[i] + ventas[i][j]; 	
		}
	}
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
					sucursal[j] = sucursal[j] + ventas[i][j]; 
		}
	}
	cout<<"\n===================================================="<<endl;
	for(int i=0; i<fila; i++){
		cout<<"Total vendido por producto: "<<producto[i]<<endl;
	}
	cout<<"\n===================================================="<<endl;
	for(int j=0; j<columna; j++){
		cout<<"Total vendido por sucursal: "<<sucursal[j]<<endl;
	}
	cout<<"\n===================================================="<<endl;
	return 0;
}