#include <stdio.h>
#include <string.h>

int main() {
    char nome[100];
    printf("Digite o nome completo: ");
    fgets(nome, sizeof(nome), stdin);

    int len = strlen(nome);

    int i;
    for (i = len - 1; i >= 0; i--) {
        if (nome[i] == ' ') {
            break;
        }
    }

    if (i >= 0) {
        printf("%s/%s", &nome[i + 1], nome);
        nome[i] = '\0';  
    } else {
        printf("Nome incompleto ou inválido.\n");
    }

    return 0;
}
