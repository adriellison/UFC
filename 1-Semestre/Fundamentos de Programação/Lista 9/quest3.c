#include <stdio.h>

int palindromo();

int main() {
  char palavra[100];
  printf("Digite uma palavra: ");
  scanf("%s", &palavra);

  int saida = palindromo(strlen(palavra), palavra, 0);

  if (saida == 1)
    printf("Eh palindromo");
  else
    printf("Nao eh palindromo");

  return 0;
}

int palindromo (int n, char str[], int i) {
  if (i > (n / 2))
    return 1;
  else if (str[i] == str[n - i - 1])
    return 1 * palindromo(n, str, i + 1);
  else
    return 0;
}
