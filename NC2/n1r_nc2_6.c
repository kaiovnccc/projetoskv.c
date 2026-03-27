#include <stdio.h>

int main(){

    int numero = 3, resultado;

    resultado = numero % 2;

    printf("A variavel resultado é %d.\n", resultado);

    if (resultado == 0) {
        printf("O número é par.\n");
    }
}