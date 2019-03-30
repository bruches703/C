#include "funcionesPuntero.h"

int dividir(int datoUno, int datoDos, float * resultado)
{
    float aux;
    int retorno;
    retorno = 0;
    if(datoDos != 0)
    {
        aux=(float)datoUno/datoDos;
        *resultado=aux;
        retorno = 1;
    }

    return retorno;

}

int pedirEdad(int * edad)   // valida que la edad este entre 0 y 150
{
    int aux;
    int retorno;
    retorno =0;
    printf("ingrese su edad: ");

    if(scanf("%d", &aux)==1)
    {
        if(aux>0 && aux < 150)
        {
            *edad=aux;
            retorno = 1;
        }
        return retorno;
    }
}

int cambiarValor(int dato)
{
    dato=0;
    printf("\nLugar valor: %d\n", &dato);

}

int cambiarReferencia(int* dato)
{
    *dato=0;
    printf("\nLugar referencia: %d\n", &dato);
}
