#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &n1, &n2);

    int *pn1 = &n1;
    int *pn2 = &n2;

    printf("Endereços de memória dos números:\n%p\n%p\n", pn1, pn2);

    return 0;
}