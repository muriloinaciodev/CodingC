#include <stdio.h>

/*
== Igual
!= Diferente
>= Maior Igual
<= Menor Igual
> Maior
< Menor

&& E
|| OU
! NÃO
*/

int main () {
    int num1, num2;

    printf("Digite dois numeros para fazer verificações logicas sobre eles\n");
    scanf("%d %d", &num1, &num2);

    printf("%d == %d é ", num1, num2);
    if (num1 == num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    printf("%d != %d é ", num1, num2);
    if (num1 != num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    printf("%d > %d é ", num1, num2);
    if (num1 > num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    printf("%d < %d é ", num1, num2);
    if (num1 < num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    printf("%d >= %d é ", num1, num2);
    if (num1 >= num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    printf("%d <= %d é ", num1, num2);
    if (num1 <= num2) printf("Verdadeiro\n");
    else printf("Falso\n");

    return 0;
}