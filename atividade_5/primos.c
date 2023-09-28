#include <stdio.h>

int main() {
    int num, i, isPrime = 1; 

    printf("Digite um numero: ");
    scanf("%d", &num);

   
    if (num == 0 || num == 1) {
        isPrime = 0;
        }
    
    else if (num != 2 && num % 2 == 0) {
        isPrime = 0; 
    } 
    else {
       
        for (i = 3; i * i <= num; i += 2) {
            if (num % i == 0) {
                isPrime = 0; 
                break;
            }
        }
    }

    if (isPrime) {
        printf("%d e um numero primo.\n", num);
    } else {
        printf("%d nao e um numero primo.\n", num);
    }

    return 0;
}
