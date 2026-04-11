/* Investiga cómo imprimir caracteres especiales ( acentos, ñ) en C 
Metodo 1 - Usando codigo ASCII*/
#include<stdio.h>
#include<windows.h>
int main(){
    
	printf("caracteres especiales\n");

    printf("%c \n",   47);
    printf("%c \n", 128);
	printf("%c \n", 129);
	printf("%c \n", 164); /*ñ*/

   
    return 0;
}