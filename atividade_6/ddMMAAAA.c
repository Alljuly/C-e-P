#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() {
    char data[11];
    int dia, mes, ano;
    bool formato_valido = false;

    printf("Digite a data no formato 'DD/MM/AAAA': ");
    scanf("%s", data);

    if (strlen(data) == 10 && data[2] == '/' && data[5] == '/') {
        dia = atoi(data);
        mes = atoi(data + 3);
        ano = atoi(data + 6);

        if (dia >= 1 && dia <= 31 && mes >= 1 && mes <= 12 && ano >= 0) {
            formato_valido = true;
        }
    }

    if (formato_valido) {
        printf("Dia: %02d\n", dia);
        printf("Mês: %02d\n", mes);
        printf("Ano: %04d\n", ano);
    } else {
        printf("Formato de data inválido.\n");
    }

    return 0;
}
