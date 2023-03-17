#include <stdio.h>
#include <stdlib.h>

/*Leer 10 números y obtener su cubo y su cuarta.*/

int main()
{
    int num, cubo, cuarta, i;

    for (i=0; i<11; i++){
        printf("\nIngrese un numero\n");
        scanf("%d", &num);
        cubo= num*num*num;
        cuarta=cubo*num;
        printf("\nEl cubo es %d , y la cuarta es %d",cubo,cuarta);
    }
    return 0;
}
