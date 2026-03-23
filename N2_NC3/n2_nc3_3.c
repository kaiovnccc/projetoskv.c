#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Póa-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--
    */

    int numero1 = 1, resultado;

     printf("Antes incremento: %d\n", numero1);
     //numero1 = numero1 +1;
     //numero1 += 1;
     //Pós incremento:
     //resultado = numero1;
     //numero1++;
    resultado = numero1++; 
    //printf("Após incremento: %d\n", numero1);
    printf("Após pós-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

         resultado = ++numero1; 
        printf("Após pré-incremento - Número 1: %d - Resultado: %d\n", numero1, resultado);
    
        //numero1 = numero1 - 1;
        //numero -= 1;
    //    numero1--;
    //    printf ("Após decremento: %d\n", numero1);
        resultado = numero1--;
        printf("Após pós-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);
        
         resultado = --numero1;
        printf("Após pré-decremento - Número 1: %d - Resultado: %d\n", numero1, resultado);

    numero1--; 
    printf("Após decremento: %d\n", numero1);

}