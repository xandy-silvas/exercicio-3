#include <stdio.h>

// Função recursiva para calcular o n-ésimo termo da sequência de Fibonacci
int fibonacci(int n) {
    // Casos base:
    if (n == 0) {
        return 0; // Fibonacci(0) = 0
    } else if (n == 1) {
        return 1; // Fibonacci(1) = 1
    } else {
        // Chamada recursiva: Fibonacci(n) = Fibonacci(n-1) + Fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num = 6; // Termo da sequência de Fibonacci a ser calculado
    int termo = fibonacci(num); // Chama a função fibonacci
    printf("O %dº termo da sequência de Fibonacci é %d\n", num, termo); // Imprime o resultado
    return 0;
}
