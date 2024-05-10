#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4, soma, media;
    
    printf("Digite as notas do aluno: \n");
    scanf("%f %f %f %f", &nota1, &nota2, &nota3, &nota4);
    
    soma = nota1+nota2+nota3+nota4;
    media = soma/4;

    printf("A média do aluno foi %.2f\n", media);
    printf("Aluno %s\n", (media >= 6) ? "Aprovado" : "Reprovado");
    return 0;
}