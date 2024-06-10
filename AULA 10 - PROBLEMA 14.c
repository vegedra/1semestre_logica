// Coded by Ivo - 24/04/24 -- Problema 14 - Tabuada

#include <stdio.h>

int main(void) {
    int tab, cont; 
    
    printf("Escolha uma tabuada: ");
    scanf("%d", &tab);
    
    printf("\n** Tabuada do %d **\n", tab);
    
    // Estrutura de repeticao 
    while (cont <= 10) {
        // Utiliza o valor de cont que eh incrementado a cada loop
        printf("\n%d x %d = %d", cont, tab, tab * cont);
        cont++;  
    }
}
