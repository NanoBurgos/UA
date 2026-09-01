/*10-Ventas en línea: crear una Matriz 5×2 para registrar 5 productos: columna
1 = precio, columna 2 = cantidad vendida. Calcular el ingreso total por
producto y el ingreso general. */
#include<iostream>
using namespace std;

int main(){
    // Datos ya cargados (precios y cantidades)
    float ventas[5][2] = {{15000, 3}, {22000, 4}, {100000, 5}, {40000, 3}, {25000, 5}};
    float ingreso_producto[5];
    float ingreso_general = 0;
    
    // Calcular y mostrar resultados
    cout<<"\n==============================================="<<endl;
    cout<<"   REPORTE DE VENTAS POR PRODUCTO"<<endl;
    cout<<"==============================================="<<endl;
    
    for(int i=0; i<5; i++){
        ingreso_producto[i] = ventas[i][0] * ventas[i][1];
        ingreso_general = ingreso_general + ingreso_producto[i];
        
        cout<<"Producto "<<i+1<<": $"<<ventas[i][0]<<" x "<<(int)ventas[i][1]
            <<" = $"<<ingreso_producto[i]<<endl;
    }
    
    cout<<"==============================================="<<endl;
    cout<<"Ingreso general total: $"<<ingreso_general<<endl;
    cout<<"==============================================="<<endl;
    
    return 0;
}