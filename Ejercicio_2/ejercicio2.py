# Escriba un algoritmo en pseudo código, para verificar si un número es par o impar.

# Funcion para determinar la paridad de un numero

def even_or_odd(n):
    if n % 2 == 0:
        print("\nEl numero es par!\n")
    else:
        print("\nEl numero es impar!\n")


num = float(input("\nIngrese un numero: "))

even_or_odd(num)
