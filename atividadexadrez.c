#include <stdio.h>

int main() {
    // Declaração de variáveis para controlar o número de movimentos
    int movimentos_torre = 5;
    int movimentos_bispo = 5;
    int movimentos_rainha = 8;
    int contador;
    
    printf("=== SIMULAÇÃO DE MOVIMENTOS DE XADREZ ===\n\n");
    
    // =============================================
    // SIMULAÇÃO DA TORRE (usando estrutura FOR)
    // =============================================
    printf("MOVIMENTO DA TORRE:\n");
    printf("Movendo %d casas para a DIREITA:\n", movimentos_torre);
    
    // Torre: movimento horizontal para a direita usando FOR
    for(contador = 1; contador <= movimentos_torre; contador++) {
        printf("Direita\n");
    }
    
    printf("\n"); // Linha em branco para separar as seções
    
    // =============================================
    // SIMULAÇÃO DO BISPO (usando estrutura WHILE)
    // =============================================
    printf("MOVIMENTO DO BISPO:\n");
    printf("Movendo %d casas na DIAGONAL (Cima + Direita):\n", movimentos_bispo);
    
    contador = 1; // Reinicializando o contador para o bispo
    
    // Bispo: movimento diagonal usando WHILE
    while(contador <= movimentos_bispo) {
        printf("Cima, Direita\n");
        contador++; // Incrementando o contador
    }
    
    printf("\n"); // Linha em branco para separar as seções
    
    // =============================================
    // SIMULAÇÃO DA RAINHA (usando estrutura DO-WHILE)
    // =============================================
    printf("MOVIMENTO DA RAINHA:\n");
    printf("Movendo %d casas para a ESQUERDA:\n", movimentos_rainha);
    
    contador = 1; // Reinicializando o contador para a rainha
    
    // Rainha: movimento horizontal para a esquerda usando DO-WHILE
    do {
        printf("Esquerda\n");
        contador++; // Incrementando o contador
    } while(contador <= movimentos_rainha);
    
    printf("\n=== FIM DA SIMULAÇÃO ===\n");
    
    return 0; // Finalização do programa
}
