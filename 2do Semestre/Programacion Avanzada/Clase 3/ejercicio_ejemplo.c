#include<stdio.h>
#define MAX_STRLEN 256
int main(){
    int edad;
    char nomb[MAX_STRLEN];
    
    /*Pedir al usuario in  gresar su numbre y edad*/
    /*Si la persona tiene 18 años o mas mostrar un mensaje que
    es mayor de edad, sino mostrar que es menor*/
    
    printf("Ingrese su nombre\n");
    scanf("%s", nomb);
    
    printf("Ingrese su edad\n");
    scanf("%i", edad);
    
    if(edad>=18){
                 printf("Usted %s es mayor de edad\n", nomb);
                 } 
    else{
         printf("Usted %s es menor\n", nomb);
         }
    
    return 0;
    }