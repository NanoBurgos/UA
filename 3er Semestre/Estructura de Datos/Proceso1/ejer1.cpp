/*Declarar un vector con 5 productos, ingresar sus precios y calcular el precio total de la compra*/
#include<iostream>
using namespace std;
int main(){
	
	int n;
	
	float acumulador = 0;
	
	cout<<"Cuantos productos desea cargar?"<<endl;
	cin>>n;
	
	cout<<"======================================"<<endl;
	
	float precio[n];
	
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese el precio del producto ["<<i+1<<"]: "<<endl;
		cin>>precio[i];
	
		acumulador=acumulador + precio[i];	
	}
	
	cout<<"El precio total de la compra es: "<<acumulador<<endl;
	
	
	return 0;
}