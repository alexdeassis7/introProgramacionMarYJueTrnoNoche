#include <stdio.h>
#include <string.h>
/**             ESTRUCTURAS ANIDADAS:
Una estructura puede estar dentro de otra estructura y eso se conoce como
anidamiento de estructuras
*/
#define TAMANO 5
typedef struct {
    char direccion [25];
    char ciudad[25];
    char provincia[25];
    long int codigo_postal;
}infoPersona;
struct empleado
{
    infoPersona info_empleado;/**anido estructura infoPersona
    dentro de structura empleado*/
    char nombre_empleado[25];
    double salario;
    int legajo ;

};
typedef struct
{
    infoPersona info_cliente; /**anido estructura infoPersona
    dentro de structura Cliente*/
    char nombre_cliente[25];
    float saldo;
    char sucursal [25];
} cliente;

int main()
{

//    struct cliente primerCliente;

    /**Defino una Structura de tipo Cliente*/
    cliente segundoCliente ;
    struct empleado miEmpleado;
    char aux[30];
    /**Defino Array de tipo Cliente*/

    struct empleado misEmpleados[TAMANO];
    printf("##########Ingrese los nombres de sus empleados#########\n");
    /**defino for para recorrer mi array de Struct y setear los nombres en cada indice*/
    for(int x = 0 ; x < TAMANO ; x++){
        printf("ingrese el nombre del empleado %i\n",x +1);
        scanf("%s",aux);
        strcpy(misEmpleados[x].nombre_empleado,aux);


    }

    printf("#################MUESTRO DATOS CARGADOS###############");
 /**defino for para recorrer mi array de Struct y mostrar los nombres cargados en el paso anterior*/
    for(int x = 0 ; x < TAMANO ; x++){
        printf("MisEmpleados[%i] = %s \n",x, misEmpleados[x].nombre_empleado);

    }




    char auxiliar[25];/**defino una variable auxiliar*/

    printf("###########SOLICITO DATOS DE CLIENTE###############\n");
    /**SOLICITO DATOS AL USUARIO Y CARGO MI ESTRUCUTURA*/
    printf("ingrese el nombre del cliente \n");
    scanf("%s",auxiliar  );
    strcpy( segundoCliente.nombre_cliente,auxiliar );

    printf("ingrese  saldo del cliente \n");
    scanf("%f",&segundoCliente.saldo);

    printf("ingrese  direccion \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( segundoCliente.info_cliente.direccion,auxiliar );

    printf("ingrese  ciudad \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( segundoCliente.info_cliente.ciudad,auxiliar );


    printf("ingrese  provincia \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( segundoCliente.info_cliente.provincia,auxiliar );

    printf("ingrese  codigo postal \n");
    scanf("%i", &segundoCliente.info_cliente.codigo_postal);

    printf("ingrese  sucursal \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( segundoCliente.sucursal,auxiliar );



    printf("###########SOLICITO DATOS DE EMPLEADO ###############\n");
    /**SOLICITO DATOS AL USUARIO Y CARGO MI ESTRUCUTURA*/
    printf("ingrese el nombre del empleado \n");
    scanf("%s",auxiliar  );
    strcpy( miEmpleado.nombre_empleado,auxiliar );

    printf("ingrese  salario del empleado \n");
    scanf("%f",&miEmpleado.salario);

    printf("ingrese  direccion \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( miEmpleado.info_empleado.direccion,auxiliar );

    printf("ingrese  ciudad \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( miEmpleado.info_empleado.ciudad,auxiliar );

    printf("ingrese  provincia \n");
    scanf("%s",auxiliar  );
    fflush(stdin);
    strcpy( miEmpleado.info_empleado.provincia,auxiliar );

    printf("ingrese  codigo postal \n");
    scanf("%i", &miEmpleado.info_empleado.codigo_postal);

    printf("ingrese el legajo del Empleado\n");
    scanf("%i", &miEmpleado.legajo);


    return 0;
}
