#include <stdio.h>
#include <stdlib.h>

void unaFuncion(int* puntero);

int main()
{
    int x;

    unaFuncion(&x);

    printf("X vale %d"
           , x);

    return 0;
}
void unaFuncion(int* puntero){

    int num;


   *puntero = 44;// cambia el valor que esta dentro de la direccion de memoria de puntero
                    // el puntero sirve para pasarse direcciones de memoria entre funciones.

}




