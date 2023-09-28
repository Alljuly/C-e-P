#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        int remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

int main() {
    int number;

    printf("Digite um numero: ");
    scanf("%d", &number);

    if (is_palindrome(number)) {
        printf("%d e um numero palindromo.\n", number);
    } else {
        printf("%d nao e um numero palindromo.\n", number);
    }

    return 0;
}
