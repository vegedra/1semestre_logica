// Coded by Ivo - 02/04/24 -- Programando uma calculadora 2  

#include <stdio.h>

int main() {
    
    int opc;  
	float valor_etiqueta, desconto;
    
    printf("*********** OPÇÕES DE PAGAMENTO ***********");
    printf("\n1) Á vista em dinheiro ou cheque, recebe 10%% de desconto");
    printf("\n2) Á vista no cartão de crédito, recebe 15%% de desconto");
    printf("\n3) Em duas vezes, preço normal de etiqueta sem juros");
    printf("\n4) Em três vezes, preço normal de etiqueta mais juros de 10%%");
    
	printf("\nDigite o valor da etiqueta: \n");
    scanf("%f", &valor_etiqueta);
	
	printf("\nDigite o código do pagamento: \n");
    scanf("%d", &opc);
	
	if (opc > 5 || opc <= 0) {
        printf("Esse código de pagamento é inválido!");
        return 0;
    }
    
    if (opc == 1) {  
        desconto = valor_etiqueta * 10 / 100;
        printf("\nOpção escolhida: Á vista em dinheiro ou cheque, recebe 10%% de desconto\n");
		printf("Valor da etiqueta: %.2f", valor_etiqueta);
		printf("\nValor do desconto: %.2f", desconto);
		printf("\nValor do pagamento com desconto: %.2f", valor_etiqueta - desconto);
	}
    
    if (opc == 2) {
        desconto = valor_etiqueta * 15 / 100;
        printf("\nÁ vista no cartão de crédito, recebe 15%% de desconto\n");
		printf("Valor da etiqueta: %.2f", valor_etiqueta);
		printf("\nValor do desconto: %.2f", desconto);
		printf("\nValor do pagamento com desconto: %.2f", valor_etiqueta - desconto);
    }
    
    if (opc == 3) {
        printf("\nEm duas vezes, preço normal de etiqueta ais juros de 10%%\n");
		printf("Valor da etiqueta: %.2f", valor_etiqueta);
		printf("\nValor do desconto: 0.0");
		printf("\nValor da parcela: %.2f", valor_etiqueta /2);
    }
    
    if (opc == 4) {
        printf("\nEm três vezes, preço normal de etiqueta mais juros de 10%%\n");
		printf("Valor do juros: 10%%");
		printf("\nValor total com juros: %.2f", valor_etiqueta * 10);
		printf("\nValor da parcela: %.2f", valor_etiqueta / 3);
    }
}