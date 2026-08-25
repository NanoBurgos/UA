/*Cree un programa en C++ que permita cargar el nombre de varios productos y 
su cantidad en stock (máximo 5). Al finalizar, el programa debe mostrar el 
nombre del producto con la menor cantidad disponibe*/
/*Ejemplo 4 : cargar nombres de estudiante con sus respectivas notas , al final 
mostrar la nota del estudiante con la nota mas baja*/
#include<iostream>
using namespace std;
int main(){
	string nombres[5]; //Vector para nombres
	int productos[5]; //vector para las cantidades en stock de los productos
	int cantidad = 5; //cantidad de productos
	
	//Cargar datos
	cout<<"Ingrese los nombres y el stock de "<<cantidad<<" productos: "<<endl;
	for(int i=0; i<cantidad; i++){
		cout<<"Nombre del producto "<<i+1<<" : ";
		cin>>nombres[i];
		cout<<"Cantidad en stock de "<<nombres[i]<<" : ";
		cin>>productos[i];
	}
	
	//Buscar el producto con stock mas bajo
	int menor=productos[0];
	int posMenor=0;
	
	for(int i=0; i<cantidad; i++){
		if(productos[i]<menor){
			menor=productos[i];
			posMenor=i;
		}
	}
	
	//Mostrar el resultado
	cout<<"\nEl producto con el stock mas bajo es: "<<nombres[posMenor]
		<<" con stock "<<menor<<endl;
	
	return 0;
}