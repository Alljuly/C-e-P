#include <stdio.h>
#include <string.h>

int main() {
    char frase1[1000], frase2[1000];
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);

    printf("Frase 1 invertida com A trocado por *: ");
    for (int i = strlen(frase1) - 1; i >= 0; i--) {
        if (frase1[i] == 'A' || frase1[i] == 'a') {
            putchar('*');
        } else {
            putchar(frase1[i]);
        }
    }

    printf("\nFrase 2 invertida com A trocado por *: ");
    for (int i = strlen(frase2) - 1; i >= 0; i--) {
        if (frase2[i] == 'A' || frase2[i] == 'a') {
            putchar('*');
        } else {
            putchar(frase2[i]);
        }
    }

    return 0;
}
