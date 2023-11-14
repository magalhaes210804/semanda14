// Leonardo Magalhães 32318359
// Arthur Carbajo de Souza 32327961
#include <stdio.h>

int potencia(int x, int n) {
    if (n == 0)
        return 1;
    else
        return x * potencia(x, n-1);
}

int main() {
    int resultado = potencia(2, 3);
    printf("Resultado: %d\n", resultado);

    return 0;
}
