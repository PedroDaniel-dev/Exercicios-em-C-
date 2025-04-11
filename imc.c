#include <stdio.h>

int main()
{
    int peso, altura;
    int imc;
    printf("Digite seu peso\n");
    scanf("%d", &peso);
    printf("Digite sua altura\n");
    scanf("%d", &altura);
    altura = altura / 100;
    printf("Seu IMC eh: %d", peso / (altura * altura));
}
