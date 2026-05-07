/*Ejercicio 1: Se necesita un programa en C que permita al usuario (operador) ingresar cierta 
cantidad de productos con sus respectivos precios, al finalizar la carga el programa deberá
 mostrar el nombre del producto más barato */
#include<stdio.h>
#include<string.h>

#define MAX_STRLEN 256

int main(){
	
	char producto[MAX_STRLEN], prod_barato[MAX_STRLEN];
	int precio, barato=99999999, continuar=1 ;
	
	do{
		printf("\nIngrese el nombre del producto: ");
			scanf("%s", &producto);
			
		printf("\nIngrese el precio de %s: ", producto);
			scanf("%i", &precio);
			
		if(precio<barato){
			strcpy(prod_barato, producto);
			barato = precio;
		}
		
		printf("\nDesea ingresar otro producto? Ingrese (1 = Si)( 0 = No) : ");
		scanf("%i", &continuar);
		
 	}while(continuar != 0);
	
	
	printf("\nEl producto mas barato es: %s con un precio de: %i", prod_barato, barato);
	
	return 0;
}