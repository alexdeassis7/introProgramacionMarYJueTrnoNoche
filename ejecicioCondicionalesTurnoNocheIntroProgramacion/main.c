#include <stdio.h>

/**Realizar un algoritmo que pueda leer tres numero diferentes
    e imprimir el mayor de los tres*/

int main()
{
    /**defino las 4 variables a utilizar*/
    int n1,n2,n3, mayor;
    /**Solicito los 3 numeros*/
    printf("ingrese el numero1");
    scanf("%i",&n1);
    printf("ingrese el numero2");
    scanf("%i",&n2);
    printf("ingrese el numero3");
    scanf("%i",&n3);

    /**verifico cual es el mayor*/
    if((n1>n2) && (n1 > n3) )
    {

        mayor = n1;
    }
    else if ((n2> n3 ) &&( n2 > n1))
    {
        mayor = n2;
    }
    else
    {
        mayor = n3;
    }
    /**muestro el mayor por pantalla*/
    printf("el mayor de los numeros es : %i", mayor);

    return 0;
}
