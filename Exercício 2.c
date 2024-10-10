#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, count = 0;
    
    // Solicitar ao usuário que insira uma string
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    // Percorrer a string e verificar a presença de 'a' ou 'A'
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'A') {
            count++;
        }
    }

    // Exibir o resultado
    if (count > 0) {
        printf("A letra 'a' ou 'A' ocorre %d vez(es) na string.\n", count);
    } else {
        printf("A letra 'a' ou 'A' não foi encontrada na string.\n");
    }

    return 0;
}
