#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0)
        return 0;
    else
        return (arr[tam-1] % x == 0) + divisiveis(arr, tam-1, x);
}

int main() {
    int array[] = {4, 6, 8, 10};
    int tam = sizeof(array) / sizeof(array[0]);
    int x = 2;

    int quantidade = divisiveis(array, tam, x);
    printf("Quantidade de números divisíveis por %d: %d\n", x, quantidade);

    return 0;
}
