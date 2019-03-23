#include <stdio.h>
#include <stdlib.h>

void sumarCuatro();

int main()
{
   sumarCuatro();
    return 0;
}

void sumarCuatro(){

     int x;
    int y;
    int resultado;

    printf("INgrese numero: ");
    scanf("%d", &x);
    printf("INgrese numero: ");
    scanf("%d", &y);

    resultado = sumarUno(x, y); // llamada de la funcion

    printf("La suma de los numeros es %d\n", resultado);

    return 0;

}
