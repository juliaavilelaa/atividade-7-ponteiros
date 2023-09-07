#include <stdio.h>

int somaDobro(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
    return *a + *b;
}

int main() {
    int n1, n2;

    printf("Digite dois valores inteiros: ");
    scanf("%d %d", &n1, &n2);

    int resultado = somaDobro(&n1, &n2);

    printf("A soma do dobro de A e B é: %d\n", resultado);

    printf("Valor de A após a função: %d\n", n1);
    printf("Valor de B após a função: %d\n", n2);

    return 0;
}
