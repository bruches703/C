#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("%d", sizeof(char));
    //system("pause");

   // int num = 10;
    //int num2 = 23;
    //int num3;
    //char letra = 'a';
    //float pi = 3.14;

    //printf("La variable num vale: %d", num);
    //printf("La variable letra vale: %c", letra);
    //printf("La variable pi vale: %.2f", pi); // para que muestre con dos decimales
    //printf("num vale %d y num2 vale %d", num, num2);
    //printf("%d",  num3);
    //printf("Ingrese un numero: ");
    //scanf("%d", &num3);

    //return 0;

    int num;
    int num2;
    float promedio;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num);

    printf("Ingrese segundo numero: ");
    scanf("%d", &num2);

    printf("La suma de num y num2 es : %d", num+num2);

    promedio = (float) (num+num2)/2;

    printf("\nEl promedio es: %.2f", promedio);

    return 0;
}
