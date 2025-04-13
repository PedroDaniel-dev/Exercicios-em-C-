#include <stdio.h>

int main()
{
    int lado, cubo;
    printf("Digite o lado do cubo\n");
    scanf("%d", &lado);
    cubo = lado * lado * lado;
    printf("O seu cubo tem um volume de: %d unidade de medida ao cubo.", cubo);
}
