#include <stdio.h>

int main(){

    int a = -8, b = -10;

    if(a > 2 || b > 6)
    {
        printf("Pelo menos um dos números é positivo.\n");
    } else {
        printf("Os dois números são negativos.\n");
    }
}