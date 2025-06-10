#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
   
    return 0;
}

//while (condição) {
    // bloco de código a ser executado repetidamente
//}

#include <stdio.h>
 
int main() {
    int i = 1;
   
    while (i <= 5) {
        printf("%d\n", i);
        // O valor de 'i' nunca é incrementado
    }
   
    return 0;
}

#include <stdio.h>
 
int main() {
    int num;
   
    printf("Digite um número (negativo para sair): \n");
    scanf("%d", &num);
   
    while (num >= 0) {
        printf("Você digitou: %d\n", num);
       
        printf("Digite um número (negativo para sair): \n");
        scanf("%d", &num);
    }
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;