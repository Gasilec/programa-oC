#include <stdio.h>

int main() {
  int idade;
  char* resultado;

  printf("digite a sua idade:\n");
  scanf("%d", &idade);

  resultado = (idade >= 18) ? "Maior de idade" : "Menor de idade";

  printf("Resultado: %s\n", resultado);

  return 0;
}