#include <stdio.h>
#include <stdlib.h>



int sumarTres(); // prototipo de funcion

int main()
{
   int suma;
   suma = sumarTres();

   printf("La suma es %d\n", suma);




    sumarTres(); // llamada de la funcion



    return 0;
}

// Desarrollo de la funcion
void sumarTres(int num1, int num2){

    int x;
    int y;
    int resultado;

      printf("INgrese numero: ");
    scanf("%d", &x);
    printf("INgrese numero: ");
    scanf("%d", &y);

        resultado = x + y;

    printf("La suma de los numeros es %d\n", suma);

 }
