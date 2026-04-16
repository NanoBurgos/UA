/*Ejercicio 3*/
#include<stdio.h>
int main(){
	
	int modelo, color;
	
	printf("\nOpciones de modelos disponibles: ");
	printf("\n  - Ingrese numero (1) para Auto ");
	printf("\n  - Ingrese numero (2) para Camioneta");
	printf("\n  - Ingrese numero (3) para Furgoneta");
	printf("\nSeleccione la opcion numerica de acuerdo al modelo que desea: ");
	scanf("%i", &modelo);
	
	printf("\nOpciones de colores disponiles: ");
	printf("\n  - Ingrese numero (1) para Blanco ");
	printf("\n  - Ingrese numero (2) para Negro");
	printf("\n  - Ingrese numero (3) para Gris");
	printf("\nSeleccione la opcion numerica de acuerdo al color que desea: ");
	scanf("%i", &color);
	
	printf("----------------------------");
	printf("\nUsted selecciono un vehiculo con estas caracteristicas: ");
	
	switch(modelo){
		
	case 1: printf("\nmodelo: [Auto] ");
			break;
	case 2: printf("\nmodelo: [Camioneta] ");
			break;
	case 3: printf("\nmodelo: [Furgoneta] ");
			break;
	}
	
	switch(color){
		
	case 1: printf("\ncolor: [Blanco] ");
			break;
	case 2: printf("\ncolor: [Negro] ");
			break;
	case 3: printf("\ncolor: [Gris] ");
			break;
	}
	
	return 0;
}
