#include <stdio.h>
#include <stdlib.h>
#include "Clifton.h"

int main()
{
    int max;
    int num1;
    int num2;
    int num3;

    printf("Ingrese valor de num1: ");
    scanf("%d", &num1);
    printf("Ingrese valor de num2: ");
    scanf("%d", &num2);
    printf("Ingrese valor de num3: ");
    scanf("%d", &num3);

    max=obtenerMaximo( num1, num2, num3);


    printf("El maximo es: %d\n", max);
    return 0;
}


