/*Escriba un programa que pida al usuario su nombre y contraseña y le de tres oportunidades para introducir los datos correctos, que seran:
Usuario: root y Contraseña: 1234
Si los datos introducidos son correctos, se mostrara por pantalla "Bienvenido al sistema". En caso contrario se mostrara un mensaje por 
pantalla indicando que se ha superado el numero de intentos permitidos*/

/*Pedir nombre de usuario y clave, verificacion y validacion de datos, pedir solo hasta 3 intentos, uso de contador*/
#include<stdio.h>
#include<string.h>

int main(void){
    /* Puesto que las cadenas de caracteres finalizan con el caracter nulo ('\0'), usuario y contraseña se declararan como cadenas de longitud 5*/
    char user[5], pass[5];
    int intentos = 0; //contador de intentos
    int correcto = 0; //variable que indica si los datos introducidos son o no correctos
    /* Se utiliza un bucle do-while que se debe repetir mientras:
    a) El numero de intentos sea inferior a 3
    b) El usuario y contraseña sean incorrectos*/

    do{
        //se solicta el ususario y la contraseña
        printf("Nombre: ");
        scanf("%s", user);
        printf("Contraseña: ");
        scanf("%s", pass); /*Si los datos ingresados coinciden con "root" y "1234" La variable correcto se iguala a 1
        Para comparar cadenas usamos la funcion strcmp (cad1, cad2) que devuelve 0 si las cadenas comparadas son iguales
        y otro valor si son distintos*/

        if ((strcmp(user, "root") == 0) && (strcmp(pass, "1234") == 0))
            correcto = 1;
        else
            intentos = intentos + 1;

    }while((intentos<3)&&(correcto==0));
    /*A este punto se llega por que (intentos>=3) o porque (correcto!=0)
    Examinamos ambas opciones*/
    
    if (intentos==3)
        printf("Se ha superado el limite maximo de intentos permitidos\n");
    else // (correcto!=0)
        printf("Bienvenido al sistema\n");
    
    return 0;
}