import time

def factorial_recursivo(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial_recursivo(n - 1)

# Solicitar número al usuario
n = int(input("Introduce un número: "))

# Medir el tiempo de ejecución
inicio = time.time()
factorial = factorial_recursivo(n)
fin = time.time()

# Mostrar resultados
print(f"Factorial de {n}: {factorial}")
print(f"Tiempo de ejecución: {fin - inicio:.10f} segundos")
