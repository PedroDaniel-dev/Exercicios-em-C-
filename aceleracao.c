#include <stdio.h>
#include <math.h>

int main()
{
    float aceleracao, tempo;
    printf("Em uma disputa, um carro parte do repouso e percorre uma pista de 1 km em um tempo t. \nInsira o tempo em segundos:\n");
    scanf("%f", &tempo);
    aceleracao = (2 * 1000)/ pow(tempo, 2);
    printf("Aceleracao = %.4f", aceleracao);
    
    
}
