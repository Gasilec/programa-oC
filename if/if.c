if (condicao) {
  // bloco de código a ser executado
}

#include <stdio.h>

int main() {
  int numero1 = 8;
  int numero2 = 5;

  if (numero1 > numero2) {
    printf("numero1 é maior que numero2\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int idade = 20;

  if (idade >= 18) {
    printf("Você é maior de idade\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  float temperatura = 32.0;

  if (temperatura > 30.0) {
    printf("Está calor\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int nota = 75;

  if (nota >= 60) {
    printf("Você passou!\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int idade1 = 25;
  int idade2 = 30;

  if (idade1 > idade2) {
    printf("Pessoa 1 é mais velha que Pessoa 2\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int numero = 4;

  if (numero % 2 == 0) // esses % 2 siginifica o mesmo q multiplos de 2, então tipo o 4, ia fazer 2*2 e ia ter, e ai ia aparecer 0 confirmando q é par, se fosse 5 ia ser 2*2 = 4, sobra 1, então seria um e n ia aparecer o print é par
  {
    printf("O número é par\n");
  }

  return 0;
}

#include <stdio.h>

int main() {
  int estoque = 3;

  if (estoque < 5) {
    printf("Estoque baixo\n");
  }

  return 0;
}