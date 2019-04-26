#include <stdio.h>
//variables globales
float caja = 0;
float  precioVenta;
/**prototipos de funciones*/
void pedirVenta();/**funcion que pide el precio de venta  */
float calcularIVA();
float pagoCliente(float billeteLocal);
int main()
{
    int TiendaAbierta = 0;
    float billete = 0;
    do
    {
        printf("Bienvenido a la tienda \n");
        pedirVenta();
        printf("el impuesto de su producto es %f ",calcularIVA());
        //calcularTotalAPagar(precioVenta ,calcularIVA());
        caja += (precioVenta + calcularIVA());
        printf("\n con que billete abonara \n");
        scanf("%f",&billete);
        printf("su vuelto es %f",pagoCliente(billete));

        printf("\n la tienda continua abierta ??????????\n Ingrese 0 para cerrarla o presione cualquier tecla para seguir  \n");
        scanf("%i",&TiendaAbierta);
    }
    while(TiendaAbierta != 0);


    printf("el total de su caja es %f",caja);


    return 0;
}
//funciones
void pedirVenta()
{
    printf("ingrese el monto de la venta por favor \n");
    scanf("%f",&precioVenta);


}
float calcularIVA()
{
    float calcularIVA = precioVenta * 0.21 ;
    return calcularIVA;
}

float pagoCliente(float billeteLocal)
{

    float vuelto = 0;
    vuelto = billeteLocal - (precioVenta + calcularIVA());
    return vuelto;
}
