#include <stdio.h>

int anosPerdidos(int cigarros, int anos){

    int cigarrosFumados = cigarros * 365 * anos;
    int minutosPerdidos = cigarrosFumados * 10;
    int diasPerdidos = minutosPerdidos / (24 * 60);

    printf("Foram perdidos: %d", diasPerdidos);
    printf(" dias e %d", minutosPerdidos);
    printf(" minutos");
}

int main(){
    int cigarro = 0;
    int anos = 0;


    printf("Quantos cigarros são fumados por dia: ");
    scanf("%d", &cigarro);

    printf("Quantos anos voce ja fumou: ");
    scanf("%d", &anos);

    anosPerdidos(cigarro, anos);
}