#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf("Digite seu peso em kg:\n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros:\n");
    scanf("%f", &altura);
    printf("Seu IMC eh: %f", peso / (altura * altura));
}
  
