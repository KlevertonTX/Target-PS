#include <stdio.h>

int main() {
    int indice = 12, soma = 0, K = 1;

    // loop de cada resultado de interação de K
    for (K = 1; K < indice; K++) {\
        // soma o próximo valor de K
        soma = soma + (K + 1);
        // mostra o numero de interacões
        printf("%d\t \t%d\n", K, soma);
      
    }

    printf("\nValor final de SOMA: %d\n", soma);

    return 0;
}
