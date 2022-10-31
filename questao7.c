#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX 99
#define MIN 1
#define SIZE 100
int main(void) {
  int index, array[SIZE], A = 0, B = 0, C;
  srand(time(NULL));
  printf("Array[%i]:\n\n", MAX);
  for(index = 10; index < MAX; index++){
    array[index] = rand() % (MAX - MIN + 1) + MIN;
    printf("Array[%i]: %i\n", index - 9, array[index]);     
    
    if(array[index] == 3 && array[index + 1] == 6){
      A++;
    }
    if(array[index] == 6 && array[index + 1] == 3){
      B++;
    }
  }
  C = A + B;
  printf("3 e 6 aparecem respectivamente %i vezes", C);
  return 0;
}
