#include <stdio.h>

int main() {
    int consumo;
    char tipo;
    float preco;

    printf("Digite a quantidade de kWh consumida: ");
    scanf("%d", &consumo);
    
    printf("Digite o tipo de instalação (R para residências, C para comércios, I para indústrias): ");
    scanf(" %c", &tipo);

    switch (tipo) {
        case 'R':
        case 'r':
            if (consumo <= 500) {
                preco = consumo * 0.40;
            } else {
                preco = consumo * 0.65;
            }
            break;
        case 'C':
        case 'c':
            if (consumo <= 1000) {
                preco = consumo * 0.55;
            } else {
                preco = consumo * 0.60;
            }
            break;
        case 'I':
        case 'i':
            if (consumo <= 5000) {
                preco = consumo * 0.55;
            } else {
                preco = consumo * 0.60;
            }
            break;
        default:
            printf("Tipo de instalação inválido.\n");
            return 1;  
    }

    printf("O preço a pagar é: R$ %.2f\n", preco);

    return 0;  
}
