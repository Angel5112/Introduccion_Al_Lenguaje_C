# Escriba un algoritmo en pseudo código, para verificar si un número es primo

# Funcion para determinar si un numero es primo

def prime_num(n):
    if (n == 1):
        print("\nEl numero no es primo!\n")
        return None
    else:
        for i in range(2, n):
            if (n % i == 0):
                print("El numero no es primo!\n")
                return None

    print("\nEl numero es primo!\n")

num = int(input("\nIngrese el numero: "))
prime_num(num)