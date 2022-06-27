#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i = 0;                          //contador do while
    char *vet;                          //ponteiro para um vetor
    vet = malloc(sizeof (char));        //aloca memoria para um vetor do tipo char

    printf("Digite um nome: ");       //recebe a palavra do usuario
    scanf("%s", vet);

    while (vet[i] != '\0') {            //imprime a palavra digitada pelo usuario
        printf("%c", vet[i]);
        i++;
    }
    
    --i;                                //decrementa 1 do tamanho final do vetor
    printf("\n");                       //pula uma linha
    
    while (vet[i] > 0) {                //imprime o vetor inversamente começando do tamanho final do vetor até a pos 0
        printf("%c", vet[i]);
        if(i-1 == 0){                   
            printf("%c", vet[i-1]);
            --i;
        }
        i--;
    }

    free(vet);                          //libera a memoria que foi alocada para o meu vetor
    
    return 0;
}

