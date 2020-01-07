#include <stdio.h>

int expoente();

int main() {
  int entrada;
  int exp;
  printf("Digite o valor e o expoente: ");
  scanf("%d %d", &entrada, &exp);

  int saida = expoente(entrada,exp);

  printf("%d", saida);

  return 0;
}

int expoente (int k, int n) {
  if (n == 0)
    return 1;
  else
    return k * expoente(k, (n - 1));
}
