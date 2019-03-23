#include <stdio.h>
#include <stdlib.h>


int sumarUno(int, int); // prototipo de funcion

int main()
{
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

// Desarrollo de la funcion
int sumarUno(int num1, int num2){

        int suma;

        suma= num1 + num2;

        return suma;
 }
