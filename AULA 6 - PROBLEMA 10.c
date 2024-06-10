/* Coded by Ivo - 21/03/24 -- Problema 10

Cupom fiscal. */

#include <stdio.h>
#include <string.h>  

int main() {   
    float valor_total, valor_final, tax_desconto, desconto;   
    char nome_comp[10], nome_vend[10];  
    
    printf("***********************************\n");  
    printf("Digite o nome do cliente: "); 
    scanf("%s",&nome_comp);  
    
    printf("Digite o nome do vendendor: "); 
    scanf("%s",&nome_vend); 
    
    printf("Digite o valor da compra: "); 
    scanf("%f",&valor_total); 
    
    printf("Digite a taxa de desconto: "); 
    scanf("%f",&tax_desconto); 
    
    desconto = valor_total * tax_desconto / 100;
    valor_final = valor_total - desconto;
    
	printf("\n********* CUPOM FISCAL ************"); 
    printf("\nComprador: %s", nome_comp); 
    printf("\nVendedor: %s", nome_vend); 
	printf("\nValor Bruto: R$%.2f", valor_total); 
	printf("\nTaxa do Desconto: %.2f%%", tax_desconto); 
	printf("\nValor do Desconto: R$%.2f", desconto); 
	printf("\nValor Final: R$%.2f", valor_final); 
	printf("\n***********************************");  
}   