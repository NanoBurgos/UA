/*4- Escriba un programa en C que permita calculara el importe de una factura, partir de una serie de articulos vendidos. Para ello, el programa ira preguntando para 
cada articulo la cantidad de unidades vendidas y el precio unitario

El programa comprobara que tantpo el precio como la cantidad son numeros positivos, y en caso contrario volvera a solicitar los valores
La lectura de los articulos acabara cuando se introduzca un 0 en la primera pregunta. Entonces se imprimira por pantalla el importe total de la factura*/

/*Pedir la cantidad de productos vendidos y el precio unitario hasta que la cantidad ingresada sea 0
Mostrar en pantalla el total a pagar*/

#include<stdio.h>
int main(void){

    int n;
    int precio, total = 0;
    do{
        do{ //Leer cantidad hasta que sea mayor o igual que 0
            printf("\nIntroduzca la cantidad vendida: ");
            scanf("%d", &n);

            if(n<0) printf("Cantidad no valida");

        }while(n<0);
        
        if(n>0){ //este if vale para no leer el precio si anteriormente se ha introducido un 0
            printf("Introduzca el precio: ");
            
            do{ //Leer precio hasta que sea mayor que 0
                scanf("%d", &precio);
                
                if(precio<0) 
                    printf("Precio no valido");

            }while(precio<0);
        }

        
        total = total + n*precio;
    } while (n!=0);

    printf("\n eL TOTAL A PAGAR ES DE = %d \n", total);

    return 0;
}