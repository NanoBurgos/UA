/*5- Efectos del Aspecto de la consola: Colores de fondo y Letras*/

/*Aplicar colores a la consola*/
#include<stdlib.h> //libreria con herramientas para cambiar colores
#include<stdio.h>

int main(){

    system("color 0D"); //El 0 Color de Fondo, D indica color de letra
    printf("Como estas");

    return 0;
}

/*Lista de colores: 

color de consola:
0 = Negro
1 = Azul
2 = Verde
3 = Agua marina
4 = Rojo
5 = Purpura
6 = Amarillo
7 = Blanco
8 = Gris
9 = Azul claro

color de texto:
A = Verde claro
B = Agua marina claro
C = Rojo claro
D = Purpura claro
E = Amarillo claro
F = Blanco Brillante

*/