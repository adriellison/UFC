#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
  setlocale(LC_ALL, "Portuguese");
  printf("Utilizando caracteres e acentuação da língua portuguesa!\n\n");

  //system("cls");
  system("pause");
  printf("Melhor solucao, nao usar carateres especiais pra manter a sanidade :)");
  return 0;
}
