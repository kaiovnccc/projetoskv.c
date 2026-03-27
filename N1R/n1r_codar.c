#include <stdio.h>

int main(){

    float temperatura, umidade;
    unsigned int estoque, estoqueMinimo = 1000;

    printf("Digite a temperatura:\n");
    scanf("%f", &temperatura);

    printf("Digite a umidade:\n");
    scanf("%f", &umidade);

    printf("Digite o estoque:\n");
    scanf("%u", &estoque);

    if (temperatura > 30){
        printf("A temperatura está alta.\n");
    } else {
        printf("A temperatura está normal.\n");
    }

    if (umidade > 60){
        printf("A umidade está elevada.\n");
    } else {
        printf("A umidade está controlada.\n");
    }

    if (estoque < estoqueMinimo){
        printf("O estoque está baixo.\n");
    } else {
        printf("O estoque está normal.\n");
    }

}