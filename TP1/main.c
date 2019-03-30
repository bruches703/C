#include <stdio.h>
#include <stdlib.h>

int mostrarMenu();

int main()
{
    int a;
    int b;
    int suma;
    int resta;
    float multiplicacion;
    float divicion;

    char seguir = 's';

    do{
        switch(mostrarMenu()){

        case 1:
            printf("Ingrese el valor de A:\n");
            scanf("%d", &a);
            break;
        case 2:
            printf("Ingrese el valor de B:\n");
            scanf("%d", &b);
            break;
        case 3:
               suma =  a+b;
               resta = a-b;
               divicion = (float)a/b;
               multiplicacion = (float) a*b;
            break;
        case 4:
            printf("La suma es: %d.\n La resta es: %d.\n La divicion es: %.2f.\n La multiplicacion es: %.2f.\n", suma, resta, divicion, multiplicacion);
            break;
        case 5:
            printf("Opcion Salir\n");
            seguir = 'n';
            break;
        default:
            printf("Opcion Invalida\n");
            break;
        }

        system("pause");

    }while(seguir=='s');

    return 0;
}

int mostrarMenu(){

    int opcion;
    system("cls"); // limpiar pantalla
    printf("*** Menu de Opciones ***\n\n");
    printf("1. Ingresar 1er operando (A=x)\n");
    printf("2. Ingresar 2do operando (B=y)\n");
    printf("3. Calcular todas las operaciones\n");
    printf("4. Informar resultados\n");
    printf("5-Salir\n");
    printf("\n Ingrese opcion: ");
    scanf("%d", &opcion);

    return opcion;

}
