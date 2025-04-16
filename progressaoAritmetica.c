#include <stdio.h>

int main()
{
    int a1, an, n, razao;
    printf("Digite o primeiro termo da progressao aritmetica.\n");
    scanf("%d", &a1);
    
    printf("Digite a quatidade de termos da PA.\n");
    scanf("%d", &n);
    
    printf("Digite a razao da PA");
    scanf("%d", &razao);
    
    an = a1 + ((n - 1) * razao);
    
    printf("seu numero eh: %d\n", an);

    return 0;
}
