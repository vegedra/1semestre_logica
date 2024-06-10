// Coded by Ivo - 24/04/24 -- Problema 15 - Limite

#include <stdio.h>

int main(void) {
    int min, max, cont; 
    
    printf("Defina o limite minimo: ");
    scanf("%d", &min);
    
    printf("Defina o limite maximo: ");
    scanf("%d", &max);
    
    cont = min;
    
    printf("Ordem crescente de %d a %d", min, max);
    
    // Estrutura de repeticao crescente
    while (cont <= max) {
        printf("\n%d", cont);
        cont++;  
    }
    
    printf("\nOrdem decrescente de %d a %d", max, min);
    
    // Estrutura de repeticao decrescente
    while (max >= min) {
        printf("\n%d", max);
        max--;  
    }
}
