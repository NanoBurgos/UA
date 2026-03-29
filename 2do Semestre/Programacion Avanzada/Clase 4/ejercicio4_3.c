/*3- Una tienda tiene 5 vendedores, cada uno de los cuales cierra el día con un monto total de ventas. El dueño de la tienda necesita saber el monto total recaudado en el día.*/
#include <stdio.h>

int main(){
    int i;
    float ventas, total = 0;
    const int TOTAL_VENDEDORES = 5;

    /*Pedimos el monto de ventas de cada vendedor*/
    for(i = 1; i <= TOTAL_VENDEDORES; i++){
        printf("Ingrese el monto de ventas del vendedor %d: ", i);
        scanf("%f", &ventas);
        total = total+ ventas;
    }

    /*Mostramos el monto total recaudado en el dia*/
    printf("\nMonto total recaudado en el dia: %.2f Gs\n", total);

    return 0;
}