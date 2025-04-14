#include <stdio.h>

int main() {
    float comprimento, largura, preco1, preco2, perimetro, area, custoDaCerca, custoDoMaterial;
    
    printf("Insira o comprimento do terreno: ");
    scanf("%f", &comprimento);
    
    printf("Insira a largura do terreno: ");
    scanf("%f", &largura);
    
    printf("Insira o preco do metro quadrado de grama: ");
    scanf("%f", &preco1);
    
    printf("Insira o preco do metro quadrado de cerca de arame farpado: ");
    scanf("%f", &preco2);
    
    perimetro = (comprimento * 2) + (largura * 2);
    area = comprimento * largura;
    custoDaCerca = preco2 * perimetro;
    custoDoMaterial = preco1 * area;
    
    printf("Perimetro: %.2f metros\n", perimetro);
    printf("Area total a ser coberta: %.2f metros quadrados\n", area);
    printf("Custo total da grama: %.2f reais\n", custoDoMaterial);
    printf("Custo total do arame farpado: %.2f reais\n", custoDaCerca);
}
