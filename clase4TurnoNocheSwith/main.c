#include <stdio.h>
int main()
{
    /**SELECCION SWITCH*/

    int opcion = 0;
    int n1, n2;
    do
    {
    printf("ingrese una opcion \n 1 para sumar \n 2 para restar \n");
    scanf("%i",&opcion);

        switch(opcion)
        {
        case 1 :
            printf("ingrese en el case 1 \n");
            printf("ingrese el primer numero \n");
            scanf("%i",&n1);
            printf("ingrese el segundo numero \n");
            scanf("%i",&n2);
            printf("LA SUMA ES %i", n1 + n2);
            break;

        case 2 :
            printf("ingrese en el case 2 \n");
            printf("ingrese en el case 1 \n");
            printf("ingrese el primer numero \n");
            scanf("%i",&n1);
            printf("ingrese el segundo numero \n");
            scanf("%i",&n2);
            printf("LA RESTA ES %i", n1 - n2);

            break;
        default :
            printf("opcion no valida \n");
        }
    }
    while((opcion != 1) && (opcion != 2));




            return 0;
}
