/* Coded by Ivo - 29/02/24 - 07/03/24 -- Problema 4

Problema 2: Código onde o usuario digita dois numeros e o programa faz a soma dos dois. 
Problema 3: Esse aqui é para fazer uma calculadora, basicamente. 
Problema 4: Troquei as variaveis de int para float, porem, ele fica mostrando 6 casas apos a virgula, faca mostrar so duas. */

#include <stdio.h>

int main() {   
    
    float num1, num2;  /* Declara as duas variaveis que serao usadas. */
    
    printf("******************************\n");  
    printf("Digite o primeiro numero: "); 
    
    scanf("%f",&num1);  /* Pega o que o usuario digitou e armazena na variavel. */
    
    printf("Digite o segundo numero: ");
    
    scanf("%f",&num2);  
    
    printf("%.2f + %.2f = %.2f\n", num1, num2, num1 + num2);     /* Faz as operações dos dois numeros e os exibe. */
    printf("%.2f - %.2f = %.2f\n", num1, num2, num1 - num2);    /* As variaveis em %d aparecem na ordem que sao colocadas apos a virgula. */
    printf("%.2f * %.2f = %.2f\n", num1, num2, num1 * num2);   /* Poderia ser feito tambem com uma terceira variavel. */
	printf("%.2f / %.2f = %.2f\n", num1, num2, num1 / num2);  /* "%.2f" serve para definir quantas casas decimais mostrar. */
	printf("******************************");           
}   