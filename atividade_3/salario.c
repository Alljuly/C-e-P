#include <stdio.h>

int main (){
    double sal = 0;
    double aumento = 0;
    double novoSal = 0;


    printf("Qual o salario atual:\n");
    scanf("%lf", &sal);
    printf("Qual o aumento:\n");
    scanf("%lf", &aumento);

    novoSal = sal + (sal * (aumento/100));
    

    printf("O salario com o aumento de %.2lf\n", aumento);
    printf("é R$%.2lf\n",novoSal);
}