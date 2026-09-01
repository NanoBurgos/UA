/*5-Asistencia a clases :Usar una matriz 6×5 para registrar asistencia de 6
estudiantes en 5 clases (1 = presente, 0 = ausente). Mostrar el estudiante con
mayor asistencia*/
#include<iostream>
using namespace std;
int main(){
	int fila=6, columna=5, pos_mayor; 
	int asistencia[fila]={0};
	int mayor=0;
	int registro[fila][columna] = {{1, 0, 1, 1, 0}, {0, 1, 0, 0, 1}, {1, 1, 0, 1, 0},
    {0, 0, 1, 0, 1}, {1, 0, 1, 1, 1}, {0, 0, 1, 0, 1} }; //presente(1)  ausente(0)
    
    for(int i=0; i<fila; i++){
    	for(int j=0; j<columna; j++){
    		if(registro[i][j]==1){
    			asistencia[i]=asistencia[i]+1;
			}
		}
	}
	
	for(int i=0; i<fila; i++){
		if(asistencia[i]>mayor){
			mayor=asistencia[i];
			pos_mayor=i;
		}
	}
    
    cout<<"\nEl alumno con mayor asistencia es el alumno ["<<pos_mayor+1<<"]";
    
    return 0;
}