#include <stdio.h>
#include <stdlib.h>

/*Calcular el promedio de un alumno que tiene 7 calificaciones en la materia de Programación 1 */

int main()
{
    int calif, acum = 0, i;
    float promedio;

    for(i=0; i<7; i++){
        printf("ingrese nota %d\n",i+1);
        scanf("%d", &calif);
        acum = acum + calif;
    }
    promedio = acum / i;
    printf("El promedio de notas es:%.2f",promedio);

    return 0;
}
