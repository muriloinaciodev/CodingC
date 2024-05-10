#include <stdio.h>
#include <stdlib.h>

int main () {
    int op, n1, n2;
    printf("Selecione uma opção:\n\t1-Hello World\n\t2-Somar\n\t3-Limpar tela\n: ");
    scanf("%d", &op);

    switch (op) {
        case 1:
            printf("Hello World\n");
            break;

        case 2:
            printf("Digite os numeros: ");
            scanf("%d %d", &n1, &n2);
            printf("A soma é %d", n1+n2);
            break;

        case 3:
            system("clear");
            break;
    }
    return 0;
}