#include <stdio.h>

int main () {
    //Criando novo struct
    struct pessoa {
        char nome[50];
        int idade;
        float altura;
    };
    //renomenando struct pessoa para pessoa;
    typedef struct pessoa pessoa;

    //declarando variaveis e arrays do tipo pessoa
    pessoa p1 = {"Murilo Inácio", 18, 1.74};
    pessoa pessoas[3] = {
        p1,
        {"Maria Eduarda", 21, 1.70},
        {"Paulo Ungaratti", 18, 1.78}
    };

    for (int i = 0; i < 3; i++) {
        printf("%d° Cadastro:\n", i+1);
        printf("\tNome: %s\n", pessoas[i].nome);
        printf("\tIdade: %d\n", pessoas[i].idade);
        printf("\tAltura: %.2f\n", pessoas[i].altura);
    }

    return 0;
}
