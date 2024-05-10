#include <stdio.h>

int main () {
    float num1, num2;
    printf("Digite dois valores: \n");
    scanf("%f %f", &num1, &num2);

    printf("A soma é %.2f\n", num1+num2);
    printf("A subtração é %.2f\n", num1-num2);
    printf("A divisão é %.2f\n", num1/num2);
    printf("A multiplicação é %.2f\n", num1*num2);
    return 0;
}