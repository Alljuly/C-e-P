#include <stdio.h>

int main() {
    char palavra[25], c;
    int p;

    printf("Qual a palavra:\n");
    scanf("%s", palavra);

    printf("Qual a posicao e o caracter:\n");
    scanf("%d %c", &p, &c);

    for (p; p < 25; p++) {
        if (palavra[p] == c) {
            printf("O caracter %c foi encontrado na posicao %d\n", c, p);
            break; 
        }
    }

    return 0;
}