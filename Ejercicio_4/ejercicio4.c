// Dado un polinomio de la forma: aX 2 + bX + c Escriba un algoritmo en pseudo código, para calcular sus raíces.

#include <stdio.h>
#include <math.h>

// Funcion para calcular el discriminante

int cuadratic_disc(int x, int y, int z)
{
    int disc;

    disc = (y * y) - (4 * x * z);
    return disc;
}

// Funcion para analizar el discriminante

int analysis(int disc)
{
    if (disc == 0)
        return 1;
    else if (disc > 0)
        return 2;
    else
        return 3;
}

// Funcion para calcular las raices de un polinomio

void roots(int accion, int disc, int arr[], int x, int y, int z)
{
    int raiz;
    if (accion == 1)
    {
        printf("\nDiscriminante = 0 por lo tanto existen dos raices de un mismo valor, usando - b / (2a): ");
        raiz = -y / (2 * x);
        arr[0] = raiz;
        arr[1] = raiz;
    }
    else if (accion == 2)
    {
        printf("\nDiscriminante > 0 por lo tanto se usara la resolvente cuadratica: ");
        raiz = (-y + floor(sqrt((double) disc))) / (2 * x);
        arr[0] = raiz;
        raiz = (-y - floor(sqrt((double) disc))) / (2 * x);
        arr[1] = raiz;
    }
    else
    {
        printf("\nDiscriminante < 0 por lo tanto existen raices complejas, no implementadas");
        arr[0] = 0;
        arr[1] = 0;
    }
}

void main()
{
    int a, b, c, discriminante, caso;
    int raices[2];
    
    printf("\nIngrese el valor del coeficiente cuadratico: ");
    scanf("%d", &a);
    printf("\nIngrese el valor del coeficiente lineal: ");
    scanf("%d", &b);
    printf("\nIngrese el valor del termino independiente: ");
    scanf("%d", &c);

    // Llamada a funcion para calcular el discriminante

    discriminante = cuadratic_disc(a, b, c);
    printf("\nEl discriminante es: %d", discriminante);

    // Llamada a funcion para calcular las raices

    caso = analysis(discriminante);
    printf("\nEl caso de las raices es: %d\n", caso);

    // Llamada a funcion para calcular las raices

    roots(caso, discriminante, raices, a, b, c);

    // Imprimir las raices del polinomio

    printf("\n\nLas raices del polinomio son: \n");
    printf("Raiz 1 = %d\n", raices[0]);
    printf("Raiz 2 = %d\n", raices[1]);
}