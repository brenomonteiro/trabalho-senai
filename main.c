#include <stdio.h>
#include <stdlib.h>

void verificarAdulto(int anoAtual, int anoNacimento) {

  int idade = anoAtual - anoNacimento;

  if (idade >= 19 && idade <= 50) {
    printf("A pessoa e adulta.\n");
  } else {
   printf("A pessoa não e adulta.\n");
  }
}

int main()
{
    return 0;
}
