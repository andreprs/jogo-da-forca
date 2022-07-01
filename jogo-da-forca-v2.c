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


/* Função para sortear um número
Essa função pode retornar os números [0, 1, 2, 3, 4]. Assim, é possível escolher aleatoriamente 
uma das palavras acima e suas respectivas dicas (de acordo com o índice).
*/

int sortear_numero(){
    int aleatorio;

    srand(time(NULL));
    aleatorio = rand() % 5;

    return aleatorio;
}

int fases(int numero_fase, char temp[], char sorteada[], int tam){

    int i, j, palavra, teste, cont = 3, dica = 0;
    char caractere;
    char * controle, * frase;

    palavra = sortear_numero();

    switch (numero_fase){
        case 1:{
        char *controle = &fase_1[numero_fase][6];
        char *frase = &dica_fase_1[numero_fase][6];
        break;
        }

        case 2:{
        char *controle = &fase_2[numero_fase][6];
        char *frase = &dica_fase_2[numero_fase][6];
        break;
        }

        case 3:{
        char *controle = &fase_3[numero_fase][6];
        char *frase = &dica_fase_3[numero_fase][6];
        break;
        }

        case 4:{
        char *controle = &fase_4[numero_fase][6];
        char *frase = &dica_fase_4[numero_fase][6];
        break;
        }

        case 5:{
        char *controle = &fase_5[numero_fase][6];
        char *frase = &dica_fase_5[numero_fase][6];
        break;
        }
    }

    printf("\nTente adivinhar a palavra: \n");
    while (cont != 0){
        j = 0;
        printf("\n[%s]", temp);
        teste = strcmp(temp, &sorteada[numero_fase * tam]);
        if (teste == 0){
            printf("\nParabéns! Você passou de fase.");
            return 0;
        }
        if (dica == 0){
            printf("Informe uma letra (caso deseje pedir uma dica digite $): ");
            scanf(" %c", &caractere);

            if (caractere == '$'){
                printf("A dica é: %s", frase);
                dica++;
            }
            else{
                for (i = 0; i < numero_fase; i++){
                    if (caractere == controle[i]){
                        temp[i] = caractere;
                    }
                    else{
                        j++;
                    }
                    if (j == numero_fase){
                        c--;
                        if (c == 0){
                            printf("\n\nGAME OVER!");
                            exit(0);
                        }
                    }
                }
            }
        }
        else{
            printf("\nInforme uma letra (DICA JÁ USADA): ");
            scanf(" %c", &caractere);
            for (i = 0; i < numero_fase; i++){
                if (caractere == controle[i]){
                    temp[i] = caractere;
                }
                else{
                    j++;
                }
                if (j == numero_fase){
                    printf("\nLetra '%s' não encontrada na palavra.");
                    cont--;
                    if (cont == 0){
                        printf("\nGAME OVER!");
                        exit(0);
                    }
                }
            }
        }
    }
}


// Programa Main

int main(){

    char nome[100];

    printf("Informe seu nome: ");
    scanf("%s", nome);

    printf("Vamos lá,  '%s'. A ideia agora é jogar o famoso jogo da forca.\n", nome);
    printf("\nQUE OS JOGOS COMECEM!");

    fases(1, "*****", *fase_1, 6);

    return 0;
}