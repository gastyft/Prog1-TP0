#include <stdio.h>
#include <stdlib.h>


///numero Factorial
int main()
{
    int f=1,num,i;
    printf("Ingrese numero al cual quiere hacerle el factorial\n");
    scanf("%d",&num);

    for(i=1;i<=num;i++){
        f=f*i;


    }
    printf("El factorial de %d, es : %d",num,f);

    return 0;
}
