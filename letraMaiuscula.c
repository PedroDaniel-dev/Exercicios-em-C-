#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STRING 10

int main () {
    char linha[MAX_STRING];
    fgets(linha, MAX_STRING, stdin);
    printf("%s", linha);
    
    int count_upper = 0;
    for(int pos = 0; pos < strlen(linha); pos++) {
        if (isupper(linha[pos]) > 0 )
        count_upper += 1;
    }
    
    printf("Resposta: %d", count_upper);
}
    
