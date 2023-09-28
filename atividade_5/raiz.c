#include <stdio.h>
#include <math.h>

double calcular_raiz_quadrada(double n) {
    double b = 2.0; 
    while (fabs(n - b * b) > 0.0001) {
        double p = (b + (n / b)) / 2.0;
        b = p;
    }
    return b;
}

int main() {
    double numero, raiz_quadrada;

    printf("Digite o numero para calcular a raiz quadrada: ");
    scanf("%lf", &numero);

    raiz_quadrada = calcular_raiz_quadrada(numero);

    printf("A raiz quadrada de %.4lf é aproximadamente %.4lf\n", numero, raiz_quadrada);

    return 0;
}
