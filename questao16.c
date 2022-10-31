#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char txt[] = "1 No princípio criou Deus os céus e a terra. 2 A terra era sem forma e vazia; e havia trevas sobre a face do abismo, mas o Espírito de Deus pairava sobre a face das águas. 3 Disse Deus: haja luz. E houve luz. 4 Viu Deus que a luz era boa; e fez separação entre a luz e as trevas. 5 E Deus chamou à luz dia, e às trevas noite. E foi a tarde e a manhã, o dia primeiro. 6 E disse Deus: haja um firmamento no meio das águas, e haja separação entre águas e águas.7 Fez, pois, Deus o firmamento, e separou as águas que estavam debaixo do firmamento das que estavam por cima do firmamento. E assim foi. 8 Chamou Deus ao firmamento céu. E foi a tarde e a manhã, o dia segundo. 9 E disse Deus: Ajuntem-se num só lugar as águas que estão debaixo do céu, e apareça o elemento seco. E assim foi. 10 Chamou Deus ao elemento seco terra, e ao ajuntamento das águas mares. E viu Deus que isso era bom. 11 E disse Deus: Produza a terra relva, ervas que dêem semente, e árvores frutíferas que, segundo as suas espécies, dêem fruto que tenha em si a sua semente, sobre a terra. E assim foi. 12 A terra, pois, produziu relva, ervas que davam semente segundo as suas espécies, e árvores que davam fruto que tinha em si a sua semente, segundo as suas espécies. E viu Deus que isso era bom. 13 E foi a tarde e a manhã, o dia terceiro. 14 E disse Deus: haja luminares no firmamento do céu, para fazerem separação entre o dia e a noite; sejam eles para sinais e para estações, e para dias e anos; 15 e sirvam de luminares no firmamento do céu, para alumiar a terra. E assim foi. 16 Deus, pois, fez os dois grandes luminares: o luminar maior para governar o dia, e o luminar menor para governar a noite; fez também as estrelas. 17 E Deus os pôs no firmamento do céu para alumiar a terra, 18 para governar o dia e a noite, e para fazer separação entre a luz e as trevas. E viu Deus que isso era bom. 19 E foi a tarde e a manhã, o dia quarto. 20 E disse Deus: Produzam as águas cardumes de seres viventes; e voem as aves acima da terra no firmamento do céu. 21 Criou, pois, Deus os monstros marinhos, e todos os seres viventes que se arrastavam, os quais as águas produziram abundantemente segundo as suas espécies; e toda ave que voa, segundo a sua espécie. E viu Deus que isso era bom. 22 Então Deus os abençoou, dizendo: Frutificai e multiplicai-vos, e enchei as águas dos mares; e multipliquem-se s aves sobre a terra. 23 E foi a tarde e a manhã, o dia quinto.24 E disse Deus: Produza a terra seres viventes segundo as suas espécies: animais domésticos, répteis, e animais selvagens segundo as suas espécies. E assim foi. 25 Deus, pois, fez os animais selvagens segundo as suas espécies, e os animais domésticos segundo as suas espécies, e todos os répteis da terra segundo as suas espécies. E viu Deus que isso era bom. 26 E disse Deus: Façamos o homem à nossa imagem, conforme a nossa semelhança; domine ele sobre os peixes do mar, sobre as aves do céu, sobre os animais domésticos, e sobre toda a terra, e sobre todo réptil que se arrasta sobre a terra. 27 Criou, pois, Deus o homem à sua imagem; à imagem de Deus o criou; homem e mulher os criou. 28 Então Deus os abençoou e lhes disse: Frutificai e multiplicai-vos; enchei a terra e sujeitai-a; dominai sobre os peixes do mar, sobre as aves do céu e sobre todos os animais que se arrastam sobre a terra. 29 Disse-lhes mais: Eis que vos tenho dado todas as ervas que produzem semente, as quais se acham sobre a face de toda a terra, bem como todas as árvores em que há fruto que dê semente; ser-vos-ão para mantimento. 30 E a todos os animais da terra, a todas as aves do céu e a todo ser vivente que se arrasta sobre a terra, tenho dado todas as ervas verdes como mantimento. E assim foi. 31 E viu Deus tudo quanto fizera, e eis que era muito bom. E foi a tarde e a manhã, o dia sexto. Assim foram acabados os céus e a terra, com todo o seu exército.";

  int stlength = strlen(txt);
  int j = 0, i = 0;
  char palavra_sendo_processada[100] = "";
  int greater = 0;
  char longest_word[100] = "";
  int caractere_minusculo = 0;
  int tamanho_palavra = 0;

  for(i = 0; i < stlength; i++){
    caractere_minusculo = tolower(txt[i]);
    if(caractere_minusculo >= 'a' && caractere_minusculo <= 'z'){
      palavra_sendo_processada[j] = txt[i];
      j++;
      tamanho_palavra = strlen(palavra_sendo_processada);
      if (tamanho_palavra > greater){
        greater = tamanho_palavra;
        strcpy(longest_word, palavra_sendo_processada);
      }
    } else {
      j = 0;
    }
  }
  printf("A maior palavra é: %s (%i letras)", longest_word, greater);

  return 0;
}
