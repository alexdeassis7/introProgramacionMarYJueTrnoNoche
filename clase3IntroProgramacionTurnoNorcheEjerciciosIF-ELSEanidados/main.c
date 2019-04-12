#include <stdio.h>

int main()
{
    float salarioMensual, antiguedad,utilidad;

    printf("ingrese su salario mensual\n");
    scanf("%f",&salarioMensual);
    printf("ingrese su antiguedad en la empresa");
    scanf("%f",&antiguedad);

    if(antiguedad < 1)
    {
        utilidad = salarioMensual * 0.05;
    }
    else if(antiguedad<2)
    {
        utilidad = salarioMensual * 0.07;
    }
    else if(antiguedad < 5 )
    {
        utilidad = salarioMensual * 0.10;
    }
    else if (antiguedad < 10)
    {
        utilidad = salarioMensual * 0.15;
    }
    else
    {
        utilidad = salarioMensual * 0.20;
    }

    printf("su bono anual sera de  %f", utilidad);



    return 0;
}
