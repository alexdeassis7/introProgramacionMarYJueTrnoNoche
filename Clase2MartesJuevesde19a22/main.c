#include <stdio.h>

/**defino constantes*/
#define SEXO 'J'
#define APROBADO 7

int main()
{
    /**definimos variable*/
    float n1, n2, N2 ;
    //char sexo = SEXO;
    //printf("el sexo es %c\n\n", sexo);
    printf("ingrese nota 1 ");
    scanf("%f",&n1);
    fflush(stdin);
    printf("ingrese nota 2 ");
    fflush(stdin);
    scanf("%f",&n2);
    printf("ingrese nota 3 ");
    scanf("%f",&N2);
    fflush(stdin);
    float promedioNotas = (n1 +n2 + N2 )/ 3;

    printf("el promedio de sus notas es : %.2f \n ",promedioNotas);

    if(promedioNotas >= 7)
    {
        printf("###########################################");
        printf("############CONGRATULATIONS################");
        printf("#################APROBADO##################");
        printf("###########################################");
    }
    else
    {
        printf("###########################################");
        printf("############LOSSER!!!!!!!!!################");
        printf("####DESAPROBADO BURRO######################");
        printf("###########################################");

    }

    //printf("ingrese su sexo por favor M ||  F \n");
    //fflush(stdin);
    //scanf("%c",&sexo);
    //printf("%c",sexo);


    return 0;
}
