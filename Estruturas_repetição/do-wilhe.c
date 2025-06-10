#include <stdio.h>
 
int main() {
    int i = 1;
   
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
   
    return 0;
}

//do {
    // bloco de código a ser executado
//} while (condição);

//uma execução garantida

/*#include <stdio.h>
 
int main() {
    int num;
   
    do {
        printf("Digite um número (negativo para sair): ");
        scanf("%d", &num);
       
        if (num >= 0) {
            printf("Você digitou: %d\n", num);
        }
    } while (num >= 0);
   
    printf("Número negativo detectado. Saindo...\n");
   
    return 0;*/

/*#include <stdio.h>
 
int main() {
    int option;
   
    do {
        printf("Menu:\n");
        printf("1. Opção 1\n");
        printf("2. Opção 2\n");
        printf("3. Sair\n");
        printf("Escolha uma opção: \n");
        scanf("%d", &option);
       
        switch(option) {
            case 1:
                printf("Você escolheu a opção 1\n");
                break;
            case 2:
                printf("Você escolheu a opção 2\n");
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida!\n");
        }
    } while (option != 3);
   
    return 0;
}*/