/*2- Inventario de librería Usar dos vectores : nombres de libros y stock
disponible. Mostrar el libro con mayor stock y el libro con menor stock.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int mayor = 0, menor = 99, pos_mayor, pos_menor;
	
	string libros[7]={"Don Quijote de la Mancha", "Cien años de soledad", "Orgullo y prejuicio",
	"El principito", "El Señor de los Anillos", "La Odisea", "Los Miserables"};
	int stock[7]={5, 4, 6, 8, 3, 4 ,5};
	
	for(int i=0; i<7; i++){
		if(stock[i]<menor){
		menor=stock[i];
		pos_menor=i;
		}
		
		if(stock[i]>mayor){
		mayor=stock[i];
		pos_mayor=i;
		}
	}
	
	cout<<"\nEl libro con mayor stock es: "<<libros[pos_mayor]<<endl;
	cout<<"\nEl libro con menor stock es: "<<libros[pos_menor]<<endl;
	
	return 0;
}