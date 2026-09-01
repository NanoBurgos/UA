/*6-Gestión de biblioteca :Vector con nombres de 8 libros y otro vector con
cantidad de préstamos. Mostrar el libro más solicitado.*/
#include<iostream>
#include<string>
using namespace std;
int main(){
	int mayor = 0, pos_mayor;
	
	string libros[8]={"Don Quijote de la Mancha", "Cien años de soledad", "Orgullo y prejuicio",
	"El principito", "El Señor de los Anillos", "La Odisea", "Los Miserables", "Harry Potter"};
	int prestamos[8]={5, 4, 6, 12, 3, 9 ,5, 3};
	
	for(int i=0; i<7; i++){
		
		if(prestamos[i]>mayor){
		mayor=prestamos[i];
		pos_mayor=i;
		}
	}
	
	cout<<"\nEl libro mas solicitado es: "<<libros[pos_mayor]<<endl;
	
	return 0;
}