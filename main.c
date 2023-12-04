//Trabalho Pr�tico 3 da mat�ria de Algoritmos e T�cnicas de Programa��o 2
//Integrantes: Daniel Henrique e Pedro Alonso

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

#include "functions.h"

void main() {
    setlocale(LC_ALL, "Portuguese");

    int menu;
    FILE *file;

    do {
        printf("\n\tMENU\n\n");
        printf("1 - Escrita e Leitura de Jogadores\n");
        printf("2 - Listar Jogadores\n");
        printf("3 - Listar Posi��o dos Jogadores no Ranking\n");
        printf("4 - Listar Jogadores com mais Vit�rias\n");
        printf("5 - Alterar Dados de um Jogador\n");
        printf("6 - Inserir e Atualizar Pontua��o no Campeonato\n");
        printf("7 - Listar Classifica��o do Campeonato\n");
        printf("8 - Listar Jogadores com Pontua��o Maior que um Valor\n");
        printf("9 - Listar Jogadores com Pontua��o Menor que um Valor\n");
        printf("10 - Buscar Jogador por Nome\n");
        printf("11 - Buscar Jogador por Posi��o no Ranking\n");
        printf("12 - Mostrar a Quantidade M�dia de Seguidores de um Jogador\n");
        printf("0 - Sair\n\n");
        scanf("%d", &menu);
        system("cls");

        switch(menu) {
        case 0:
            return;
        case 1:
            escreverJogador(file);
            lerJogador(file);
            break;
        case 2:
            listarJogadoresAlfabetica(file);
            break;
        case 3:
            file = fopen("banco.dat", "rb");
            listarJogadoresRanking(file);
            fclose(file);
            break;
        case 4:
            listarJogadoresVitorias(file);
            break;
        case 5:
            file = fopen("banco.dat", "rb+");
            alterarJogador(file);
            fclose(file);
            break;
        case 6:
            file = fopen("banco.dat", "rb+");
            inserirResultado(file);
            fclose(file);
            break;
        case 7:
            file = fopen("banco.dat", "rb");
            listarClassificacao(file);
            fclose(file);
            break;
        case 8:
            pontuacaoMaiorQue(file);
            break;
        case 9:
            file = fopen("banco.dat", "rb");
            pontuacaoMenorQue(file);
            fclose(file);
            break;
        case 10:
            buscarJogadorNome(file);
            break;
        case 11:
            buscarJogadorRanking(file);
            break;
        case 12:
            mediaDeSeguidores(file);
            break;
        default:
            printf("\n\tInsira um comando v�lido.\n\n");
            break;
        }

        system("Pause");
        system("cls");
    } while(menu != 0);
}
