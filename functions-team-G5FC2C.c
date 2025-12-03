#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include "functions-team-G5FC2C.h"
#define MIN -7
#define MAX 22
#define TAM 12
void limpar_tela() 
{
    system("clear");
}
void Menu(void) 
{
    printf("\n|============================================================|\n");
    printf("|                    MENU PRINCIPAL                          |\n");
    printf("|============================================================|\n");
    printf("| 1.  Cálculo do cosseno (2ª metade)                         |\n");
    printf("| 2.  Multiplicação de todos os elementos                    |\n");
    printf("| 3.  Vetor ordenado (ordem decrescente)                     |\n");
    printf("| 4.  Valores em posições múltiplas de 3                     |\n");
    printf("| 5.  Elemento aleatório                                     |\n");
    printf("| 6.  Construir matriz 2x12                                  |\n");
    printf("| 7.  Página de ajuda                                        |\n");
    printf("| 8.  Produto interno (ler novo vetor)                       |\n");
    printf("| 9.  Máximo Divisor Comum de pares consecutivos             |\n");
    printf("| 10. Construir matriz 12x12                                 |\n");
    printf("| 11. Determinante da matriz 12x12                           |\n");
    printf("| 0.  Sair                                                   |\n");
    printf("|============================================================|\n");
    printf("Escolha uma opção: ");
}
void Ajuda(void) 
{
    printf("\n|============================================================|\n");
    printf("|                      PÁGINA DE AJUDA                       |\n");
    printf("|============================================================|\n");
    printf("|                                                            |\n");
    printf("| DESCRIÇÃO DO PROGRAMA:                                     |\n");
    printf("| Este programa realiza operações matemáticas sobre um       |\n");
    printf("| vetor de 12 números inteiros (entre -7 e 22).              |\n");
    printf("|                                                            |\n");
    printf("| FUNCIONALIDADES DISPONÍVEIS:                               |\n");
    printf("|                                                            |\n");
    printf("| 1.  Cosseno: Calcula cos(x) da 2ª metade do vetor          |\n");
    printf("| 2.  Multiplicação: Produto de todos os elementos           |\n");
    printf("| 3.  Ordenação: Mostra vetor em ordem decrescente           |\n");
    printf("| 4.  Múltiplos de 3: Valores nas posições 0, 3, 6, 9        |\n");
    printf("| 5.  Aleatório: Seleciona um elemento aleatoriamente        |\n");
    printf("| 6.  Matriz 2x12: Cria matriz com vetor original e quádruplo|\n");
    printf("| 7.  Ajuda: Mostra esta página de informações               |\n");
    printf("| 8.  MDC: Calcula o MDC de pares consecutivos               |\n");
    printf("| 9.  Produto interno: Calcula produto com um novo vetor     |\n");
    printf("| 10. Matriz 12x12: Constrói matriz (Produto Externo)        |\n");
    printf("| 11. Determinante: Calcula determinante da matriz 12x12     |\n");
    printf("|                                                            |\n");
    printf("| COMO USAR:                                                 |\n");
    printf("| 1. Execute o programa                                      |\n");
    printf("| 2. Insira 12 números entre -7 e 22                         |\n");
    printf("| 3. Escolha uma opção do menu (1-11)                        |\n");
    printf("| 4. Use a opção 0 para sair                                 |\n");
    printf("|                                                            |\n");
    printf("| FLAG --help: Execute './programa --help' no terminal       |\n");
    printf("|                                                            |\n");
    printf("| Disciplina: Laboratórios de Programação (LP)               |\n");
    printf("| Universidade da Beira Interior (UBI)                       |\n");
    printf("|                                                            |\n");
    printf("|============================================================|\n");
}
void pedir_numeros(int A[])
{
    int N,k=0;
    while (k < TAM)
    {

            {
        printf("Insira o numero da pos %d numero entre %d e %d :\n",k,MIN,MAX);
        scanf("%d",&N);


            }
    while (N < MIN || N > MAX)
        {
            printf("Erro. Insira novamante o numero para a pos %d entre %d e %d \n", k,MIN,MAX);
            scanf("%d", &N);
        }
        A[k]=N;
        k++;
    }
    
}
void escrever_numeros(int A[])
{
    int k;
    printf("Os numeros inseridos foram:\n||");
    for(k=0;k< TAM ;k++)
    {
        printf(" pos %d= %d ||",k+1 ,A[k]);
    }
    printf("\n");
}
void cal_cos(int A[])
{
   int k;
   float C;
   for (k=(TAM/2);k<TAM;k++)
   {
      C=cos(A[k]);
      printf("O coseno da pos %d com valor %d  e : ",k ,A[k]);
      printf("%f\n",C);
   }
}
void multiplicacaoelementos(int A[])
{
    int k; 
    long long produto=1;
    for (k=0;k<TAM;k++)
    {
        produto=produto*A[k];
    }
    printf("=== O produto de todos os numeros e===:\n %lld\n",produto);
}
void ordem_decrescente(int A[])
{
    int i,k,aux;
    int copia[TAM];
   for(i = 0; i < TAM; i++) {
        copia[i] = A[i];
    }
    for (i=0;i<TAM-1;i++)
    {
        for (k=i+1;k<TAM;k++)
        {
            if (copia[i]<copia[k])
            {
                aux=copia[i];
                copia[i]=copia[k];
                copia[k]=aux;
            }
        }
    }
    printf("Os numeros em ordem decrescente sao:\n||");
    for (i=0;i<TAM;i++)
    {
        printf(" pos %d= %d ||",i ,copia[i]);
    }
    printf("\n");
}
void multiplos_3(int A[]) {
    int k;
    printf("\n=== POSIÇÕES MÚLTIPLAS DE 3 ===\n");
    for(k = 0; k < TAM; k++) {
        if(k % 3 == 0) {
            printf("Posição %d: %d\n", k, A[k]);
        }
    }
}
void elemento_aleatorio(int A[]) {
    int pos = rand() % TAM;
    printf("\n=== ELEMENTO ALEATÓRIO ===\n");
    printf("Posição sorteada: %d\n", pos);
    printf("Valor: %d\n", A[pos]);
}
void matriz_2x12(int A[]) 
{
    int k;
    printf("Linha 0 :  [ ");
    for(k = 0; k < TAM; k++) {
        printf("%3d ", A[k]);
    }
    printf("]\n");
    
    printf("Linha 1 : [ ");
    for(k = 0; k < TAM; k++) {
        printf("%3d ", A[k] * 4);
    }
    printf("]\n");
}
void produto_interno(int A[], int B[]) {
    int k;
    long long produto = 0;
    for (k = 0; k < TAM; k++) {
        produto = produto + (A[k] * B[k]);
    }
    printf("O produto interno dos dois vetores é: %lld\n", produto);
}
void calculo_mdc(int A[]) {
    int k, a, b, temp;
    
    for(k = 0; k < TAM-1; k++) {
        
        a = abs(A[k]);      
        b = abs(A[k+1]);   
        
        while(b != 0) {
            temp = b;
            b = a % b;
            a = temp;
        }
        
        printf("MDC(%3d, %3d) = %d\n", A[k], A[k+1], a);
    }
}
void matriz_12x12(int A[], int T[][TAM])
{
    int i,k,aux;
    int copia[TAM];
   for(i = 0; i < TAM; i++) {
        copia[i] = A[i];
    }
    for (i=0;i<TAM-1;i++)
    {
        for (k=i+1;k<TAM;k++)
        {
            if (copia[i]>copia[k])
            {
                aux=copia[i];
                copia[i]=copia[k];
                copia[k]=aux;
            }
        }
    }
    printf("Os numeros em ordem crescente sao:\n||");
    for (i=0;i<TAM;i++)
    {
        printf(" pos %d= %d ||",i ,copia[i]);
    }
    printf("\n");

    for (i=0;i<TAM;i++)
    {
        for (k=0;k<TAM;k++)
        {
            T[i][k]=A[i]*copia[k];
            printf("%4d",T[i][k]);
        }
        printf("\n");
    }

}
void determinante_matriz( int T[][TAM])
{
    int i, j, k;
    double A[TAM][TAM];
    double det = 1.0;
    
    printf("\n=== DETERMINANTE POR ESCALONAMENTO ===\n\n");
    
    // Copiar para double
    for(i = 0; i < TAM; i++)
        for(j = 0; j < TAM; j++)
            A[i][j] = T[i][j];
    
    // Escalonamento
    for(i = 0; i < TAM; i++) {
        
        // Verificar pivô
        if(A[i][i] == 0) {
            printf("Determinante = 0 (matriz singular)\n");
            return;
        }
        
        // Eliminação gaussiana
        for(k = i+1; k < TAM; k++) {
            double m = A[k][i] / A[i][i];
            for(j = i; j < TAM; j++)
                A[k][j] -= m * A[i][j];
        }
    }
    
    // Produto da diagonal
    for(i = 0; i < TAM; i++)
        det *= A[i][i];
    
    printf(" Determinante = %.2e\n", det);
}


