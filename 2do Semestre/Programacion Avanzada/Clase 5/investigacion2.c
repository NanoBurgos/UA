/* Investiga cómo imprimir caracteres especiales ( acentos, ñ) en C 
Metodo 2 - Usando la biblioteca*/
#include<stdio.h>
#include <windows.h>


int main(){

 	SetConsoleOutputCP(1252);
 	SetConsoleCP(1252); 
    /*Le dice a la consola de windows que use la pagina de codigos latin-1(Western European) que incluye ñ y caracteres con acentos*/
	
	printf("aaa ñññÑÑ ");

return 0;
}

/*
	El archivo debe guardarse en codificacion Windows-1252 (ANSI), no UTF-8
	
	Alternativa rapida si es solo para mostrar texto

    OBS: No funciona en todos los sistemas operativos

*/