#include <stdio.h>

int main() {
    int numInteiro = 1; /* {-3, -2, -1, 0, 1, 2, 3} (oculpa aproximadamente 2 bytes)*/
    char caractere = 'M'; /* Qualquer caractere (oculpa 1 byte)*/
    float decimaisPequenos = 3.14; /* Até 6 casas decimais (oculpa 4 bytes)*/
    double demaisGrandes = 1.7320508075688; /* Até 15 casas decimais (oculpa 8 bytes)*/
    char texto[29] = "Murilo Inácio Borges Barbosa";

    printf("Para mostrar numeros inteiros usa %%i ou %%d: %d\n", numInteiro);
    printf("Para mostrar um caractere se usa o %%c: %c\n", caractere);
    printf("Para float e double se usa %%f: %.2f, %.13f\n", decimaisPequenos, demaisGrandes);
    printf("Para strings se usa %%s: %s\n", texto);
    return 0;
}