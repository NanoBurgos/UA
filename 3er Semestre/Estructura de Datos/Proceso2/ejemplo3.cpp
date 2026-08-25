/*Ejemplo 3: Añadir y actualizar elementos en un vector*/
#include<iostream>
using namespace std;
int main(){
	int total[10]; //Vector de 6 posiciones
	int usados = 4; //Cantidad de posiciones ya ocupados
	int nuevo; //variable para el nuevo valor
	
	//valores iniciales
	total[0]= 5;
	total[1]= 6;
	total[2]= 8;
	total[3]= 4;
	
	//Mostrar el vector inicial
	cout<<"\nVector Inicial: "<<endl;
	for(int i=0; i<usados; i++){
		cout<<"TOTAL["<<i<<"]= "<<total[i]<<endl;
	}
			
	//Solicitar al usuario un nuevo valor
	cout<<"\nIngrese un nuevo valor para añadir al vector: ";
	cin>>nuevo;
	
	//Añadir el valor en la siguiente posicion disponible
	if(usados<6){
		total[usados]=nuevo;
		usados++;
	}
	else{
		cout<<"No hay espacio disponible en el vector"<<endl;
	}
	
	//Mostrar vector actualizado
	cout<<"\nVector Actualizado: "<<endl;
	for(int i=0; i<usados; i++){
		cout<<"TOTAL["<<i<<"]= "<<total[i]<<endl;
	}
	
	return 0;	
}