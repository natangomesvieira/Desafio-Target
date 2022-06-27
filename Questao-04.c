#include <stdio.h>

int main(void) {
    //armazenando os dados nas variaveis
    float SP = 67836.43, RJ = 36678.66, MG = 29229.88, ES = 27165.48, outros = 19849.53, total;
    //calculando o total (100%)
    total = SP + RJ + MG + ES + outros;
    
    //exibindo os resultados em porcentagem de cada Estado
    printf("SP teve representação percentual de %.2f %%\n", 100 * (SP/total));
    printf("RJ teve representação percentual de %.2f %%\n", 100 * (RJ/total));
    printf("MG teve representação percentual de %.2f %%\n", 100 * (MG/total));
    printf("ES teve representação percentual de %.2f %%\n", 100 * (ES/total));
    printf("Outros estados teve representação percentual de %.2f %%\n", 100 * (outros/total));
    
    return 0;
}

