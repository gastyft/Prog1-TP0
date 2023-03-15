#include <stdio.h>
#include <stdlib.h>

/**Un maestro desea saber qué porcentaje de hombres y que porcentaje de mujeres hay en un grupo de estudiantes*/

int main()
{
    int hombres, mujeres,Total;
    float porcentH,porcentM;
printf("ingrese cantidad de hombres y mujeres en ese orden\n");
scanf("%d",&hombres);
scanf("%d",&mujeres);

Total= mujeres+hombres;

porcentH= (hombres*100)/Total;
porcentM=(mujeres*100)/Total;

printf("La cantidad total de estudiantes es \n %d \n El porcentaje de mujeres es \n %.0f \n El porcentaje de hombres es \n %.0f \n", Total,porcentM,porcentH);


   return 0;
}
