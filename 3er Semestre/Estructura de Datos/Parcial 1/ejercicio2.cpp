//librerias
#include<iostream>
#include<string>
using namespace std;

int main(){
	
	int n = 3; //si la tienda quiere ingresar mas productos, solo tiene que cambiar este numero 
	double caro =-9999999999, barato=9999999999; //variables que vamos a usar para las comparaciones, inicializados cada uno de acurdo al uso que le vamos a dar
	int pos_barato, pos_caro; //variables que guardaran las posiciones de el mas barato y el mas caro
	
	//arreglos que vamos a utilizar
	string nombres[n];
	double precios[n];
	
	for(int i=0; i<n; i++){
		
		//capturamos los datos que ingresa el usuario
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"\nIngrese el nombre del producto ["<<i+1<<"]: ";
		getline(cin, nombres[i]);
		
		cout<<"\nIngrese el precio del producto ["<<nombres[i]<<"]: "<<endl;
		cin>>precios[i];
		cin.ignore();
		
		//condicion para actualizar caro
		if(precios[i]>caro){
			caro = precios[i];
			pos_caro = i;
		}
		
		//condicion para actualizar barato
		if(precios[i]<barato){
			barato = precios[i];
			pos_barato = i;
		}
		
		
	}
	
	//mostramos las salidas que nos pide el ejercicio
	cout<<"========================================================"<<endl;
	
	cout<<"El producto mas barato es ["<<nombres[pos_barato]<<"] con un precio de ["<<precios[pos_barato]<<"]"<<endl;
	
	cout<<"El producto mas caro es ["<<nombres[pos_caro]<<"] con un precio de ["<<precios[pos_caro]<<"]"<<endl;
	
	return 0;
}