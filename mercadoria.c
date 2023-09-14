#include <stdio.h>

int main (){
    double preco = 0;
    double desconto = 0;
    double novoPreco = 0;


    printf("Qual o preco atual:\n");
    scanf("%lf", &preco);
    printf("Qual o desconto:\n");
    scanf("%lf", &desconto);

    novoPreco = preco - (preco * (desconto/100));
    

    printf("O preco com o desconto de porcentagem de %.lf\n", desconto);
    printf("é R$%.2lf\n",novoPreco);
}