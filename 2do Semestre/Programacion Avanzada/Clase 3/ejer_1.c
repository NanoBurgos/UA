#include<stdio.h>
#define MAX_STRLEN 256

int main(){
	char nomb[MAX_STRLEN];
	
	float num1, num2, num3, suma;
	
	printf("ingrese un nombre: ");
	scanf("%s", nomb);
	
	printf("Ingrese un numero: ");
	scanf("%f", &num1);
	
	printf("Ingrese otro  numero: ");
	scanf("%f", &num2);
	
	printf("Ingrese otro numero: ");
	scanf("%f", &num3);
	
	suma = (num1 + num2 + num3);
	
	printf("El nombre  del usuario es:  %s\n",nomb);
	
	printf("El resultado de la suma de los 3 numeros es:%f \n  ",suma);
	
}
