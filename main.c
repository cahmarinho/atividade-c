#include <stdio.h>

int main(void) {
  float nota1, nota2, nota3 = 0;

  float media = 0;
  printf("\n informe uma nota1: ");
  scanf("%f", &nota1);
  printf("\ninforme uma nota2: ");
  scanf("%f", &nota2);
  media = (nota1 + nota2) / 2;
  printf("\nA média foi: %.2f", media);
  if (media >= 7) {
    printf("\nAprovado");
  } else {
    if (media >= 5) {
      ;
      printf("\nrecuperação");
    } else {
      printf("\nreprovado");
    }
  }
  return 0;
}
