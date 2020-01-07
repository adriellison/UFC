#include <stdio.h>

int superFatorial();
int fatorial();

int main() {
  int entrada;
  printf("Digite o valor: ");
  scanf("%d", &entrada);

  int saida = superFatorial(entrada);

  printf("%d", saida);

  return 0;
}

int superFatorial(int n) {
  if (n == 1)
    return 1;
  else
    return fatorial(n) * superFatorial(n - 1);
}

int fatorial(int n) {
  if (n == 1)
    return 1;
  else
    return n * fatorial(n - 1);
}
