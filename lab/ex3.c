#include <stdio.h>

int mul(int a, int b) {
    if (b == 0)
        return 0;
    else
        return a + mul(a, b-1);
}

int main() {
    int resultado = mul(2, 3);
    printf("Resultado: %d\n", resultado);

    return 0;
}
