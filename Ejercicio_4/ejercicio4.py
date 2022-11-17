# Dado un polinomio de la forma: aX 2 + bX + c Escriba un algoritmo en pseudo código, para calcular sus raíces.

from math import sqrt

# Funcion para calcular el discriminante

def disc(x, y, z):
    discr = (y ** 2) - (4 * x * z)
    return discr

# Funcion para calcular las raices

def roots(discr, x, y, z, roots_value):
    if discr == 0:
        print("\nDiscriminante = 0 por lo tanto existen 2 raices de igual valor, usando - b / (2a): ")
        root = -y // (2 * x)
        roots_value.append(root)
        roots_value.append(root)
    elif discr > 0:
        print("\nDiscriminante > 0 por lo tanto existen 2 raices de diferente valor, usando la resolvente cuadratica: ")
        root = (-y + sqrt(discr)) // (2 * x)
        roots_value.append(root)
        root = (-y - sqrt(discr)) // (2 * x)
        roots_value.append(root)
    else:
        print("\nDiscriminante < 0 por lo tanto hay raices complejas, no implementado!")
        roots_value.append(0)
        roots_value.append(0)



# Programa Principal

raices = []

a = int(input("Ingrese el valor del coeficiente cuadratico: "))
b = int(input("Ingrese el valor del coeficiente lineal: "))
c = int(input("Ingrese el valor del termino independiente: "))

# Llamada a funcion para calcular el discriminante

discriminante = disc(a, b, c)
print(f"\nEl discriminante es: {discriminante}")

# Llamada a funcion para calcular las raices 

roots(discriminante, a, b, c, raices)
print("\nLas raices son: \n")
print(f"Raiz 1 = {raices[0]}")
print(f"Raiz 2 = {raices[1]}")
