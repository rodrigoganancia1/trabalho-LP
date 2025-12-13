/**
 * @file functions-team-G5FC2C.h
 * @brief Declaração das funções e constantes para o projeto final de LP.
 *
 * Este ficheiro contém os protótipos de todas as funções utilizadas para
 * manipulação de vetores, matrizes e cálculos matemáticos requeridos
 * no enunciado do trabalho prático.
 *
 * @author Team G5FC2C
 * @date 13 de dezembro 2025
 * @university Universidade da Beira Interior (UBI)
 */

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <stdio.h>
#include <math.h>

/** @brief Número máximo de elementos no vetor. */
#define TAM 12
/** @brief Valor mínimo permitido para entrada de dados. */
#define MIN -7
/** @brief Valor máximo permitido para entrada de dados. */
#define MAX 22

/**
 * @brief Função principal que contém um menu interativo para manipulação de um vetor de números inteiros.
 *
 * Este programa oferece um menu interativo com várias opções para operações em um vetor de números inteiros.
 * Ele permite ao usuário escolher entre diferentes funcionalidades para manipular o vetor.
 *
 * @param argc O número de argumentos de linha de comando.
 * @param argv [] O array de argumentos de linha de comando.
 *
 * @return int Retorna 0 se o programa for executado com sucesso.
 */
int main(int argc, char *argv[]);

/**
 * @brief Limpa o ecrã do terminal.
 *  Utiliza comandos de sistema para limpar a consola, adaptando-se
 * ao ambiente (Linux/Unix nos laboratórios).
 */
void limpar_tela(void);

/**
 * @brief Exibe o menu principal do programa.
 * Mostra as opções numeradas de 1 a 11 e a opção 0 para sair.
 */
void Menu(void);

/**
 * @brief Exibe a página de ajuda.
 *  Apresenta uma descrição detalhada do funcionamento do programa,
 * equipa de desenvolvimento e funcionalidades.
 */
void Ajuda(void);

// --- Funções de manipulação de vetores e matrizes ---

/**
 * @brief Solicita ao utilizador 12 números inteiros.
 * Pede números sequencialmente, validando se estão dentro do intervalo [MIN, MAX].
 * @param A Vetor onde os números serão armazenados.
 */
void pedir_numeros(int A[]);

/**
 * @brief Imprime os números armazenados no vetor.
 * Apresenta o vetor formatado no ecrã.
 * @param A Vetor a ser impresso.
 */
void escrever_numeros(int A[]);

/**
 * @brief Calcula e exibe o cosseno da segunda metade do vetor.
 * Percorre os elementos do índice TAM/2 até TAM-1.
 * @param A Vetor de dados.
 */
void cal_cos(int A[]);

/**
 * @brief Calcula a multiplicação de todos os elementos do vetor.
 * Utiliza uma variável long long para evitar overflow no produto.
 * @param A Vetor de dados.
 */
void multiplicacaoelementos(int A[]);

/**
 * @brief Exibe o vetor ordenado por ordem decrescente.
 * Cria uma cópia local do vetor para não alterar o original e aplica
 * um algoritmo de ordenação (Bubble Sort).
 * @param A Vetor original (não é modificado).
 */
void ordem_decrescente(int A[]);

/**
 * @brief Exibe os valores nas posições múltiplas de 3.
 * Verifica os índices 0, 3, 6, 9, etc.
 * @param A Vetor de dados.
 */
void multiplos_3(int A[]);

/**
 * @brief Seleciona e exibe um elemento aleatório do vetor.
 * @param A Vetor de dados.
 */
void elemento_aleatorio(int A[]);

/**
 * @brief Constrói e exibe uma matriz 2x12 baseada no vetor.
 * A primeira linha é o vetor original, a segunda é o quádruplo dos valores.
 * @param A Vetor de dados.
 */
void matriz_2x12(int A[]);

// --- Funcionalidades Avançadas ---



/**
 * @brief Calcula o produto interno (escalar) entre dois vetores.
 * Realiza a soma dos produtos elemento a elemento.
 * @param A Primeiro vetor.
 * @param B Segundo vetor.
 */
void produto_interno(int A[], int B[]);

/**
 * @brief Calcula o Máximo Divisor Comum (MDC) de pares consecutivos.
 * Utiliza o Algoritmo de Euclides para calcular o MDC(|A[i]|, |A[i+1]|).
 * @param A Vetor de dados.
 */
void calculo_mdc(int A[]);

/**
 * @brief Constrói uma matriz 12x12 através de produto externo.
 * A matriz resultante T[i][j] é o produto de A[i] pelo vetor ordenado A'[j].
 * @param A Vetor original.
 * @param T Matriz onde o resultado será armazenado.
 */
void matriz_12x12(int A[], int T[][TAM]);

/**
 * @brief Calcula o determinante da matriz 12x12.
 * Utiliza o método de Eliminação de Gauss com Pivotagem Parcial para transformar
 * a matriz numa triangular superior e calcula o produto da diagonal principal.
 * @param T Matriz de entrada.
 */
void determinante_matriz(int T[][TAM]);

#endif
