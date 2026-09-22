//librerias
#include<iostream>
#include<string>
using namespace std;
//estructura que vamos a usar
struct Kits{
	string nombre_kit;
	int cantidad = 3;
	string producto[3]; //uso nombres cortos, por que un sistema realmentre identificaria los productos por su productoID
	//si quisiera poner nombres largos, deberia cambiar mi codigo y capturar las entragas de nombres con getline()
	int costo[3]; //los costos declare como enteros por que nuestra moneda no usamos con decimales
};

int main(){
	int n;
	cout<<"Ingrese la cantidad de Kits que tienen en promocion: ";
	cin>> n;
	Kits k[n]; //arreglo k que tiene dentro la esturctura Kits 
	
	int costo_final[n]={0,0,0}; //areeglo para guardar los costos finales, inicializamos en ceros
	int precio_venta[n]={0,0,0}; //areeglo para guardar los precios de venta finales, inicializamos en ceros
	
	for(int i=0; i<n; i++){
		
		int acum = 0; //acumulador que suma los precios de los productos de cada kit
		
		
		//empezamos a capturar los datos 
		cout<<"==============================================================================="<<endl;
		cout<<"\nIngrese el nombre del Kit ["<<i+1<<"]: ";
		cin>>k[i].nombre_kit;
		cout<<"-------------------------------------------------------------------------------"<<endl;
		cout<<"\nIngrese los productos que tiene el  Kit ["<<k[i].nombre_kit<<"]: "<<endl;
		
		//bucle anidado por que cada kit tiene 3 productos dentro
		for(int j=0; j<k[i].cantidad; j++){
			cout<<"\nIngrese el nombre producto["<<j+1<<"]del  Kit ["<<k[i].nombre_kit<<"]: "<<endl;
			cin>>k[i].producto[j];
			
			cout<<"\nIngrese el costo del producto["<<j+1<<"]del  Kit ["<<k[i].nombre_kit<<"]: "<<endl;
			cin>>k[i].costo[j];
			
			cout<<"-------------------------------------------------------------------------------"<<endl;
			
			acum = acum + k[i].costo[j];
		}
		
		costo_final[i] = acum; //guardamos la suma de costos en nuestro arreglo de costo final
		
		precio_venta[i] = costo_final[i] + (costo_final[i]*0.20); //calculamos el precio de venta de cada elemento del arreglo
		
	}
	
	//Mostramos Costos y Precio de Venta final de cada Kit
	cout<<"=========================KITS==========================="<<endl; 
	for(int i=0; i<n; i++){
		cout<<"-----"<<k[i].nombre_kit<<"----"<<endl;
		cout<<"\tCosto final: "<<costo_final[i]<<endl;
		cout<<"\tPrecio de Venta: "<<precio_venta[i]<<endl;
	}
	
	return 0;
}