#include <stdio.h>
/**leer 20 numero e imprimir cuantos son positivos ,
cuantos negativos y cuantos neutros*/
int main()
{
    /**defino variables de tipo contador*/
    int cantidadNegativos = 0;
    int cantidadPositivos = 0;
    int cantidadNeutros = 0;
    int numeroIngresado ;

    for(int x = 1; x <= 20 ; x ++)
    {
        printf("#####################################\n");
        /**solicito un numeor al usuario*/
        printf("ingrese un numero \n");
        scanf("%i",&numeroIngresado);
        if(numeroIngresado > 0)
        {
            cantidadPositivos ++;
        }
        else if (numeroIngresado < 0)
        {
            cantidadNegativos ++ ;
        }else {
            cantidadNeutros ++;
        }
    }

    printf("usted ingreso \n");
    printf("NEGATIVOS = %i \n POSITIVOS : %i \n NEUTROS : %i\n",cantidadNegativos,cantidadPositivos,cantidadNeutros);
    return 0;
}
