#include <stdio.h>
#define SIZE 4
#define META 88.7
int main() {
  int matricula[SIZE], matriculaMenor, i;
  float tempo[SIZE], tempoMenor;
  printf("10 MILHAS GARORO:\n");
  for (i = 0; i < SIZE; i++) {
    printf("\nEntre com a matrícula: ");
    scanf("%i", &matricula[i]);
    printf("Entre com o tempo: ");
    scanf("%f", &tempo[i]);
  }
  for (i = 0; i < SIZE; i++) {
    if (tempo[i] < META) {
      tempoMenor = tempo[i];
      matriculaMenor = matricula[i];
      printf("\nO corredor [%i] ficou abaixo da média com %.1f minutos", matriculaMenor, tempoMenor);
    }
  }

  return 0;
}
