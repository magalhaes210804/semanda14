#include <stdio.h>

int fib(int n, int memo[]) {
    if (n <= 1)
        return n;
    else if (memo[n] == -1)
        memo[n] = fib(n-1, memo) + fib(n-2, memo);

    return memo[n];
}

int main() {
    int n = 6; // Exemplo com n = 6
    int memo[n+1];

    for (int i = 0; i <= n; ++i)
        memo[i] = -1;

    int resultado = fib(n, memo);
    printf("Resultado: %d\n", resultado);

    return 0;
}
