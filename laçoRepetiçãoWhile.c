#include <stdio.h>

int main () {
    int num = 0;
    int executar = 1;
    char resp;

    printf("Listando numeros pares\n");
    
    while (executar) {
        num = num + 2;
        printf("Numero par: %d\n", num);
        printf("Deseja continuar?");
        scanf("%c", &resp);
        getchar();
        executar = (resp == 's');
    }
    return 0;
}