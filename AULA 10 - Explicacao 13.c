// Coded by Ivo - 24/04/24 -- Explicacao 13 - Estruturas de repeticao - loop 

#include <stdio.h>

int main(void) {
    int cont;  // Variavel com a funcao de contador, se nao atribuir valor ela inicia com 0, o zero conta no loop
    
    // Estrutura de repeticao, vai repetir o texto 5x
    while (cont < 5) {
        printf("\nCuidado, nao atravesse a faixa amarela!");
        cont++;  // Soma a variavel cont em 1 -- cont = cont+1 / pode ser com -- tambem (-1)
    }
}
