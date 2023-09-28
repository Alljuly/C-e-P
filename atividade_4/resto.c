#include <stdio.h>

int calcular_resto_divisao(int dividendo, int divisor) {
    while (dividendo >= divisor) {
        dividendo -= divisor;
    }
    return dividendo;
}

int main() {
    int dividendo, divisor;

    printf("Digite o dividendo: ");
    scanf("%d", &dividendo);

    printf("Digite o divisor: ");
    scanf("%d", &divisor);

    int resto = calcular_resto_divisao(dividendo, divisor);

    printf("O resto da divisao de %d por %d e: %d\n", dividendo, divisor, resto);

    return 0;
}
