#include <stdio.h>

int main () {
    int numInt;
    float numFloat;
    char caractere;
    char palavra[40];
    printf("Digite nessa ordem, um numero inteiro, um numero decimal, um caractere, uma palavra\n");
    scanf("%d %f %c %s", &numInt, &numFloat, &caractere, palavra);
    printf("%i\n%f\n%c\n%s\n", numInt, numFloat, caractere, palavra);
    return 0;
}