#include <stdio.h>

int divisiveis(int arr[], int tam, int x) {
    if (tam == 0)
        return 1;
    else
        return (arr[tam-1] % x == 0) && divisiveis(arr, tam-1, x);
}

int main() {
    int array[] = {4, 6, 8, 10};
    int tam = sizeof(array) / sizeof(array[0]);
    int x = 2;

    if (divisiveis(array, tam, x))
        printf("Todos os números são divisíveis por %d.\n", x);
    else
        printf("Pelo menos um número não é divisível por %d.\n", x);

    return 0;
}
