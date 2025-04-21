#include <stdio.h>

int main()
{
    float peso, altura, imc;
    printf("Digite seu peso em kg:\n");
    scanf("%f", &peso);
    printf("Digite sua altura em metros:\n");
    scanf("%f", &altura);
    imc = peso / (altura * altura);
    printf("Seu IMC eh: %1.f\n", imc);

    if (imc <= 20.0) {
        printf("Abaixo do peso.");
    }
    
    else if ( imc > 20.0 && imc <= 25.0 ) {
        printf("Normal.");
    }
    
    else if (25 <imc && imc <= 30){
        printf("Excesso de peso.");
    }
    else if (30 < imc && imc <= 35){
        printf("Obesidade.");
    }
    else if (imc > 35) {
        printf("Obesidade morbida.");
    }
}
  
