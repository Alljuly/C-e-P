#include <stdio.h>

int main(){
    int num1 = 0, num2 = 0;
    int opc, res;


    printf("Digite o primeiro numero: \n");
    scanf("%d",&num1);

    
    printf("Digite o segundo numero: \n");
    scanf("%d",&num1);

    printf("Qual o operação:\n1 - SOMA"
    "\n2 - SUBTRACAO \n3 - MULTIPLICACAO \n4 - DIVISAO \nDigite o numero referente a operacao: ");
    scanf("%d",&opc);


    switch (opc) {
    case 1: 
       res = num1 + num2;
       printf("O resultado é: %d", res);
       break;
    case 2: 
       res = num1 - num2;
       printf("O resultado é: %d", res);
       break;
    case 3: 
       res = num1 * num2;
       printf("O resultado é: %d", res);
        break;
    case 4: 
       res = num1 / num2;
       printf("O resultado é: %d", res);
       break;

    default:
        printf("Operacao invalida.");
    }

    
}