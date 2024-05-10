#include <stdio.h>

int main () {
    int a[] = {1,2,3,4,5};
    int b[5];
    for (int i = 0; i < 5; i++) {
        b[i] = a[i]*2;
    }
    printf("O array \"a\" contem { ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    printf("} \n");
    printf("O array \"b\" contem { ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", b[i]);
    }
    printf("} \n");

    return 0;
}