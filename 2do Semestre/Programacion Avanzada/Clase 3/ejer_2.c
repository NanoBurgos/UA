#include<stdio.h>
#define MAX_STRLEN 256

int main(){
 char nombre[MAX_STRLEN];
 char turno[MAX_STRLEN];
 
 printf ("ingrese su nombre\n");
 scanf ("%s",nombre);
 
 printf("ingrese su turno");
 scanf("%s",turno);
 
 printf("el nombre  del usuario es:  %s\n",nombre);
 printf("wl turno donde esta es %s\n",turno);
}