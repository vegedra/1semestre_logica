/* Coded by Ivo - 07/03/24 -- Problema 5

Usuario digita 4 numeros e o programa faz a media aritmetica. */

#include <stdio.h>

int main() {   
    
    float num1, num2, num3, num4;  /* Declara as variaveis que serao usadas. */
    
    printf("******************************\n");  
    printf("Digite o primeiro número: "); 
    scanf("%f",&num1);  /* Pega o que o usuario digitou e armazena na variavel. */
    
    printf("Digite o segundo número: ");
    scanf("%f",&num2);  
    
    printf("Digite o terceiro número: "); 
    scanf("%f",&num3);  
    
    printf("Digite o quarto e último número: ");
    scanf("%f",&num4);  
    
    printf("A média é %.2f.\n", (num1 + num2 + num3 + num4) / 4);  /* Calcula a media. */
	printf("******************************");  
}   