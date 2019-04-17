#include <stdio.h>
#define TAMANO 10
int main()
{
   /**se tiene un conjunto de 40 notas ,
   calcule la media y la nota mas baja*/
//   int n1 ,n2 ,n3 ,n3 .......n40;
  /**Defino array de 40 posiciones*/
    int arrayDeNotas[TAMANO] ;
    int menorNota = 10 ;
    int totalNotas = 0;
    int promedio = 0;
    /**Recorro mi array con bucle FOR*/
    for(int x = 0 ; x < TAMANO ; x++){
        printf("ingrese la nota %i \n", x+1);
        scanf("%i",&arrayDeNotas[x]);
        /**busco la menor nota de mi array*/
        if(arrayDeNotas[x] < menorNota ){
            menorNota = arrayDeNotas[x];
        }
        totalNotas += arrayDeNotas[x];
        //totalNotas = totalNotas + arrayDeNotas[x];
    }
    promedio = totalNotas / TAMANO;
    /**Muestro array con bucle for*/
    for(int x = 0 ; x < TAMANO ; x++){

        printf("Array [ %i ] = %i \n  ", x, arrayDeNotas[x]);

    }
    printf("el mas burro tiene una nota de %i\n", menorNota);
    printf("el promedio es %i ",promedio);



    return 0;
}
