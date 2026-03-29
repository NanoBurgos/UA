/*5- Crear un programa que pida al usuario ingresar 10 números y al final mostrar cuantos números positivos, cuantos números negativos, cuantos pares, cuantos impares 
y cuantos múltiplos de 5 fueron ingresados.*/
#include <stdio.h>

int main(){
    int i, numero;
    int positivos = 0, negativos = 0, pares = 0, impares = 0, multiplos5 = 0;
    const int TOTAL_NUMEROS = 10;

    /*Solicitamos los 10 numeros al usuario*/
    for(i = 1; i <= TOTAL_NUMEROS; i++){
        printf("Ingrese el numero %d: ", i);
        scanf("%d", &numero);

        /*Clasificamos el numero segun cada categoria*/
        if(numero > 0){
            positivos++;
        } else if(numero < 0){
            negativos++;
        }

        if(numero % 2 == 0){
            pares++;
        } else {
            impares++;
        }

        if(numero % 5 == 0){
            multiplos5++;
        }
    }

    /*Mostramos todos los resultados*/
    printf("\n--- Estadistica de los %d numeros ingresados ---\n", TOTAL_NUMEROS);
    printf("Numeros positivos  : %d\n", positivos);
    printf("Numeros negativos  : %d\n", negativos);
    printf("Numeros pares      : %d\n", pares);
    printf("Numeros impares    : %d\n", impares);
    printf("Multiplos de 5     : %d\n", multiplos5);

    return 0;
}