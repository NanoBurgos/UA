/*2- Un profesor desea obtener una estadística del rendimiento de sus alumnos por cada examen. Se sabe que cada examen tiene un puntaje de 100 puntos. El
profesor tiene 35 alumnos y desea obtener la cantidad de alumnos con bajo rendimiento (de 0 a 40 puntos), con rendimiento regular (de 41 a 70 puntos) y con
buen rendimiento (de 71 a 100 puntos). Mostrar todos los resultados por pantalla.*/
#include <stdio.h>

int main(){
    int i, puntaje;
    int bajo = 0, regular = 0, bueno = 0;
    const int TOTAL_ALUMNOS = 35;
    const int MAX_PUNTAJE = 100;

//Solcitamos el puntaje de cada alumno
for(i = 1; i <= TOTAL_ALUMNOS; i++){
        printf("Ingrese el puntaje del alumno %d (0 a 100): ", i);
        scanf("%d", &puntaje);

        //Verificamos que el puntaje sea valido (por si alguien mete valores negativos o muy grandes)
        if(puntaje < 0 || puntaje > MAX_PUNTAJE){
            printf("Puntaje invalido. Ingrese un valor entre 0 y 100.\n");
            i--; // para volver a pedir el mismo alumno
            continue;
        }

        //Clasificamos segun su puntaje y usamos contadores para cada clasificacion
            if(puntaje <= 40){
            bajo++;
        } else if(puntaje <= 70){
            regular++;
        } else {
            bueno++;
        }
    }

    //Mostramos los resultados
    printf("\n--- Estadistica de Rendimiento ---\n");
    printf("Alumnos con bajo rendimiento   (0  a 40  pts): %d\n", bajo);
    printf("Alumnos con rendimiento regular (41 a 70  pts): %d\n", regular);
    printf("Alumnos con buen rendimiento   (71 a 100 pts): %d\n", bueno);

    return 0;
}