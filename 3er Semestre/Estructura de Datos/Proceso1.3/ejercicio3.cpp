/*3-Reservas de hotel Usar una matriz 5×7 para registrar reservas de 5
habitaciones durante 7 días. Cada celda indica si está ocupada (1) o libre (0).
Mostrar cuántos días estuvo ocupada cada habitación.*/
#include<iostream>
using namespace std;
int main(){
	int fila=5, columna=7; 
	int cont[fila]={0};
	int habitaciones[fila][columna] = {{1, 0, 1, 1, 0, 0, 1}, {0, 1, 0, 0, 1, 1, 0}, {1, 1, 0, 1, 0, 1, 0},
    {0, 0, 1, 0, 1, 0, 1}, {1, 0, 0, 1, 1, 0, 0} }; //ocupado(1)  libre(0)
	
	for(int i=0; i<fila; i++){
		for(int j=0; j<columna; j++){
				if(habitaciones[i][j]==1){
					cont[i] = cont[i] + 1; 
				}
		}
	}
	
	for(int i=0; i<fila; i++){
		cout<<"\nLa habitacion["<<i+1<<"] estuvo ocupada "<<cont[i]<<endl;
	}
	
	
	return 0;
}