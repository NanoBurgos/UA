/*6- Una empresa textil desea un programa que le ayude a calcular los montos que cobrará a sus clientes según las siguientes reglas: se debe pedir al usuario cargar 
el nombre del cliente, el nombre del tejido, el precio unitario del tejido (de cada metro) y la cantidad de metros comprada por el cliente. Si el cliente compra de 
10 metros en adelante, se le aplica un descuento del 15% al precio de venta unitario. Mostrar por pantalla el nombre del cliente, el nombre del tejido, la cantidad comprada, 
el precio por metro y el monto total a pagar.*/
#include <stdio.h>

int main(){
    char nombre_cliente[50], nombre_tejido[50];
    float precio_unitario, metros, descuento = 0, precio_final, monto_total;
    const float DESCUENTO_MAYORISTA = 0.15;
    const int MINIMO_MAYORISTA = 10;

    /*Solicitamos los datos del cliente y la compra*/
    printf("Ingrese el nombre del cliente: ");
    fgets(nombre_cliente, sizeof(nombre_cliente), stdin);

    printf("Ingrese el nombre del tejido: ");
    fgets(nombre_tejido, sizeof(nombre_tejido), stdin);

    printf("Ingrese el precio unitario por metro: ");
    scanf("%f", &precio_unitario);

    printf("Ingrese la cantidad de metros comprada: ");
    scanf("%f", &metros);

    /*Aplicamos descuento al precio unitario si compra 10 metros o mas*/
    if(metros >= MINIMO_MAYORISTA){
        descuento = precio_unitario * DESCUENTO_MAYORISTA;
        precio_final = precio_unitario - descuento;
    } else {
        precio_final = precio_unitario;
    }

    /*Calculamos el monto total a pagar*/
    monto_total = precio_final * metros;

    /*Mostramos los resultados en pantalla*/
    printf("\n--- Resumen de la compra ---\n");
    printf("Cliente         : %s", nombre_cliente);
    printf("Tejido          : %s", nombre_tejido);
    printf("Cantidad comprada: %.2f metros\n", metros);
    printf("Precio por metro : %.2f Gs\n", precio_final);
    printf("Monto total      : %.2f Gs\n", monto_total);

    return 0;
}