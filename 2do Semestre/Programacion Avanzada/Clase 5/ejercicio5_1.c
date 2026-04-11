/*1- Ejercicio que muesta el listado de habitaciones de un hospedaje y la cantidad de camas de cada habitacion*/
#include<stdio.h>

int main(){
	int numero;
	
	printf("Listado de habitaciones: ");
	printf("\n\n1. HAB-01");
	printf("\n2. HAB-02");
	printf("\n3. HAB-03");
	printf("\n4. HAB-04");
	printf("\n5. HAB-05");
	printf("\n6. HAB-06");
	printf("\n\nIntroduzca numero de habitacion");
	printf("\n");
	scanf("%d", &numero);

	switch(numero){
		case 1 : printf("La habitacion HAB-01 tiene 2 cama/s y esta en planta baja");
			break;
		case 2 : printf("La habitacion HAB-02 tiene 1 cama/s y esta en el primer piso");
			break;
		case 3 : printf("La habitacion HAB-03 tiene 3 cama/s y esta en el primer piso");
			break;
		case 4 : printf("La habitacion HAB-04 tiene 2 cama/s y esta en la segunda planta");
			break;
		case 5 : printf("La habitacion HAB-05 tiene 1 cama/s y esta en el segundo piso");
			break;
		case 6 : printf("La habitacion HAB-06 tiene 3 cama/s y esta en el tercer piso");
			break;
		default : printf("ERROR: %d no esta asociado a ninguna habitacion", numero);
		
	}

return 0;
}