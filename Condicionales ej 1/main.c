#include <stdio.h>
#include <stdlib.h>


/** Determinar si un alumno aprueba a reprueba un curso, sabiendo que aprobara si su promedio de tres calificaciones es mayor o igual a 7;
 reprueba en caso contrario.
*/
int main()
{
    int nota1,nota2,nota3;
    float prom;

   printf("ingrese tres notas \n");
   scanf("%d",&nota1);
   scanf("%d",&nota2);
   scanf("%d",&nota3);
   prom= (nota1+nota2+nota3)/3;
   if(prom>=7){
    printf("El alumno aprueba con \n %f",prom);
   }
    else{
        printf("El alumno desaprueba su promedio es: \n %.0f",prom);
    }




    return 0;
}
