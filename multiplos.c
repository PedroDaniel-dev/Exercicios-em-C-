#include <stdio.h>

int main()
{
    int n, i, j;
    scanf("%d %d %d", &n, &i, &j);
    for(int multiplo = 2; multiplo <=10; multiplo++ ) {
        printf("  %d %d\n", i * multiplo, j * multiplo);
    }

    return 0;
}
