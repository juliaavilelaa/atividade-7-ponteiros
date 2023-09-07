#include <stdio.h>
#include <stdlib.h>

int main() {
    char c = 'a';
    char *pc = &c;

    // letra a
    printf("%p\n", &c);
    printf("%c\n", c);

    // letra b
    printf("%p\n", pc);
    printf("%c\n", *pc);

    // letra c (endereço do pc)
    printf("%p\n", &pc);

    return 0;
}