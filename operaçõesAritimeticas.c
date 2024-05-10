#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    num1 = 15;
    num2 = 20;

    /* Soma */
    float soma = num1 + num2;

    /* Subtração */
    float sub = num1 - num2;

    /* Divisão */
    float div = num1 / num2;

    /* Multiplicação */
    float mult = num1 * num2;

    /* Outputs */
    printf("A soma entre %.2f e %.2f é igual a %.2f.\n", num1, num2, soma);
    printf("A subtração entre %.2f e %.2f é igual a %.2f.\n", num1, num2, sub);
    printf("A divisão entre %.2f e %.2f é igual a %.2f.\n", num1, num2, div);
    printf("A multiplicação entre %.2f e %.2f é igual a %.2f.\n", num1, num2, mult);
    return 0;
}