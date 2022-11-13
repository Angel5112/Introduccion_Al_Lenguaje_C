// Escriba un algoritmo en pseudo código, para determinar el mayor de tres números

#include <stdio.h>

float greatest_number(float x, float y, float z)
{
    float greatest;

    if (x > y && x > z)
        greatest = x;
    else if (y > x && y > z)
        greatest = y;
    else
        greatest = z;
    
    return greatest;
}

void main()
{
    float num1, num2, num3, result;

    printf("\nIngrese el 1er numero: ");
    scanf("%f", &num1);
    printf("Ingrese el 2do numero: ");
    scanf("%f", &num2);
    printf("Ingrese el 3er numero: ");
    scanf("%f", &num3);

    result = greatest_number(num1, num2, num3);
    printf("El mayor numero entre %.2f, %.2f y %.2f es: %.2f\n", num1, num2, num3, result);
}