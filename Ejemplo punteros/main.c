#include <stdio.h>
#include <stdlib.h>
#include "funcionesPuntero.h"

int main()
{
    int sepudo;
    int primerEdad;
    int segundaEdad;
    float respuesta;
    pedirEdad(&primerEdad);
    pedirEdad(&segundaEdad);
    sepudo=dividir(primerEdad,segundaEdad, &respuesta);
    if(sepudo==1){
        printf("La respuesta es: %.2f", respuesta);
    }else{
        printf("No se pudo");
    }




/*
    int miEdad;
    int retorno;
    retorno=pedirEdad(&miEdad);

    if(retorno == 1){
        printf("su edad es: %d", miEdad);
    }else{
        printf("No se pudo");
    }
*/

/*
    int sueldo;
    sueldo=10000;

    printf("\nLugar sueldo: %d\n", &sueldo);

    cambiarValor(sueldo);
    printf(" Por valor: %d\n", sueldo);
    cambiarReferencia(&sueldo);
    printf(" Por referencia: %d\n", sueldo);

*/
    return 0;
}
