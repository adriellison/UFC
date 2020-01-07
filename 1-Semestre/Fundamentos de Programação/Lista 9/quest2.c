#include <stdio.h>

int fatorialDuplo();

int main() {
  int entrada;
  printf("Digite o inteiro: ");
  scanf("%d", &entrada);

  int saida = fatorialDuplo(entrada);

  printf("%d", saida);

  return 0;
}

int fatorialDuplo(int n) {
  if (n <= 2)
    return n;
  else
    return n * fatorialDuplo(n - 2);
}
