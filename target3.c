#include <stdio.h>

int main() {
    int indice = 12;
    int soma = 0;
    int k = 1;


    // loop pra verficar  k menor que indice
    for (k = 1; k < indice; k++) {
        k = k + 1;         
        soma = soma + k;    
        printf("%d\t%d\n",k, soma);
    }

    printf("\nValor final de SOMA: %d\n", soma);

    return 0;
}