#include <stdio.h>

float soma_array(float arr[], int tam) {
    if (tam == 0)
        return 0;
    else
        return arr[tam-1] + soma_array(arr, tam-1);
}

int main() {
    float array[] = {1.0, 2.5, 3.7};
    int tam = sizeof(array) / sizeof(array[0]);

    float resultado = soma_array(array, tam);
    printf("Resultado: %.2f\n", resultado);

    return 0;
}
