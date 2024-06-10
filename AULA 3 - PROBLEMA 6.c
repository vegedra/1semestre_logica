/* Coded by Ivo - 07/03/24 - 14/03/24 -- Problema 6

Holerite. */

#include <stdio.h>

int main() {   
    
    /* Entrada. */
    float sal_bruto, taxa, sal_novo, vlr_aumento, imposto, vlr_inss, sal_liq, vlr_dia, faltas;  /* Declara as variaveis que serao usadas. */
    
    printf("****************************************\n");  
    printf("Digite o valor do salario bruto: "); 
    scanf("%f",&sal_bruto);  
    
    printf("Digite a taxa de aumento: ");
    scanf("%f",&taxa);  
    
	printf("Digite a taxa do INSS: ");
    scanf("%f",&imposto);  
    
    printf("Quantos dias o funcionário faltou?: ");
    scanf("%f",&faltas);  
	
	/* Processamento. */
    vlr_aumento = sal_bruto * taxa / 100;  /* Faz os calculos e os armazena nas variaveis. */
    sal_novo = sal_bruto + vlr_aumento;
	vlr_inss = sal_novo * imposto / 100;
	vlr_dia = sal_novo / 30;
	sal_liq = (sal_novo - vlr_inss) - vlr_dia * faltas;
    
    /* Saída. */
    printf("\n************* HOLERITE *****************\n");
    printf("Salario atual: R$%.2f.\n", sal_bruto);  
    printf("Taxa de aumento: %.2f" "%%. \n", taxa);  /* "%%" eh para poder mostrar o sinal sem ser interpretado como codigo. */
    printf("Valor de aumento: R$%.2f.\n", vlr_aumento);  
    printf("Salario com acrescimo: R$%.2f.\n", sal_novo); 
	printf("Valor dos impostos: R$%.2f.\n", vlr_inss); 
	printf("Valor do dia: %.1f.\n", vlr_dia); =
	printf("Dias com falta: %.1f.\n", faltas); 
	printf("Desconto falta: %.1f.\n", vlr_dia * faltas); 
    printf("\nSalario liquído: R$%.2f.\n", sal_liq);  
	printf("****************************************");    
}   