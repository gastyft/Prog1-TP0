#include <stdio.h>
#include <stdlib.h>

/*Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando, el multiplicador y el producto.*/

int main()
{
      int num,i=0,t=1;
    printf("Ingrese el numero que desea imprimir\n");
    scanf("%d",&num);


    do
    {
    t=i*num;
        printf("%d x %d = %d \n\n",num,i,t);
    i++;
    }
    while(i<11);

    return 0;
}
