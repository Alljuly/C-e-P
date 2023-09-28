/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main (){
    int nums[3], size = sizeof(nums)/4;
    int num = 0, maior = 0, menor = 0;

    for(int i = 0; i < size; i++ ){
        
        printf("tamanho: %ld", sizeof(nums));

        printf("Digite um numero:\n");
        scanf("%d",&num);
            nums[i] = num;
        if(i == 0){
            menor = num;
            maior = num;
        } else if(menor > num ){
            menor = num;
        } else if( maior < num){
            maior = num;
        }
    }

    printf("Maior numero: %d\n", maior);
    printf("Menor numero: %d\n", menor);


}
