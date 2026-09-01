/*7-Reservas de vuelos: crear una matriz 4×6 que representa asientos de un
avión (4 filas × 6 columnas). Cargar reservas (1 = ocupado, 0 = libre) y
mostrar cuántos asientos libres queda.*/
#include<iostream>
using namespace std;
int main(){
	int fila=4, columna=6; 
	int contador=0, libres;
	int asientos[fila][columna] = {{1, 0, 1, 1, 0, 0}, {0, 1, 0, 0, 1, 1}, {1, 1, 0, 1, 0, 1},
    {0, 0, 1, 0, 1, 0} }; //ocupado(1)  libre(0)
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
				if(asientos[i][j]==1){
					contador = contador + 1; 
				}
		}
	}
	
	libres = fila*columna - contador;
	
	cout<<"\nLa cantidad de asientos libres es: "<<libres<<endl;
	
	return 0;
}