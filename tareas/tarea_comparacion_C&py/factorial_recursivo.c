#include <stdio.h>
#include <time.h>

// Función recursiva para calcular el factorial de un número
int factorial_recursivo(int n) {
    // Caso base: si n es 0 o 1, el factorial es 1
    if (n == 0 || n == 1) {
        return 1;
    } else {
        // Caso recursivo: n * factorial(n-1)
        return n * factorial_recursivo(n - 1);
    }
}

int main() {
    int numero;

    // Pedir al usuario un número
    printf("Introduce un número entero: ");
    scanf("%d", &numero);

    // Medir el tiempo de ejecución
    clock_t start = clock();  // Guardamos el tiempo de inicio
    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        // Calcular y mostrar el factorial
        printf("El factorial de %d es %d\n", numero, factorial_recursivo(numero));
    }
    clock_t end = clock();  // Guardamos el tiempo de fin

    // Calcular el tiempo transcurrido en segundos
    double tiempo = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución (recursivo): %f segundos\n", tiempo);

    return 0;
}