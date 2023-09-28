#include <stdio.h>

float calcPrest(float valor, int par){
    return valor / par ; 
}

int main(){
    float sal, valor;
    int par;

    printf("Qual o seu salario: \n");
    scanf("%f",&sal);

    printf("Qual o valor da casa: \n");
    scanf("%f",&valor);
     
    printf("Qual a quantidade de parcelas: \n");
    scanf("%d",&par);


    float prest = calcPrest(valor, par);
    if(prest > sal * 0.3){
        printf("Seu emprestimo foi NEGADO.");
    } else {
          printf("Seu emprestimo foi APROVADO.");
    }
    printf("Cada prestação ficaria no valor de: %.2f", prest);

    
}