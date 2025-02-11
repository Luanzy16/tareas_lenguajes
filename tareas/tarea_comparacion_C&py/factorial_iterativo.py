import time

def factorial_iterativo(n):
    resultado = 1
    for i in range(2, n + 1):
        resultado *= i
    return resultado

# Solicitar número al usuario
n = int(input("Introduce un número: "))

# Medir el tiempo de ejecución
inicio = time.time()
factorial = factorial_iterativo(n)
fin = time.time()

# Mostrar resultados
print(f"Factorial de {n}: {factorial}")
print(f"Tiempo de ejecución: {fin - inicio:.10f} segundos")
