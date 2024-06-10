/* Coded by Ivo - 14/03/24 -- Problema 7

Média com if statements. */

#include <stdio.h>

int main() {   
    
    float nota1, nota2, nota3, nota4, media; 
    
    printf("******************************\n");  
    printf("Digite a nota da AC1: "); 
    scanf("%f",&nota1); 
    
    printf("Digite a nota da AC2: "); 
    scanf("%f",&nota2);  
    
    printf("Digite a nota do PEX: "); 
    scanf("%f",&nota3);  
    
    printf("Digite a nota da AR: ");
    scanf("%f",&nota4);  
    
    media = (nota1*0.1)+(nota2*0.2)+(nota3*0.2)+(nota4*0.5);  /* Calculo de media no padrão Drummond. */
    
    printf("\nA média é %.2f.\n", media);  
    
    /* Condição if. */
    if (media >= 7) {
        printf("O aluno está aprovado.");
        
    } else {
        printf("O aluno está de exame.");
    }
	printf("\n******************************");  
}   