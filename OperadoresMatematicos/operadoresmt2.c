#include <stdio.h>

int main (){

    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Incremento --a
    Pós-Incremento a--
    */

    int numero1 = 1, resultado;

     printf("Antes do incremento: %d\n", numero1);
    // numero1 = numero1 + 1;
    //numero1 += 1;
    //Pos incremento;
        //resultado = numero1;
        //numero++;
    resultado = numero1++;
    //print("Após incremento: %d\n", numero1);
    printf("Após Pós-incremento - Numero 1: %d\ - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Após Pré-incremento - Numero 1: %d\ - Resultado: %d\n", numero1, resultado);
    
    //numero1 = numero1 - 1;
    //numero1 -= 1;
    numero1--;
    printf("Após decremento: %d\n", numero1);

    //numero1 = numero1 - 1;
    //numero1 -= 1;
    //numero1--;
    //printf("apos decremento: %d\n", numero1);
    resultado = numero1--;
    printf("Após Pos-decremento - Numero 1: %d\ - Resultado: %d\n", numero1, resultado);
    
    resultado = --numero1;
    printf("Após Pré-decremento - Numero 1: %d\ - Resultado: %d\n", numero1, resultado);    

}