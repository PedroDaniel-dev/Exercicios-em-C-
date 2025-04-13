#include <stdio.h>

int main() {
    int celsius, fahrenheit;
    printf("Insira a temperatura em Celsius: ");
    scanf("%d", &celsius);
    printf("A temperatura em Fahrenheit eh: %d", (celsius * 9 / 5) + 32);
}
