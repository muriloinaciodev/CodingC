#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* 
    Projeto Compilador
    A ideia é agilizar o processo de compilação e execução.
    
    Para instalar siga os passos:
      1. Compile este programa com: gcc -o run run.c
      2. Agora utilize: mv run.c /usr/local/bin/
    
    Para executar utilize: run script.c
    e o programa sera compilado e executado,
    ao final ele remove o arquivo a.out.
*/


int main (int argc, char *argv[]) {
    int error;
    if (argc != 2) return 0; // Caso não seja passado nenhum arquivo

    char commComp[50]; 
    strcat(commComp, "gcc ");
    strcat(commComp, argv[1]);

    error = system(commComp);
    if (error != 0) return 0;
     
    system("./a.out");
    system("rm ./a.out");
    return 0;
}