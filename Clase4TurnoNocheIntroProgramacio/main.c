#include <stdio.h>

int main()
{
    /**Calcular el promedio de un alumno que tiene
    7 calificaciones en la materiaa.....*/


    float calificacion = 0, totalnotas= 0 ,promedio = 0 ;

    for(int x = 1 ; x <= 7 ; x++ )
    {
        /**pido las notas!*/
        printf("ingrese la nota %i\n",x);
        scanf("%f",&calificacion);

        totalnotas = totalnotas +calificacion;
        //totalnotas += calificacion;
    }
    /**calculo promedio*/
    promedio = totalnotas / 7;

    printf("el promedio de sus 7 notas es %.2f\n",promedio);







return 0;
}
