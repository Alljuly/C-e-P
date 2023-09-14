#include <stdio.h>


double valor(double distancia, int dias){
    double diaria = 60;
    double km = 0.15;

    double valorFinal =  (distancia * km) + (dias * diaria);

   printf("O valor a ser pago será de: %.2lf", valorFinal);
   
   return 0;
}

int main(){
    double distancia = 0;
    int dias = 1;

    printf("Quantos dias o cliente passou com o carro: \n");
    scanf("%d", &dias);
    printf("Quantos quilometros foram rodados: \n");
    scanf("%lf",&distancia);


    valor(distancia, dias);

}