#include <stdio.h>

int main() {
  int idade; //lembrando que sem a estrutura de scan é so colcoar a idade diretamente aq do lado assim: int idade 17 ou 18 ou 15
  char* resultado; /* da pra fazer sem esse, so colocando a idade > 18 ? maior de idade : menor de idade ai la em baixa 
                    em vez de if faz assim  printf("Resultado: %s\n", resultado); */

  printf("digite a sua idade:\n");
  scanf("%d", &idade);

  resultado = (idade >= 18) ? 1 : 0; // condição ? (se for) verdadeiro (1) :(caso contrario) falso (0)

  if (resultado == 1)
  {
    printf("maior de idade");
  } else {
    printf("Menor de idade");
  }

  return 0;
}