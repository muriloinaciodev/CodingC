#include <stdio.h>

int main () {
    printf("Matriz 3x3\n");
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for (int line = 0; line < 3; line++) {
        for (int column = 0; column < 3; column++) {
            printf("%d ", matriz[line][column]);
        }
        printf("\n");
    }
    return 0;
}