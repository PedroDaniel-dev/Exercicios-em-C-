#include <stdio.h>

int main() {
    int dia, mes, ano, data;
    printf("Insira a data no padrao ddmmaaaa.");
    scanf("%2d%2d%4d", &dia, &mes, &ano);
    printf("%02d/%02d/%04d", dia, mes, ano);

    return 0;
}
