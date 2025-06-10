#include <stdio.h>

int main() {
  int opcao;
  float nota1, nota2, media;

  // Exibição do menu
  printf("Menu de Gerenciamento de Estudantes\n");
  printf("1. Calcular Média\n");
  printf("2. Determinar Status\n");
  printf("3. Sair\n");
  printf("Escolha uma opção: \n");
  scanf("%d", &opcao);

  switch (opcao) {
    case 1:
      // Entrada de notas                                           //testas condição se a nota é > 0 e < 10
      printf("Digite a primeira nota: ");                           //if ((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
      scanf("%f", &nota1);                                          //media = nota1 + nota2 / 2;
      printf("Digite a segunda nota: ");                            //printf("A media é: %.2f", &media); 
      scanf("%f", &nota2);                                          //} else {
                                                                    //printf("Entrada com valores errados de nota");
      // Cálculo da média                                           //}
      media = (nota1 + nota2) / 2;                                  // break;
      printf("A média do estudante é: %.2f\n", media);
      break;
    case 2:
      // Determinação do status com base na média
      printf("Digite a média do estudante: ");
      scanf("%f", &media);

      if (media >= 7.0) {
        printf("Status: Aprovado\n");
      } else if (media >= 5.0) {
        printf("Status: Recuperação\n");
      } else {
        printf("Status: Reprovado\n");
      }
      break;
    case 3:
      printf("Saindo...\n");
      break;
    default:
      printf("Opção inválida. Tente novamente.\n");
  }

  return 0;
}
