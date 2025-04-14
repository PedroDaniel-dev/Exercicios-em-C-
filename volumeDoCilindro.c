#include <stdio.h>
#include <math.h>
int main()
{
    float raio, altura, pi, volume;
    pi = 3,1415;
    printf("Um cilindro precisa ser enchido de água para um espetáculo de mágica.\nInsira o raio do cilindro: ");
    scanf("%f", &raio);
    printf("Insira a altura do cilindro: ");
    scanf("%f", &altura);
    volume = (pi * pow(raio, 2)) * altura;
    printf("O magico precisara de %.2f metros cubicos de agua para o espetaculo.", volume);

}
