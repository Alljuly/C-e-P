#include <stdio.h>

int main() {
    int opcao, num, i;

    do {
        printf("Menu de Operacoes:\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 5) {
            printf("Saindo do programa. Adeus!\n");
            break;
        }

        printf("Digite um numero para calcular a tabuada: ");
        scanf("%d", &num);

        switch (opcao) {
            case 1:
                printf("Tabuada de Adicao para %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d + %d = %d\n", num, i, num + i);
                }
                break;
            case 2:
                printf("Tabuada de Subtracao para %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d - %d = %d\n", num, i, num - i);
                }
                break;
            case 3:
                printf("Tabuada de Multiplicacao para %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d x %d = %d\n", num, i, num * i);
                }
                break;
            case 4:
                printf("Tabuada de Divisao para %d:\n", num);
                for (i = 1; i <= 10; i++) {
                    printf("%d / %d = %.2f\n", num, i, (float)num / i);
                }
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

    } while (opcao != 5);

    return 0;
}
