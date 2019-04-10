/**
esto es un comentario de bloque
*/
//ESTO ES UN COMENTARIO DE LINEA

/** directiva  include: se utiliza para agregar librerias
 a nuestro proyecto*/

#include <stdio.h>//libreria Standart input - output de c usada para ingresar y mostrar datos del programa


/**main : es nuestra funcion principal
y el punto de inicio de ejecucion de
nuestro programas!*/
int main()
{

    /**Definimos e inicializamos nuestras variables de tipo entero!*/

    int numero1 = 0;
    int numero2 = 0;
    int resultado = 0;

    /**printf en una funcion de stdio.h*/
    printf("bienvenidos a intro programcion !\n ");
    printf("este primer programa resta dos numeros \n");

    /**solicito datos al Usuario*/
    printf("ingrese el primer numero\n");
    scanf("%i",&numero1);
    printf("ingrese el segundo numero\n");
    scanf("%i",&numero2);
    /** realizo operacion suma entre dos varialbes y se los asigno a la variable resultado*/
    resultado = numero1 - numero2;

    printf("El resultado de la suma de %i - %i = %i \n",numero1, numero2,resultado );//mostramos los valores ingresados y el resultado de la operacion por pantalla

    return 0;//retorno de codigo cero para el Sistema operativo sepa que el programa finalizo exitosamente

}
