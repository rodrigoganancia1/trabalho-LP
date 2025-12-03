/**
 * @mainpage Relatório do Projeto Final de LP
 *
 * @section intro_sec Introdução
 * Este projeto foi desenvolvido no âmbito da unidade curricular de Laboratórios de Programação (LP)
 * do curso de Engenharia Informática da Universidade da Beira Interior (UBI).
 *
 * O objetivo é manipular um vetor de 12 números inteiros e realizar diversas operações
 * matemáticas e estatísticas, incluindo cálculo de determinantes e manipulação de matrizes.
 *
 * @section authors_sec Autores
 * - **Equipa:** Team G5FC2C - Rodrigo Ganância, 
 * Leonardo Magalhães, Rafael Rodrigues, Simao Santos.
 * - **Universidade:** UBI - Covilhã
 * - **Ano:** 2025
 *
 * @section usage_sec Como Utilizar
 * 1. Compile o programa com o comando: `make`
 * 2. Execute o programa: `./projeto_final ou make run `
 * 3. Para ajuda na linha de comandos: `./projeto_final --help`
 *
 * @section features_sec Funcionalidades
 * - Operações básicas (Cosseno, Multiplicação, Ordenação)
 * - Manipulação de Matrizes (2x12, 12x12, Determinantes)
 * - Algoritmos de Euclides (MDC)
 * - Pivotagem Parcial (Eliminação de Gauss)
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "functions-team-G5FC2C.h"
#define MIN -7
#define MAX 22
#define TAM 12

int main(int argc, char *argv[])
{
    if (argc > 1 && strcmp(argv[1], "--help") == 0) {
        Ajuda();
        return 0; 
    }
    int A[TAM],B[TAM],opcao,T[TAM][TAM],matriz_criada=0;
    
    pedir_numeros(A);
    limpar_tela();
    escrever_numeros(A);
    do {
        Menu();
        if(scanf("%d", &opcao) != 1) {
            printf("\n Erro! Insira um número válido.\n");
            while(getchar() != '\n');
            continue;
        }
        if(opcao == 1){
            limpar_tela();
            cal_cos(A);
            
        } 
        else if(opcao == 2) {
            limpar_tela();
            multiplicacaoelementos(A);
            
        } 
        else if(opcao == 3) {
            limpar_tela();
            ordem_decrescente(A);
        } 
        else if(opcao == 4) {
            limpar_tela();
            multiplos_3(A);
            }
        else if (opcao == 5) {
            limpar_tela();
            elemento_aleatorio(A);}
        
        else if(opcao == 6) {
            limpar_tela();
            matriz_2x12(A);
        } 
        else if(opcao == 7) {
        Ajuda();
        } 
        else if(opcao == 8) {
            limpar_tela();
            pedir_numeros(B);
            produto_interno(A,B);
        } 
        else if(opcao == 9) {
            limpar_tela();
            calculo_mdc(A);
        } 
        
        else if(opcao == 10) {
            limpar_tela();
            matriz_12x12(A,T);
            matriz_criada = 1;
        } 
        else if(opcao == 11) {
            limpar_tela();
            if (matriz_criada == 0) {
                    printf("\n ERRO, A matriz ainda não foi construída!\n");
                    printf(" Por favor, execute a opção 10 primeiro para gerar a matriz.\n");
                } else {
                    determinante_matriz(T);
                }
        }
        
            
        else if(opcao == 0) {
            limpar_tela();
            printf("\n=======================================\n");
            printf("|   Obrigado por usar o programa!        |\n");
            printf("|         Team G5FC2C - LP 2025          |\n");
            printf("==========================================|\n\n");
        }
        else {
            printf("\n Opção inválida! Escolha entre 0 e 11.\n");
        }

    
    }while (opcao != 0);
    return 0;
} 

