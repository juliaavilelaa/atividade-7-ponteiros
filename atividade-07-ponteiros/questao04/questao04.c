#include <stdio.h>
#include <stdlib.h>

int troca(int *a, int *b) {
    int x = *a;
    *a = *b;
    *b = x;
}

int main() {
    int n1, n2;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);

    printf("Valores antes da troca: %d e %d.\n", n1, n2);

    troca(&n1, &n2);

    printf("Valores apos a troca: %d e %d.\n", n1, n2);

    return 0;
}