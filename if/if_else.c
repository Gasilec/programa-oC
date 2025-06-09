if (condicao) {
  // bloco de código a ser executado se a condição for verdadeira
} else {
  // bloco de código a ser executado se a condição for falsa
}

#include <stdio.h>

int main() {
  int numero = 10;

  if (numero % 2 == 0) {
    printf("O número é par\n");
  } else {
    printf("O número é ímpar\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  float temperatura = 25.0;

  if (temperatura > 30.0) {
    printf("Está calor\n");
  } else {
    printf("Não está calor\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int nota = 65;

  if (nota >= 60) {
    printf("Você passou!\n");
  } else {
    printf("Você não passou.\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int idade = 16;

  if (idade >= 18) {
    printf("Você é maior de idade\n");
  } else {
    printf("Você é menor de idade\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  float preco = 120.0;

  if (preco > 100.0) {
    printf("O produto é caro\n");
  } else {
    printf("O produto é barato\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int estoque = 3;

  if (estoque < 5) {
    printf("Estoque baixo\n");
  } else {
    printf("Estoque adequado\n");
  }

  return 0;
}
