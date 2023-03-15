#include <stdio.h>
#include <stdlib.h>


/**Un obrero necesita calcular su salario semanal,
el cual se obtiene de la sig. manera: Si trabaja 40 horas o menos se le paga $300 por hora
Si trabaja más de 40 horas se le paga $300 por cada una de las primeras 40 horas y $400 por cada hora extra.
*/
int main()
{
    int horas,horasTotales,horasComunes,horasExtras;

    printf("Ingrese cantidad de horas trabajadas\n");
    scanf("%d",&horas);

    if(horas<=40){
        horasTotales= horas*300;
         printf("Su salario semanal es de $ %d",horasTotales);
    }
    else if(horas>40){
        horasComunes=40*300;
        horasExtras=(horas-40)*400;
        horasTotales=horasComunes+horasExtras;

        printf("Su salario semanal es de $ %d",horasTotales);
    }


    return 0;
}
