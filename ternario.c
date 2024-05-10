#include <stdio.h>

int main () {
    int num1, num2;

    printf("Digite dois numeros para fazer verificações logicas sobre eles\n");
    scanf("%d %d", &num1, &num2);

    printf("%d == %d é ", num1, num2);
    printf("%s\n", (num1 == num2)? "Verdadeiro" : "Falso");

    printf("%d != %d é ", num1, num2);
    printf("%s\n", (num1 != num2)? "Verdadeiro" : "Falso");
 
    printf("%d > %d é ", num1, num2);
    printf("%s\n", (num1 > num2)? "Verdadeiro" : "Falso");
 
    printf("%d < %d é ", num1, num2);
    printf("%s\n", (num1 < num2)? "Verdadeiro" : "Falso");
 
    printf("%d >= %d é ", num1, num2);
    printf("%s\n", (num1 >= num2)? "Verdadeiro" : "Falso");
 
    printf("%d <= %d é ", num1, num2);
    printf("%s\n", (num1 <= num2)? "Verdadeiro" : "Falso");
 
    return 0;
}