#include <stdio.h>


int main()
{
    int claveValida = 511;
    int claveIngresada = 0;
    int cantidadDeIntentos = 1 ;
    do
    {
        printf("ingrese por favor su clave de usuario \n");
        scanf("%i",&claveIngresada);
        if(claveIngresada != claveValida)
        {
            printf("ERROR CLAVE INVALIDA\n");
            cantidadDeIntentos++;

        }
    }
    while(claveIngresada != claveValida && cantidadDeIntentos <= 3);
    if(claveIngresada ==  claveValida )
    {
        printf("WELCOME TO APPLICATION\n");
    }
    else
    {
        printf("agoto sus 3 intentos \n");
    }


    return 0;
}
