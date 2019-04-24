#include <stdio.h>

/**PROTOTIPOS de funciones*/
int sumar(int n1, int n2);
int restar(int n1, int n2);
int multiplicar(int n1, int n2);
int dividir(int n1, int n2);
void pedirDosNumero();

/**Variable globales*/
int numero1,numero2;
/**FUNCIONES*/
int main()
{
    char miNombre[20];
    printf("ingrese su name please \n");
    scanf("%s",miNombre);
    printf("el nombre ingresado es %s",miNombre);

    int opcionIngresada = 0 ;
    printf("ingrese la opcion deceada \n1-SUMAR \n 2-RESTAR \n 3-MULTIPLICAR \n 4-DIVICION\n");
    scanf("%i",&opcionIngresada);
    switch(opcionIngresada)
    {

    case 1:
        pedirDosNumero();
        printf("el resultado de la suma es : %i", sumar(numero1, numero2));

        break;


    case 2:

        pedirDosNumero();
        printf("el resultado de la resta es : %i", (numero1 - numero2));

        break;

    case 3:
        pedirDosNumero();
        printf("el resultado de la multiplicacion es : %i", multiplicar(numero1,numero2));
        break;
    case 4 :
        pedirDosNumero();
        dividir(numero1, numero2);

        break;
    default:

        printf("Opción ingresada no es valida \n");

    }


    return 0;
}

/**definición de funciones*/

int sumar(int n1, int n2)
{
    /**cuerpo de mi función*/
    int resultado = 0;
    resultado = n1 + n2 ;
    return resultado;

}

int restar(int n1, int n2)
{
   /**cuerpo de mi función*/
    int resultado = 0;
    resultado = n1 - n2 ;
    return resultado;
}
int multiplicar(int n1, int n2)
{
   /**cuerpo de mi función*/
    int resultado = 0;
    resultado = n1 * n2 ;
    return resultado;
}
int dividir(int n1, int n2)
{
if(n2 != 0)
        {
            int resultado = n1 / n2 ;
            printf("el resultado de la divición es :%i ",resultado);

        }
        else
        {
            printf("ameeeegooo no podes dividir por cero en los numeros reales\n");
        }
}

void pedirDosNumero()
{
    printf("ingrese el primer numero \n");
    scanf("%i",&numero1);
    printf("ingrese el segundo numero \n");
    scanf("%i",&numero2);

}
