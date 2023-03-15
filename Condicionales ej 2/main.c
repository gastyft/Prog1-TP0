#include <stdio.h>
#include <stdlib.h>


/**En un almacén se hace un 20% de descuento a los clientes cuya compra supere los $5000
 ¿Cuál será la cantidad que pagara una persona por su compra? */


 const float desc=.2;

 int main()
{
    int paga;
    float total;

    printf("ingrese cantidad a pagar\n");
    scanf("%d",&paga);
    total=paga-(paga*desc);

    if(paga>5000){
        printf("Usted tiene un descuento y su total a pagar es $%.0f \n\n ",total);
    }
        else{
            printf("Usted no supera el monto de 5000 en su compra por lo tanto no posee descuento");
        }


    return 0;
}
