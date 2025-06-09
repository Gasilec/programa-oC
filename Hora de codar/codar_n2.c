#include <stdio.h>

int main (){
    float temperatura, umidade;
    unsigned int estoque, estoqueminimo = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temperatura);
    printf("Entre com a umidade: \n");
    scanf("%f", &umidade);
    printf("Entre com o estoque: \n");
    scanf("%u", &estoque);

    if(temperatura > 30){
        printf("\ntemperatura está alta\n");
    } else {
        printf("\ntemperatura está dentro dos parâmetros\n");
    }


    if(umidade > 50){
        printf("\numidade elevada\n");
    } else {
        printf("\numidade está dentro dos parâmetros\n");
    }


    if(estoque < estoqueminimo){
        printf("\nestoque abaixo do mínimo\n");
    } else {
        printf("\nestoque normal!\n");
    }


}