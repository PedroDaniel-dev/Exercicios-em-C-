#include <stdio.h>

int main()
{
    float km, milhas;
    printf("Insira a distancia em km: ");
    scanf("%f", &km);
    milhas = km * 0.62;
    printf("Sua velocidade em milhas eh de: %.2f", milhas);
    
}
