#include <stdio.h>

float calc(int sal){
    if(sal > 1250 ){
       return sal * 0.1;
    } else if(sal <= 1250){
       return sal * 0.3;
    }
}

int main(){
    float sal = 0;

    printf("Qual o salario: ");
    scanf("%f",&sal);

    float novoSal = sal + calc(sal);
    printf("Seu salario foi reajustado: %.2f", novoSal);

    
}