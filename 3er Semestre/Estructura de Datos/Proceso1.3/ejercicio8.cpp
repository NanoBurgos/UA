/*8-Notas por materia: crear una matriz 4×3 para registrar notas de 4
estudiantes en 3 materias. Calcular el promedio por estudiante y el promedio
por materia.*/
#include<iostream>
using namespace std;

int main(){
    int fila=4, columna=3;
    float promedio_est[4], promedio_materia[3];
    int notas[4][3] = {{5, 2, 4}, {2, 8, 4}, {1, 8, 2}, {2, 8, 4}};
    
    // Inicializar arreglos de promedios en 0
    for(int i=0; i<fila; i++) promedio_est[i] = 0;
    for(int j=0; j<columna; j++) promedio_materia[j] = 0;
    
    // Calcular promedio por estudiante (suma de filas)
    cout<<"\n==============================================="<<endl;
    cout<<"PROMEDIOS POR ESTUDIANTE:"<<endl;
    for(int i=0; i<fila; i++){
        float suma_est = 0;
        for(int j=0; j<columna; j++){
            suma_est = suma_est + notas[i][j];
        }
        promedio_est[i] = suma_est / columna;  // Dividir entre 3 materias
        cout<<"Estudiante "<<i+1<<": "<<promedio_est[i]<<endl;
    }
    
    // Calcular promedio por materia (suma de columnas)
    cout<<"\n==============================================="<<endl;
    cout<<"PROMEDIOS POR MATERIA:"<<endl;
    for(int j=0; j<columna; j++){
        float suma_mat = 0;
        for(int i=0; i<fila; i++){
            suma_mat = suma_mat + notas[i][j];
        }
        promedio_materia[j] = suma_mat / fila;  // Dividir entre 4 estudiantes
        cout<<"Materia "<<j+1<<": "<<promedio_materia[j]<<endl;
    }
    
    cout<<"\n==============================================="<<endl;
    return 0;
}