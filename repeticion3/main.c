#include <stdio.h>
#include <stdlib.h>

/*Leer 10 números e imprimir solamente los números positivos */

int main()
{
    int num, i;

    for(i=0;i<9;i++){
        printf("\nIngrese un numero\n");
        scanf("%d", &num);
            if(num>0){
                printf("\nEl numero %d es positivo",num);
            }
            else{
                printf("El numero es negativo");
            }
    }
    return 0;
}
