# Escriba un algoritmo en pseudo código, para determinar el mayor de tres números

# Funcion para retornar el mayor de 3 numeros

def greatest_number(x, y, z):
    if x > y and x > z:
        greatest = x
    elif y > x and y > z:
        greatest = y
    else:
        greatest = z
    
    return greatest


num1 = float(input("\nIngrese el 1er numero: "))
num2 = float(input("Ingrese el 2do numero: "))
num3 = float(input("Ingrese el 3er numero: "))

result = greatest_number(num1, num2, num3)
print(f"\nEl numero mas grande entre {num1:.2f}, {num2:.2f} y {num3:.2f} es: {result:.2f}\n")