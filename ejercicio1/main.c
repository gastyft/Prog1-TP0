#include <stdio.h>
#include <stdlib.h>

/** 1.Suponga que un individuo desea invertir su capital en un banco y
 desea saber cu�nto dinero ganar� despu�s de un mes si el banco paga a raz�n de 2% mensual.
 */

int main()
{
    int capital;
    float ganancia;

    printf("Ingrese capitall a invertir!\n\n");
    scanf("%d",&capital);

    ganancia=capital*.02;

    printf("Su ganancia de interes es\n%.2f",ganancia);

    return 0;
}
