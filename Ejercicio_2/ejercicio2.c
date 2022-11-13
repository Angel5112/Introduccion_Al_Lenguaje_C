// Escriba un algoritmo en pseudo código, para verificar si un número es par o impar.

#include <stdio.h>

#

void even_or_odd(int num)
{
    if (num % 2 == 0)
        printf("\nEl numero es par!\n");
    else
        printf("\nEl numero es impar!\n");
}

void main()
{
    int num;
    printf("\nIngrese el numero: ");
    scanf("%d", &num);
    even_or_odd(num);
}