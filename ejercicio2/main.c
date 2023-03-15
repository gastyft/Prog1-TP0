#include <stdio.h>
#include <stdlib.h>

/**
   2. Una tienda ofrece un descuento del 15% sobre el total de la compra y
    un cliente desea saber cuánto deberá pagar finalmente por su compra. */

    const float desc = .15;
int main()
{
    int compra;
    float compraTotal;
    printf("ingrese monto de la compra\n");
    scanf("%d",&compra);
    compraTotal= compra -compra*desc;
    printf("debera pagar en total\n%.0f",compraTotal);

    return 0;
}
