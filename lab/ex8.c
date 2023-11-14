#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0)
        return 0;
    else
        return (arr[tam-1] % x == 0) ? arr[tam-1] + divisiveis(arr, tam-1, x) : divisiveis(arr, tam-1, x);
}

int main() {
    int array[] = {4, 6, 8, 10};
    int tam = sizeof(array) / sizeof(array[0]);
    int x = 2;

    int soma = divisiveis(array, tam, x);
    printf("Soma dos números divisíveis por %d: %d\n", x, soma);

    return 0;
}
