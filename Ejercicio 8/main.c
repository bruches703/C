#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pares = 0;
    float promedio;
    int num;
    int max;
    int min;
    int acumulador = 0;
    int flag = 0;
    int contador = 0;
    char continuar;

    do{
        printf("Ingrese un numero: ");
        scanf("%d", &num);
            while(num < 0){
                printf("Error. Reingrese numero: ");
                scanf("%d", &num);
            }

            if(num % 2 == 0){
                pares++;
            }

            if(num > max || flag == 0){
                max = num;
            }
            if(num < min || flag == 0){
                min = num;
                flag = 1;
            }

            contador++;
            acumulador += num;

        printf("Continuar? ");
        fflush(stdin);
        scanf("%c", &continuar);
        seguir = tolower(seguir);
    }while(continuar == 's');

    promedio = (float) acumulador / (float) contador;

    printf("Cantidad de pares: %d. \n", pares);
    printf("El promedio es: %.2f. \n", promedio);
    printf("La suma es: %d. \n", acumulador);
    printf("El maximo es: %d. Y el minimo es: %d", max,min);

    return 0;
}
