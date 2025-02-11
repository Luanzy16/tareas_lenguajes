#include <stdio.h>
#include <time.h>

// Función para calcular el factorial de un número de manera iterativa
int factorial_iterativo(int n) {
    int resultado = 1;
    for (int i = 1; i <= n; i++) {
        resultado *= i;  // Multiplicamos el resultado por el número actual
    }
    return resultado;
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
        printf("El factorial de %d es %d\n", numero, factorial_iterativo(numero));
    }
    clock_t end = clock();  // Guardamos el tiempo de fin

    // Calcular el tiempo transcurrido en segundos
    double tiempo = ((double)(end - start)) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecución (iterativo): %f segundos\n", tiempo);

    return 0;
}