#include <stdio.h>

int fib(int n) {
    if (n <= 1)
        return n;
    else
        return fib(n-1) + fib(n-2);
}

int main() {
    int resultado = fib(6); // Exemplo com n = 6
    printf("Resultado: %d\n", resultado);

    return 0;
}
