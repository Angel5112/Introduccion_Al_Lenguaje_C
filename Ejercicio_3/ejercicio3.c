// # Escriba un algoritmo en pseudo código, para verificar si un número es primo

#include <stdio.h>

// Funcion para determinar si un numero es primo

void prime_num(int n)
{
    if (n == 1)
    {
        printf("\nEl numero no es primo!\n");
        return;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                printf("\nEl numero no es primo!\n");
                return;
            }
        }
        printf("\nEl numero es primo!\n");
    }
}

void main()
{
    int num;
    printf("\nIngrese el numero: ");
    scanf("%d", &num);
    prime_num(num);
}