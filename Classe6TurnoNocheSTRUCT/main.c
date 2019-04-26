#include <stdio.h>
#include <string.h>

/**definicion de estructura*/
struct CD{
    char titulo[25];
    char artista[20];
    float precio;
    int canciones;

}laMoscaEnLaSopa={
    "UltimoBondiAfinisterrie",
    "Patricio Rey ",
    14.50,
    13,
};

int main()
{
/**definir una variable de tipo Struct CD llamada discoEterno*/
struct CD discoEterno;

/**insertamos valores a los datos de nuestra estructura*/

discoEterno.canciones= 12;
discoEterno.precio = 15;

/**insertamos valores utilizando la funcion
string Copy de la libreria String.h
strcpy(destino,origen)*/
strcpy( discoEterno.titulo ,"musica para volar");
strcpy( discoEterno.artista ,"Gustavo Cerati");

printf("el disco 1 es \n");
printf("la mosca en la sopa \n");
printf(" artista : %s ",laMoscaEnLaSopa.artista );
printf("\n titulo : %s ",laMoscaEnLaSopa.titulo);
printf("\n precio : %f ",laMoscaEnLaSopa.precio);
printf("\n canciones : %i",laMoscaEnLaSopa.canciones);

printf("el disco 2 es :\n");
printf("\n disco eterno\n");
printf("\n artista :%s",discoEterno.artista);
printf("\n titulo :%s",discoEterno.titulo);
printf("\n precio :%f",discoEterno.precio);
printf("\n canciones :%i",discoEterno.canciones);

    return 0;
}
