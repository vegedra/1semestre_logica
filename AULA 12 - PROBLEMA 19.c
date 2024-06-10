// Coded by Ivo - 09/05/24 -- Problema 19 - Do-while menu calculadora

#include <stdio.h>

int main(void) {
    
    int opc = 0;
    float num1, num2;
    
    do {
        printf("\n--- Menu Calculadora ---");
        printf("\n1) Adicao");
        printf("\n2) Subtracao");
        printf("\n3) Multiplicacao");
        printf("\n4) Divisao");
        printf("\n0) Sair\n");
        printf("\nInforme a opcao: ");
        scanf("%d", &opc);
        
        if (opc >= 1 && opc <= 4) {
            
            printf("\nDigite o primeiro número: ");
            scanf("%f", &num1);
    
            printf("Digite o segundo número: ");
            scanf("%f", &num2);
        } 
    
        // if encardeado: testa várias condições
        if (opc == 1) { 
            printf("\n%.2f + %.2f = %.2f", num1, num2, num1+num2);
        }
    
        if (opc == 2) {
            printf("\n%.2f - %.2f = %.2f", num1, num2, num1-num2);
        }
    
        if (opc == 3) {
            printf("\n%.2f x %.2f = %.2f", num1, num2, num1*num2);
        }
    
        if (opc == 4) {
            printf("\n%.2f ÷ %.2f = %.2f", num1, num2, num1/num2);
        }
        
    } while (opc != 0);
    return 0;   // nao sei se eh pra ficar repetindo o menu com opcoes invalidas
}