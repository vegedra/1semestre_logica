/* Coded by Ivo - 04/04/24 -- Problema 12 - Usuario fornece os 3 lados de um triangulo, o codigo
deve validar que esses lados sejam positivos e garantir que esses lados formem um
triangulo, ou seja, um lado deve ser sempre menor que a soma dos outros dois lados.
O codigo deve identificar o tipo do triangulo: 
3 lados iguais: equilatero;
2 lados iguais: isosceles;
1 lado igual: escaleno 
Após identificar o tipo, identifique se é um triangulo retangulo  */

#include <stdio.h>

int main(void) {
    float lado1, lado2, lado3;  
    
    printf("Forneça o 1o lado do triangulo: ");
    scanf("%f", &lado1);
    
    printf("Forneça o 2o lado do triangulo: ");
    scanf("%f", &lado2);
    
    printf("Forneça o 3o lado do triangulo: ");
    scanf("%f", &lado3);
    
    // Verifica se o numero é 0 ou negativo
    if (lado1 <= 0 || lado2 <= 0 || lado3 <= 0) {
        printf("\nErro, não use números negativos ou com valor 0.");
        return 0;
    }
    // Se cair aqui é porque os numeros sao positivos
    else {
        // Verifica se um triangulo não pode ser formado
        if ((lado1>lado2+lado3)||(lado2>lado1+lado2)||(lado3>lado1+lado2)) {
            printf("\nErro, um lado deve ser menor que a soma de outros dois lados.");
            return 0;
        }
        // Verifica o tipo do triangulo
        else {
            printf("\nLado 1: %.2f ; Lado 2: %.2f ; Lado 3: %.2f.", lado1, lado2, lado3);
            
            if (lado1 == lado2 && lado2 == lado3) {
                printf("\nO tipo do triangulo é: equilatero.");
				if ((lado1*lado1)+(lado2*lado2)==(lado3*lado3)) {
					printf("\nEsse triangulo é retangulo!");
				} else {
					printf("\nEsse triangulo NÃO é retangulo!");
				}
                return 0; 
            } else {
                if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
                    printf("\nO tipo do triangulo é: isosceles.");
					if ((lado1*lado1)+(lado2*lado2)==(lado3*lado3)) {
						printf("\nEsse triangulo é retangulo!");
					} else {
						printf("\nEsse triangulo NÃO é retangulo!");
					}
                    return 0; 
                } else {
                    printf("\nO tipo do triangulo é: escaleno.");
					if ((lado1*lado1)+(lado2*lado2)==(lado3*lado3)) {
						printf("\nEsse triangulo é retangulo!");
					} else {
						printf("\nEsse triangulo NÃO é retangulo!");
					}
                    return 0; 
                }
            }
        }
    }
}