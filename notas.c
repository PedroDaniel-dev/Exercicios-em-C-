#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, peso1, peso2, peso3, notaGeral;
    printf("Insira a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Insira o peso: ");
    scanf("%f", &peso1);
    
    printf("Insira a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Insira o peso: ");
    scanf("%f", &peso2);
    
    printf("Insira a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Insira o peso: ");
    scanf("%f", &peso3);
    
    notaGeral = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3)) / (peso1 + peso2 + peso3);
    printf("A media geral do aluno eh de: %2.f", notaGeral);

}
