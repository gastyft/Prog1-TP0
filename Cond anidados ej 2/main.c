#include <stdio.h>
#include <stdlib.h>


///Leer tres números diferentes e imprimir el número mayor de los tres.

int main()
{
    int num1,num2,num3;
    printf("Ingrese 3 numeros\n");
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);

    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 es mas grande\n ");
        }

    }
        else
        {


            if(num2>num3)
            {
                if(num2>num1)
                {
                    printf("num2 es mas grande\n ");

                }
            }
                else
                {
                    if(num3>num1)
                    {



                        if(num3>num2)
                        {
                            printf("num3 es mas grande\n ");

                        }
                    }}
        }
                    return 0;

}
