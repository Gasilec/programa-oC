#include <stdio.h>

int main(){
    int numero;

    printf("digite um número: ");
    scanf("%d", &numero);

    if (numero > 0){
        if (numero % 2 == 0){
            printf("Par\n");
    } else {
        printf ("Ímpar\n");
        } 
}   else if (numero == 0){
        printf ("O número é zero\n");
    }   else {
        printf("O número é negativo");
        }
        
}