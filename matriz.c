#include <stdio.h>
#define LIN 4
#define COL 4


int main()
{
    int matriz[LIN][COL];
    for (int lin = 0; lin < LIN; lin++) {
        for (int col = 0; col < COL; col++ ) {
            scanf("%d", &matriz[lin][col]);
        }
    }
    
    for (int lin = 0; lin < LIN; lin++) {
        for (int col = 0; col < COL; col++ ) {
            printf("[%d] ", matriz[lin][col]);
        }
        printf("\n");
    }
    return 0;
}
