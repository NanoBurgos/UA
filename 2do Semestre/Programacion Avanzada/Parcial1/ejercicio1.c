/*Ejercicio 1*/
#include<stdio.h>
#define MAX_STRLEN 256
int main(){
	char nombre_cliente[MAX_STRLEN]; 
	char letra[MAX_STRLEN];
	int categoria;
	float precio, monto_a_pagar, monto_del_descuento; //flotante para tener libertad con diferentes tipos de divisas
	
	//Solicitamos el Nombre del Cliente
	printf("\nIngrese el Nombre del Cliente: ");
	scanf("%s", &nombre_cliente);
	
	//Solicitamos el Monto a pagar del Cliente
	printf("\nIngrese el Monto a Pagar del Cliente para ver si posee descuento: ");
	scanf("%f", &precio);
	
	//Solicitamos la categoria del Cliente pedimos en forma numerica para evitar inconvenientes
	printf("\nIngrese la categoria del Cliente (A = 1)(B = 2)( C = 3) : ");
	scanf("%i", &categoria);
	
	/*Condiciones para calculo de descuentos*/
	if (categoria == 1){
		monto_del_descuento = precio*0.15;
	}
	else if (categoria == 2){
		monto_del_descuento = precio*0.10;
	}
	else{
		monto_del_descuento = 0;
	}
	
	//calaculo del monto final a pagar
	monto_a_pagar = precio - monto_del_descuento;
	
	//mostramos en pantalla
	printf("\n---------------------------------");
	printf("\nEl cliente %s :", nombre_cliente);
	printf("\nRealizo compras por total de: %.2f ", precio);
	printf("\nObtuvo un descuento de: %.2f ", monto_del_descuento);
	printf("\nMonto final a Pagar: %.2f ", monto_a_pagar);
	printf("\n------------------------------------");
	
	
	return 0;
}
