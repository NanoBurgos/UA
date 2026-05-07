/*Ejercicio 2:  Crear un programa en C que permita al docente ingresar el nombre de un estudiante  y
 compararlo con un único nombre previamente registrado en el Sistema   como delegado del grupo.
Si el nombre coincide exactamente, mostrar: "Acceso permitido".
Si no coincide, mostrar: "Acceso denegado*/

#include<stdio.h>
#include<string.h>
#define MAX_STRLEN 256

int main(){
	
	char delegado[MAX_STRLEN]= "delegado\n"; // cambiar delegado por el nombre para comparar
	
	char nombre[MAX_STRLEN];
	
	printf("\nIngrese el nombre del Estudiante: ");
	fgets(nombre, sizeof(nombre), stdin);
	
	if(strcmp(delegado, nombre) == 0){
		printf("\nAcceso permitido");
	}
	else{
		printf("\nAcceso Denegado");
	}
	

	
	return 0;
}