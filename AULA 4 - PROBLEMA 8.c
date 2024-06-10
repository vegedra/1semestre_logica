/* Coded by Ivo - 14/03/24 -- Problema 8

Usuario informa quantidade de maças, sabendo que cada maça custa R$1,30, se caso
a compra de maças seja maior ou igual a uma duzia o custo da maça diminui para R$1.  */

#include <stdio.h>

int main() {   
    
    float qntd, custo_total; 
    
    printf("******************************\n");  
    printf("Quantidade de maças: "); 
    scanf("%f",&qntd); 
    
    /* Condição if. */
    if (qntd >= 12) {
        custo_total = qntd * 1;
        
    } else {
        custo_total = qntd * 1.30;
    }
    printf("O custo total é: R$%.2f.\n", custo_total);  
	printf("******************************");  
}   