/*****************************************************************
            Coded by Ivo - 02/05/24 -- Problema 16 - While 2

usuário vai colocando os números e quando ele digitar 0 ele 
vai receber a soma de todos os números que ele digitou

******************************************************************/

#include <stdio.h>

int main(void) {
    int num, qtd_num;
    float media, acumulador;
    
    acumulador = 0;
    num = 1;
    
    while (num!= 0) {
        printf("Digite o numero ou digite 0 para ver a soma: ");
        scanf("%d", &num);
        acumulador = num+acumulador;
        qtd_num++;
    }
    if (num == 0) {
        printf("Apresentando a soma...\n");
        qtd_num--;
        printf("O usuario digitou %d numeros e a soma é: %.2f\n", qtd_num--, acumulador);
        
        if (acumulador == 0 || qtd_num == 0) {
            printf("Não é possível fazer essa média.");
        }
        if (acumulador != 0 && qtd_num != 0) {
            media = acumulador / qtd_num;
            printf("A média de todos os números é: %.2f", media);
        }
    }

    return 0;
}
