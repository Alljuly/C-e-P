#include <stdio.h>
#include <string.h>

int main() {
    char frase[1000];
    printf("Digite a frase: ");
    fgets(frase, sizeof(frase), stdin);

    int len = strlen(frase);
    for (int i = 0; i < len; i++) {
        if (frase[i] != ' ') {
            putchar(frase[i]);
        }
    }

    return 0;
}
