#include <stdio.h>

int main(){
    float altura, largura, comprimento;

    printf("Digite a altura do objeto:\n");
    scanf("%f", &altura);

    printf("Digite a largura do objeto:\n");
    scanf("%f", &largura);

    printf("Digite o comprimento do objeto:\n");
    scanf("%u", &comprimento);

    if (altura > 75){
        printf("A mesa é bem alta.\n");
    }   else {
            printf("A mesa tem uma altura padrão.\n");
    }

    if (largura > 70){
        printf("A mesa é bem larga.\n");
    }   else {
            printf("A mesa apresenta uma largura normal.\n");
    }

    if (comprimento > 140){
        printf("A mesa é bem comprida.\n");
    }   else {
            printf("A mesa é composta num comprimento adequado.\n");
    }
}