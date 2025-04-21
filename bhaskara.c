#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, x, c, delta; 
    float raiz1, raiz2;
    
    printf("Digite a b c.\n");
    scanf("%d %d %d", &a, &b, &c);
    
    delta = (float)(b * b) - 4 * a * c;
    printf("Delta: %d\n", delta);
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);

    if(delta <= 0) {
        printf("A equaçao nao possui raiz real.\n");
    }
    else if (a == 0) {
        printf("Sua funcao nao eh do segundo grau.\n");
    }
    else {
        printf("Raiz': %2.f\nRaiz'': %2.f\n", raiz1, raiz2);
    }
    
}
