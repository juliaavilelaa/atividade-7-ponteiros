#include <stdio.h>
#include <stdlib.h>

int main() {
    // variáveis
    int i = 3;
    float r = 3.10;
    char c = 'j';

    // ponteiros
    int *pi = &i;
    float *pr = &r;
    char *pc = &c;

    // antes da modificação
    printf("Valores das variáveis antes da modificação:\n");
    printf("inteiro: %d\nreal: %.2f\nchar: %c\n", *pi, *pr, *pc);

    // modificação
    *pi = 10;
    *pr = 10.3;
    *pc = 'a';

    // após a modificação
    printf("Valores das variáveis após as modificações:\n");
    printf("inteiro: %d\nreal: %.2f\nchar: %c\n", *pi, *pr, *pc);

    return 0;
}