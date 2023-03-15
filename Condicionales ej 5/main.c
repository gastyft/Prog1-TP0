#include <stdio.h>
#include <stdlib.h>

/**Hacer un algoritmo que calcule el total a pagar por la compra de camisas.
 Si se compran tres camisas o más se aplica un descuento del 20% sobre el total de la compra
 y si son menos de tres camisas un descuento del 10%
*/
int main()

{
    int camisas,compra;
    float total;



    printf("Ingrese cantidad de camisas que compro\n");
    scanf("%d",&camisas);
    printf("ingrese monton total de la compra\n");
    scanf("%d",&compra);
    if(camisas>=3)
    {
        total= compra*.2;
        printf("El monton total es de\n %.0f",compra-total);
    }
    else{
        total=compra*.1;
              printf("El monton total es de\n %.0f",compra-total);
}
    return 0;
}
