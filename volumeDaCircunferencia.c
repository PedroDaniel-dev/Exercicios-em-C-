#include <stdio.h>
#include <math.h>

int main() {
    int raio;
    float volume;
    float pi = 3.141592;
    printf("Insira o raio da esfera: ");
    scanf("%d", &raio);
    volume = ((4 * pi) / 3) * pow(raio,3);
    printf("O volume da circunferencia eh: %f unidades cubicas", volume);
}
