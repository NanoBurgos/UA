/* 2- Ejercicio: Validar Clave */
#include<stdio.h>

int main(){
    int valida = 246; //Esta sera la clave valida
	int clave;
	
	do{
		printf("Introduzca la clave numerica (solo 3 digitos): ");
		scanf("%d", &clave);
		
		if(clave != valida) printf("No valida! \n");
		
	}while(clave!=valida);
	
	printf("Correcto !. \n");
	
	printf("Bienvenido al Sistema. \n");
   
    return 0;
}