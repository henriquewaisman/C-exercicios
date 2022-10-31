#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 99
#define MIN 1
#define SIZE 100
int main(void) {
  int index, array[SIZE], impar = 0, par = 0;
  srand(time(NULL));
  printf("Array[%i]:\n\n", MAX + 1);
  for (index = 10; index < SIZE; index++) {
    array[index] = rand() % (MAX - MIN + 1) + MIN;
    printf("Array[%i]: %i\n", index - 9, array[index]);
  }
  for (index = 10; index < SIZE; index++) {
    if (array[index] % 2 != 0) {
      impar = impar + 1;
    }
  }
  for (index = 10; index < SIZE; index++) {
    if (array[index] % 2 == 0) {
      par = par + 1;
    }
  }
  printf("Quantidade de números ímpares: %i\n", impar);
  printf("Quantidade de números pares: %i", par);
  return 0;
}
