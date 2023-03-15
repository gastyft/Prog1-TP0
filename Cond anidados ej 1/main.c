#include <stdio.h>
#include <stdlib.h>


/**Leer 2 números; si son iguales que los multiplique,
si el primero es mayor que el segundo que los reste y si no que los sume.
*/
int main()
{
    int num1,num2;
    printf("Ingrese dos numeros\n");

    scanf("%d",&num1);
    scanf("%d",&num2);



    if(num1==num2){
        printf("son iguales por lo tanto multiplica\n %d",num1*num2);
    }
    else if(num1>num2){
        printf("num1 > num2 por lo tanto resta\n %d",num1-num2);
    }
    else if(num1<num2){
        printf("num1 < num2 por lo tanto suma\n %d",num1+num2);
    }

    return 0;
}
