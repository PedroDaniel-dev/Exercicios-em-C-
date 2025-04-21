#include <stdio.h>
#include <math.h>

int main() {
    int cateto1, cateto2, hipotenusa, triangulo;
    printf("Digite os dois catetos e a hipotenusa.");
    scanf("%d %d %d", &cateto1, &cateto2, &hipotenusa);
    
    if (pow(cateto1, 2) + pow(cateto2, 2) == pow(hipotenusa, 2)) {
        printf("Triangulo real.");
    }
    
    else {
        printf("Nao Triangulo.");
    }
    
}
