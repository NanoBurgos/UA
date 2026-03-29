/*Una tenda de ropas vende todas sus prendas por kg. Tiene un precio base fijo de 99000 el Kg. Si el cliente compra 10 kg en adelante se lo considera 
mayorista, por lo tanto se le otorga un descuento del 15% sobre el monto total.
Crear un programa que realice dichos calculos y que muestre por pantalla el nombre del cliente, el tipo de cliente (mayorista o minorista), el monto del
descuento (si lo tuvo) y el monto a pagar*/

#include <stdio.h>

int main(){
char nombre[50];
float peso, monto_total, descuento = 0 ;
const float precio_por_kg = 99000;
const float descuento_mayorista = 0.15;

/*Solicitar nombre del cliente y el peso de la compra*/
printf("Ingrese el nombre del cliente: ");
fgets(nombre, sizeof(nombre), stdin);
printf("Ingrese el peso de la compra en Kg. : ");
scanf("%f", &peso);

/*EXPLICACION DE LA FUNCION DE LECTURA CON CADENAS DE ESPACIOS:
- fgets: es una funcion en C que se utiliza para leer una linea de texto desde un flujo de entrada (como el teclado) y almacenarla en un array de caracteres (cadena de caracteres)
La funcion fgets asegura que no se lea mas caracteres de los que puede contener el array, lo que ayuda a prevenir el desbordamiento de buffer

- nombre: Este es el array de caracteres donde se almacenara la cadena leida. En este caso, es el nombre del cliente

- sizeof(nombre): devuelve el tamaño del array nombre en bytes. Esto le dice a fgets cuantos caracteres puede leer como maximo, incluyendo
el caracter nulo (\0) que marca el final de la cadena
Por ejemplo, si nombre tiene una longitud de 50, fgets leera hasta 49 caracteres y añadira un caracter nulo al final

- stdin es el flujo de entrada estandar, que generalmente es el teclado. Indica fgets debe leer la entrada del usuario desde el teclado 
*/

// Calcular el monto total
monto_total = peso * precio_por_kg;

//Determinar si el cliente es mayorista o minorista y aplicar descuento si corresponde
if (peso >= 10){
    descuento = monto_total * descuento_mayorista;
    monto_total -= descuento;
    printf("Cliente: %s Tipo de cliente: Mayorista\n", nombre); 
} else{
    printf("Cliente: %s Tipo de cliente: Minorista\n", nombre); 
}

//Mostrar el monto del descuento (si lo tuvo) y el monto a pagar
if(descuento > 0){
    printf("Monto del descuento: %.2f Gs\n", descuento); //%.2f indica la cantidad de lugares decimales que queremos imprimir
}
printf("Monto a pagar: %.2f Gs\n", monto_total);

return 0;
}