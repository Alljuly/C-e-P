#include <stdio.h>

int main (){
    double distancia = 0;
    int velocidade = 0;

    printf("Qual a distancia que será percorrida?\n");
    scanf("%lf", &distancia);
    printf("Qual a velocidade estimada?\n");
    scanf("%d", &velocidade);
    

    double tempo = distancia/velocidade;

    printf("O tempo estimado para finalizar a viagem e de: %.lf", tempo);



}