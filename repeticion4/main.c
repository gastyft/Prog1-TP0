#include <stdio.h>
#include <stdlib.h>

/**Leer 15 n�meros negativos y convertirlos en positivos e imprimir dichos n�meros.
*/
int main()
{
    int num,i, numpositivo;
    for(i=0;i<14;i++){
        printf("Ingrese numero negativo\n");
        scanf("%d",&num);
        if(num<0){
            numpositivo= -num;
        }
        printf("El numero es: %d\n", numpositivo);
    }
    return 0;
}
