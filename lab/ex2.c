#include <stdio.h>

int soma_digitos(int n) {
    if (n == 0)
        return 0;
    else
        return n % 10 + soma_digitos(n / 10);
}

int main() {
    int resultado = soma_digitos(123);
    printf("Resultado: %d\n", resultado);

    return 0;
}
