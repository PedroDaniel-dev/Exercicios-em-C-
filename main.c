#include <stdio.h>

int main(void) {
    float num1, num2, num3;
    printf("diga-me tr2s numeros quaisquer que farei-te media.");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);
    printf("Seus tres numeros sao: %f, %f, %f\n", num1, num2, num3);
    float media = (num1 + num2 + num3) / 3;
    printf("Sua media pode ser dita como: %.3f", media);
}





























