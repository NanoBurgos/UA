#include <iostream>
using namespace std;

// Función para calcular el total de una venta 
float calcularTotal(float precio, int cantidad) {
    return precio * cantidad;
}

// Función para aplicar un descuento en porcentaje 
float aplicarDescuento(float total, float porcentajeDescuento) {
    return total - (total * porcentajeDescuento / 100);
}

// Función para calcular IVA (10%) 
float calcularIVA(float total) {
    return total * 0.10;
}

int main() {
    int opcion;
    float precio, total, totalConDescuento, montoIVA;
    int cantidad;
    float porcentajeDescuento;
    
    do { // bucle que entra por lo menos una vez

        // Mostrar menú de opciones
        cout << "\n Menu Gestion de Ventas " << endl;
        cout << "1. Calcular total de una venta" << endl;
        cout << "2. Aplicar descuento en porcentaje" << endl;
        cout << "3. Calcular IVA (10%)" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cout << "----------------------------------------"<<endl;
        
        switch(opcion) {
            case 1:
                // Calcular total de venta
                cout << "Ingrese el precio del producto: ";
                cin >> precio;
                cout << "Ingrese la cantidad: ";
                cin >> cantidad;
                total = calcularTotal(precio, cantidad);
                cout << "El total de la venta es: " << total << endl;
                break;
                
            case 2:
                // Aplicar descuento
                cout << "Ingrese el total de la venta: ";
                cin >> total;
                cout << "Ingrese el porcentaje de descuento: ";
                cin >> porcentajeDescuento;
                totalConDescuento = aplicarDescuento(total, porcentajeDescuento);
                cout << "Total con descuento del " << porcentajeDescuento << "% es: " << totalConDescuento << endl;
                break;
                
            case 3:
                // Calcular IVA
                cout << "Ingrese el total de la venta: ";
                cin >> total;
                montoIVA = calcularIVA(total);
                cout << "El IVA (10%) sobre el total es: " << montoIVA << endl;
                cout << "Total mas IVA: " << total + montoIVA << endl;
                break;
                
            case 4:
                cout << "Saliendo del programa..." << endl;
                break;
                
            default:
                cout << "Opcion invalida. Por favor, seleccione una opcion del 1 al 4." << endl;
        }
        
    } while(opcion != 4); //condicion de bucle, repite mientras no se elije la opcion 4
    
    return 0;
}