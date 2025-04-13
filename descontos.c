#include <stdio.h>

int main() {
    int valorOriginal, desconto, valorPromocional;
    printf("Digite o valor atual do produto em reais: ");
    scanf("%d", &valorOriginal);
    printf("Digite o desconto em porcentagem: ");
    scanf("%d", &desconto);
    valorPromocional = valorOriginal - ((valorOriginal * desconto) / 100);
    printf("Desconto: %d\n", (valorOriginal * desconto) / 100);
    printf("Novo valor: %d", valorPromocional);
}
