#include <stdio.h>

int main(int argc, char** argv) {
    //declaracao das variaveis
    int indice = 13, soma = 0, k = 0;
    
    //for para contar de 0 ate 12
    for (int i = 0; i < indice; i++) {
        ++k;        //incrementa 1 ao valor antes de passar para a soma
        soma += k;  //soma = soma + k
    }
    //exibe o resultado
    printf("Resultado da soma = %d\n", soma);
    
    return (EXIT_SUCCESS);
}

