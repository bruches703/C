#include <stdio.h>
#include <stdlib.h>



void sumarDos(int, int); // prototipo de funcion

int main()
{
    int x;
    int y;
    int resultado;

    printf("INgrese numero: ");
    scanf("%d", &x);
    printf("INgrese numero: ");
    scanf("%d", &y);

    sumarDos(x, y); // llamada de la funcion



    return 0;
}

// Desarrollo de la funcion
void sumarDos(int num1, int num2){

        int suma;

        suma = num1 + num2;

    printf("La suma de los numeros es %d\n", suma);

 }
