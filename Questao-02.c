#include <stdio.h>

int main(void) {
    //declaração das variaveis
    int ant = 0, atual = 1, soma = 0, i, num, aux = 0, stop = 0;

    //recebendo dados do usuario
    printf("Digite o número que deseja: ");
    scanf("%d", &num);
    if (num < 0) {
        printf("Numero invalido!\n");
    } else if (num == 0) {
        printf("Sequencia de Fibonacci: ");
        printf("%d %d ", ant, atual); //exibe os dois primeiros valores da sequencia
        aux = 1;
    } else {
        printf("Sequencia de Fibonacci: ");
        printf("%d %d ", ant, atual);
        for (i = 0; stop != 2; i++) { //exibe a sequencia de Fibonacci
            soma = ant + atual;
            ant = atual;
            atual = soma;
            if (atual > num) //condicao de parada caso numero nao tenha na sequencia
                stop = 2;
            if (num == atual) { //condicao de parada para caso tenha na sequencia
                aux = 1;
                stop = 2;
            }
            printf("%d ", atual); //exibe a sequencia
        }
    }
    if (aux == 1) {
        printf("\nO numero pertence a sequencia de Fibonacci!\n");
    } else {
        printf("\nO numero nao pertence a sequencia de Fibonacci!\n");
    }

    return 0;
}

