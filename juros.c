#include <stdio.h>
#include <math.h>

int main()
{
    float valorInicial, taxa, valorFinal, prazo;
    scanf("%f", &valorInicial);
    scanf("%f", &taxa);
    scanf("%f", &prazo);
    taxa = taxa / 100;
    valorFinal = valorInicial * pow(1 + taxa, prazo);
    printf("%.2f", valorFinal);

    return 0;
}
