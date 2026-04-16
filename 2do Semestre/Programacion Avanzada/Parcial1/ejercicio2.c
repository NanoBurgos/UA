/*Ejercicio 2*/
#include<stdio.h>
int main(){
	int cant_copias, monto_a_pagar;
	int cont_alumnos=0, cont_docente=0, acum_importe=0, total_copias=0; //declaramos los contadores y acumuladores
	int continuar;//declaramos la variable bandera para el bucle
	
	printf("\n-------------------------------------");
	printf("\nBienvenido al sistema de fotocopias");
	printf("\n-------------------------------------");

	do{
		int usuario;
		printf("\nLas copias son para ? Ingrese (1 = Docente)( 2 = Alumno): ");
		scanf("%i", &usuario);
		
		printf("\nIngrese la cantidad de copias a relizar: ");
		scanf("%i", &cant_copias);
		
		//condiciones para calculos de monto a pagar
		if(usuario==1){
			monto_a_pagar = 0;
			cont_docente = cont_docente + cant_copias;
		}
		else if(usuario == 2){
			if( cant_copias<=0){
				printf("\nIngreso invalido");
			}
			else if(cant_copias>0 && cant_copias<=9) {
				monto_a_pagar = cant_copias*500;
			}
			else if(cant_copias>=10 && cant_copias<=29) {
				monto_a_pagar = cant_copias*400;
			}
			else{ //30 o mas
				monto_a_pagar = cant_copias*300;
			}
			
			cont_alumnos = cont_alumnos + cant_copias;
			
			acum_importe = acum_importe + monto_a_pagar;
			
		}
		else{
			printf("\nIngreso invalido");
		}
		
		total_copias = cont_docente + cont_alumnos;
		
		printf("\nDesea realizar mas copias? Ingrese (1 = Si)( 0 = No) : ");
		scanf("%i", &continuar);
		
 	}while(continuar != 0);

	total_copias = cont_docente + cont_alumnos;
 	
	printf("\nLa cantidad total de copias es de: %i", total_copias);
	printf("\nEl importe total por las copias es de: %i ", acum_importe);
	
	
return 0;	
}
