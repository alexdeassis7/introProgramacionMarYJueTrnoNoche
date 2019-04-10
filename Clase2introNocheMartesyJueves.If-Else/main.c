#include <stdio.h>

#define DESCUENTO 0.20
int main()
{

    float totalDeLaCompra = 0;
    float PrecioAPagar = 0;
    printf("ingrese el total de su compra en el chino \n");
    scanf("%f",&totalDeLaCompra);

    if(totalDeLaCompra > 1000){
            PrecioAPagar = totalDeLaCompra - (totalDeLaCompra * DESCUENTO);

    }
    else{

        PrecioAPagar = totalDeLaCompra;
    }
printf("usted gasto %f su total a abonar es : %f",totalDeLaCompra, PrecioAPagar);

    return 0;
}
