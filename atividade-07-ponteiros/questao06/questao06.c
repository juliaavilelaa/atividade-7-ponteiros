#include <stdio.h>
#include <stdlib.h>

int soma(int *a, int b) {
    *a = *a + b;
}

int main() {
    int n1, n2;

    printf("Digite os valores de A e B: ");
    scanf("%d %d", &n1, &n2);

    soma(&n1, n2);

    printf("Valor de A após a função: %d\n", n1);
    printf("Valor de B: %d\n", n2);

    return 0;
}
