#include <stdio.h>
#include <math.h>

int main() {
    int lado1, lado2, lado3;
    printf("Digite os tres lados do triangulo.");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado1 + lado3 > lado2) {
        printf("Triangulo real ");
                if (lado1 == lado2 && lado2 == lado3) {
                    printf("equilatero");
                }else if ((lado1 == lado2 && lado1 != lado3) ||
                        (lado1 == lado3 && lado1 != lado2) ||
                        (lado2 == lado3 && lado2 !=lado1)) {
                        printf("isoceles");
                }else {
                    printf("escaleno");
                    }
    }
    else {
        printf("Nao Triangulo.");
    }
}
