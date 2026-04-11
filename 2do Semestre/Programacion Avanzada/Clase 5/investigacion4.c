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

/*OBS: Esto no funcionara en todos los sistemas operativos

1. #include <stdio.h>: Incluye la biblioteca estándar de entrada y salida.

2. #include <locale.h>: Incluye la biblioteca para configurar la localización, lo que permite el uso de caracteres especiales.

3. setlocale(LC_ALL, "");: Configura la localización para que el programa pueda manejar caracteres especiales según la configuración regional del sistema.

4. printf: Función para imprimir en pantalla. Aquí se utilizan caracteres especiales como "ñ" y vocales acentuadas.

*/
