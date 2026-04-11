/* Investiga cómo imprimir caracteres especiales ( acentos, ñ) en C 
Metodo 3 - Usando la biblioteca <windows.h>*/
#include<stdio.h>
#include <windows.h>


int main(){

 	SetConsoleOutputCP(65001);
	
	printf("aaa ñññÑÑ ");

return 0;
}

/* 
OBS: No funciona en todos los sistemas operativos, En embarcadero C++ (rojo) si deja elegir el tipo de codificacion antes de compilar

Este archivo si se puede guardar en UTF-8 */