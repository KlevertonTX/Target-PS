#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;

    printf("Informe uma string: ");
    fgets(str, sizeof(str), stdin);

    // verifica a presença de 'a' ou 'A' na string
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    // verifica se 'a' ou 'A' foi encontrado e informa quantas vezes foi encontrado
    if (count > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) aparece %d vez(es).\n", count);
    } else {
        printf("A letra 'a' (maiúscula ou minúscula) não foi encontrada.\n");
    }

    return 0;
}