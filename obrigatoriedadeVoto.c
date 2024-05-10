#include <stdio.h>

int main () {
    int idade;

    printf("Quantos anos você tem? ");
    scanf("%d", &idade);

    /*
    Proposições:
    - Pessoas com menos de 16 não podem votar
    - Pessoas com 16 anos ou 17 é voto opcional
    - Pessoas com 70 anos ou mais é voto opcional
    - Pessoas com 18 até 70 anos é voto obrigatorio
    */

    if (idade < 16) {
        printf("Não pode votar\n");
    } else if (idade < 18 || idade >= 70) {
        printf("Voto Opcional\n");
    } else {
        printf("Voto Obrigatorio\n");
    }

    return 0;
}
