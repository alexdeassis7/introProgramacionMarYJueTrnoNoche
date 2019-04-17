#include <stdio.h>

int main()
{
    /**ingresar dos numeros y mostrar el mayor*/

    int n1, n2,mayor;

    printf("ingrese en numero 1\n");
    scanf("%i",&n1);
    printf("ingrese en numero 2\n");
    scanf("%i",&n2);
//    if(n1 > n2)
//    {
//        mayor = n1;
//    }
//    else
//    {
//        mayor = n2;
//    }
//
    /**operador Ternario ejemplo*/

    int cantidadHelados = 4    ;
    printf("usted compro %s", cantidadHelados < 2 ? "HELADO" : "helados");
    mayor = n1 > n2 ? n1 : n2 ;
    printf("el mayor de los numero es %i \n",mayor);

    return 0;
}
