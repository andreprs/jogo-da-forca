#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

// Variáveis globais

char fase_1[5][6] = {"ciclo", "nobre", "exato", "ouvir", "lenda"};
char fase_2[5][8] = {"empatia", "sucesso", "arcaico", "exceder", "saudade"};
char fase_3[5][10] = {"qualidade", "tranquilo", "empecilho", "constante", "persuadir"};
char fase_4[5][12] = {"diversidade", "excepcional", "subordinado", "indiferente", "perspectiva"};
char fase_5[5][14] = {"perpendicular", "credibilidade", "solidariedade", "transcendente", "reciprocidade"};

char dica_fase_1[5][100] = {"Série de fatos periódicos.", "Um título da sociedade feudal.", "Algo com precisão.", "Um dos cinco sentidos.", "História antiga."};
char dica_fase_2[5][100] = {"Se colocar no lugar do outro.", "Vontade de todos.", "Algo antigo.", "Passar do limite.", "Alguns dizem que essa palavra só existe na língua portuguesa."};
char dica_fase_3[5][100] = {"Grau positivo ou negativo de avaliação", "Tá ....., ta favorável.", "Algo que bloqueia o caminho", "Algo não variável.", "Ato convencer negativamente."};
char dica_fase_4[5][100] = {"Sinônimo de variedade.", "Algo que não é comum.", "Algo que está abaixo.", "Algo que não importa.", "Ponto de vista."};
char dica_fase_5[5][100] = {"Forma ângulo de 90°", "Do que se pode confiar.", "Ato de ajudar o próximo.", "Algo além.", "Compartilhar do mesmo sentimento"};

void quebra_linha(){
    printf("\n\n---------===---------===---------===---------");
}

// Função apenas para ter uma quebra de linha, para todo o conteúdo ficar separado;

int sortear_numero(){
    int sorteado;

    srand(time(NULL));
    sorteado = rand() % 5;

    return sorteado;
}


// Essa função sorteia um número de 0 a 4, isso será usado para que a cada execução do programa uma palavra (das 5 presentes em cada fase) seja escolhida aleatóriamente;

int fase1(){
  int i, j, c = 3, palavra, dica = 0, verificar;
  char caractere, temp[] = "*****";

  palavra = sortear_numero();

  printf("\nTente adivinhar a palavra: \n");

  while (c != 0){
    j = 0;
    printf("\n\n[%s] \nNúmero de tentativas restantes: %d", temp, c);
    verificar = strcmp(temp, fase_1[palavra]);
    if (verificar == 0){
        quebra_linha();
        printf("\nPARABÉNS! VOCÊ TERMINOU A FASE 1.");
        return 0;
    }
    if (dica == 0){
      printf("\nInforme uma letra (caso queira pedir uma dica digite $): ");
      scanf(" %c",  &caractere);
      if (caractere == '$'){
        printf("A DICA É: \n");
        printf("\n%s", dica_fase_1[palavra]);
        dica++;
      }
      if (caractere != '$'){
        for (i = 0; i < 5; i++){
            if (caractere == fase_1[palavra][i]){
            temp[i] = caractere;
            }
            else{
                j++;
            }
            if (j == 5){
                c--;
                if(c == 0){
                    quebra_linha();
                    printf("\n\nGAME OVER!.");
                    exit(0);
                }
            }   
        }
      }
    }

    if (dica != 0){
      printf("\nInforme uma letra (DICA JÁ USADA): ");
      scanf(" %c", &caractere);
      for (i = 0; i < 5; i++){
        if (caractere == fase_1[palavra][i]){
          temp[i] = caractere;
        }
        else{
            j++;
        }
        if (j == 5){
            c--;
            if(c == 0){
                quebra_linha();
                printf("\n\nGAME OVER!");
                exit(0);
            }
        }
      }
    }
  }
  return 0;
}

int fase2(){
  int i, j, c = 4, palavra, dica = 0, verificar;
  char caractere, temp[] = "*******";

  palavra = sortear_numero();

  printf("\nTente adivinhar a palavra: \n");

  while (c != 0){
    j = 0;
    printf("\n\n[%s] \nNúmero de tentativas restantes: %d", temp, c);
    verificar = strcmp(temp, fase_2[palavra]);
    if (verificar == 0){
        quebra_linha();
        printf("\nPARABÉNS! VOCÊ TERMINOU A FASE 2.");
        return 0;
    }
    if (dica == 0){
      printf("\nInforme uma letra (caso queira pedir uma dica digite $): ");
      scanf(" %c",  &caractere);
      if (caractere == '$'){
        printf("A DICA É: \n");
        printf("\n%s", dica_fase_2[palavra]);
        dica++;
      }
      if (caractere != '$'){
        for (i = 0; i < 7; i++){
            if (caractere == fase_2[palavra][i]){
            temp[i] = caractere;
            }
            else{
                j++;
            }
            if (j == 7){
                c--;
                if(c == 0){
                    quebra_linha();
                    printf("\n\nGAME OVER!.");
                    exit(0);
                }
            }   
        }
      }
    }

    if (dica != 0){
      printf("\nInforme uma letra (DICA JÁ USADA): ");
      scanf(" %c", &caractere);
      for (i = 0; i < 7; i++){
        if (caractere == fase_2[palavra][i]){
          temp[i] = caractere;
        }
        else{
            j++;
        }
        if (j == 7){
            c--;
            if(c == 0){
                quebra_linha();
                printf("\n\nGAME OVER!");
                exit(0);
            }
        }
      }
    }
  }
  return 0;
}

int fase3(){
  int i, j, c = 5, palavra, dica = 0, verificar;
  char caractere, temp[] = "*********";

  palavra = sortear_numero();

  printf("\nTente adivinhar a palavra: \n");

  while (c != 0){
    j = 0;
    printf("\n\n[%s] \nNúmero de tentativas restantes: %d", temp, c);
    verificar = strcmp(temp, fase_3[palavra]);
    if (verificar == 0){
        quebra_linha();
        printf("\nPARABÉNS! VOCÊ TERMINOU A FASE 3.");
        return 0;
    }
    if (dica == 0){
      printf("\nInforme uma letra (caso queira pedir uma dica digite $): ");
      scanf(" %c",  &caractere);
      if (caractere == '$'){
        printf("A DICA É: \n");
        printf("\n%s", dica_fase_3[palavra]);
        dica++;
      }
      if (caractere != '$'){
        for (i = 0; i < 9; i++){
            if (caractere == fase_3[palavra][i]){
            temp[i] = caractere;
            }
            else{
                j++;
            }
            if (j == 9){
                c--;
                if(c == 0){
                    quebra_linha();
                    printf("\n\nGAME OVER!.");
                    exit(0);
                }
            }   
        }
      }
    }

    if (dica != 0){
      printf("\nInforme uma letra (DICA JÁ USADA): ");
      scanf(" %c", &caractere);
      for (i = 0; i < 9; i++){
        if (caractere == fase_3[palavra][i]){
          temp[i] = caractere;
        }
        else{
            j++;
        }
        if (j == 9){
            c--;
            if(c == 0){
                quebra_linha();
                printf("\n\nGAME OVER!");
                exit(0);
            }
        }
      }
    }
  }
  return 0;
}

int fase4(){
  int i, j, c = 6, palavra, dica = 0, verificar;
  char caractere, temp[] = "***********";

  palavra = sortear_numero();

  printf("\nTente adivinhar a palavra: \n");

  while (c != 0){
    j = 0;
    printf("\n\n[%s] \nNúmero de tentativas restantes: %d", temp, c);
    verificar = strcmp(temp, fase_4[palavra]);
    if (verificar == 0){
        quebra_linha();
        printf("\nPARABÉNS! VOCÊ TERMINOU A FASE 1.");
        return 0;
    }
    if (dica == 0){
      printf("\nInforme uma letra (caso queira pedir uma dica digite $): ");
      scanf(" %c",  &caractere);
      if (caractere == '$'){
        printf("A DICA É: \n");
        printf("\n%s", dica_fase_4[palavra]);
        dica++;
      }
      if (caractere != '$'){
        for (i = 0; i < 11; i++){
            if (caractere == fase_4[palavra][i]){
            temp[i] = caractere;
            }
            else{
                j++;
            }
            if (j == 11){
                c--;
                if(c == 0){
                    quebra_linha();
                    printf("\n\nGAME OVER!.");
                    exit(0);
                }
            }   
        }
      }
    }

    if (dica != 0){
      printf("\nInforme uma letra (DICA JÁ USADA): ");
      scanf(" %c", &caractere);
      for (i = 0; i < 11; i++){
        if (caractere == fase_4[palavra][i]){
          temp[i] = caractere;
        }
        else{
            j++;
        }
        if (j == 11){
            c--;
            if(c == 0){
                quebra_linha();
                printf("\n\nGAME OVER!");
                exit(0);
            }
        }
      }
    }
  }
  return 0;
}

int fase5(){
  int i, j, c = 7, palavra, dica = 0, verificar;
  char caractere, temp[] = "*************";

  palavra = sortear_numero();

  printf("\nTente adivinhar a palavra: \n");

  while (c != 0){
    j = 0;
    printf("\n\n[%s] \nNúmero de tentativas restantes: %d", temp, c);
    verificar = strcmp(temp, fase_5[palavra]);
    if (verificar == 0){
        quebra_linha();
        printf("\nPARABÉNS! VOCÊ TERMINOU A FASE 5!.");
        return 0;
    }
    if (dica == 0){
      printf("\nInforme uma letra (caso queira pedir uma dica digite $): ");
      scanf(" %c",  &caractere);
      if (caractere == '$'){
        printf("A DICA É: \n");
        printf("\n%s", dica_fase_5[palavra]);
        dica++;
      }
      if (caractere != '$'){
        for (i = 0; i < 13; i++){
            if (caractere == fase_5[palavra][i]){
            temp[i] = caractere;
            }
            else{
                j++;
            }
            if (j == 13){
                c--;
                if(c == 0){
                    quebra_linha();
                    printf("\n\nGAME OVER!.");
                    exit(0);
                }
            }   
        }
      }
    }

    if (dica != 0){
      printf("\nInforme uma letra (DICA JÁ USADA): ");
      scanf(" %c", &caractere);
      for (i = 0; i < 13; i++){
        if (caractere == fase_5[palavra][i]){
          temp[i] = caractere;
        }
        else{
            j++;
        }
        if (j == 13){
            c--;
            if(c == 0){
                quebra_linha();
                printf("\n\nGAME OVER!");
                exit(0);
            }
        }
      }
    }
  }
  return 0;
}

int main(){

    char nome[100];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("VAMOS LÁ %s, A IDEIA AGORA É JOGAR O FAMOSO JOGO DA FORCA.\n", nome);
    printf("QUE OS JOGOS COMEÇEM!");

    quebra_linha();

    fase1();
    printf("\n\nPARABÉNS, AGORA VAMOS PARA A FASE 2!");

    fase2();
    printf("\n\nBOA, CONTINUE ASSIM. AGORA FASE 3!");

    fase3();
    printf("\n\nESTÁ QUASE NO FIM. AGORA FASE 4!");

    fase4();
    printf("\n\nA ÚLTIMA. FASE 5!");

    fase5();
    printf("\n\nVOCÊ CONSEGUIU. VOCÊ TERMINOU O JOGO, PARABÉNS!");


    return 0;
}