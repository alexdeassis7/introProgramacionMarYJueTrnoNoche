#include <stdio.h>
float calculoImpuesto(float p1, float imp);
int main()
{
    char nombreProducto[25];
    float precioProducto,impuesto;
    printf("ingrese el nombre de l producto \n");
    scanf("%s",nombreProducto);
    printf("ingrese el precio del producto \n");
    scanf("%f",&precioProducto);
    printf("ingrese el impuesto a aplicar a su producto\n");
    scanf("%f",&impuesto);
    printf("el valor final de %s es : %f", nombreProducto ,calculoImpuesto(precioProducto,impuesto));
    return 0;
}

float calculoImpuesto(float p1, float imp)
{
    float resultado = p1 +(p1* imp);
    return resultado;
}
