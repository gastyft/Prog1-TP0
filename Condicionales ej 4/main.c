#include <stdio.h>
#include <stdlib.h>

/**Desarrolle un algoritmo que lea dos números y los imprima en forma ascendente
*/
int main()
{
    int num1,num2;
    printf("Ingrese dos numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);

    if(num1>num2){
    printf("%d > %d",num1,num2);
    }
    else if(num1<num2){
     printf("%d > %d", num2,num1);
    }
    else if(num1=num2){
        printf("%d = %d",num1,num2);
    }

    return 0;
}
