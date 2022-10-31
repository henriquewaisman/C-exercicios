#include <stdio.h>
#define SIZE 25000
int main() {
    int matricula[SIZE], matriculaMenor, i;
    float tempo[SIZE], soma = 0.0, media, tempoMenor;
    printf("10 MILHAS GARORO:\n");
    for (i = 0; i < SIZE; i++) {
        printf("\nEntre com a matrícula: ");
        scanf("%i", &matricula[i]);
        printf("Entre com o tempo: ");
        scanf("%f", &tempo[i]);
        soma += tempo[i];
        media = soma / SIZE;
        
    }
    printf("\nMédia = %.2f\n", media);  
    for(i = 0; i < SIZE; i++){
      if(tempo[i] < media){
          tempoMenor = tempo[i];
          matriculaMenor = matricula[i];
          printf("\nO corredor [%i] ficou abaixo da média com %.1f minutos", matriculaMenor, tempoMenor);
        }
    }
    
    return 0;
}
