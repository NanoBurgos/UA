/*Escribe un programa en C que imprima en pantalla la palabra "año" y otros caracteres
especiales como "ñ", "á", "é", "í", "ó", "ú".*/

#include<stdio.h>
#include<locale.h>

int main(){
    //Establecer la configuracion regional, para permitir caracteres especiales
    setlocale(LC_ALL, "");

    //Imprimir caracteres especiales
    printf("Palabra con caracteres especiales: año \n");
    printf("Caracteres especiales: ñ, á, é, í, ó, ú \n");

    return 0;
}

/*Esto no funcionara en todos los sistemas operativos*/
