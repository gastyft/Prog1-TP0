#include <stdio.h>
#include <stdlib.h>

/*Suponga que se tiene un conjunto de calificaciones de un grupo de 40 alumnos.
Realizar un algoritmo para calcular la calificaci�n promedio y la calificaci�n m�s baja de todo el grupo. */

int main()
{
    int nota, suma, i, notaMasBaja=10;
    float promedio;

    for (i=0; i<39; i++){
        printf("\nIngrese una nota: ");
        scanf("%d", &nota);

        suma += nota;
        if(notaMasBaja>nota){
            notaMasBaja= nota;
        }
    }
    promedio = suma / i;
    printf("El promedio es :%.2f\n", promedio);
    printf("La nota mas baja es: %d",notaMasBaja);

    return 0;
}
