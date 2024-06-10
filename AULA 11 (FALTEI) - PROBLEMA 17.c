/*************************************************************************************************************
            Coded by Ivo - 02/05/24 -- Problema 17 - Par e impar
Usuário vai digitar uns números ímpares e pares, quantos o usuário quiser, e quando ele digitar 0, vai 
aparecer se o número é par ou ímpar, e vai calcular a média dos números.

Soma dos números pares, quantos números pares foram digitados, soma dos números ímpares e quantos 
números ímpares foram digitados.

***************************************************************************************************************/

#include <stdio.h>

int main(void) {
    int num, qtd_num, qtd_par, qtd_impar, num_par, num_impar;
    float media, acumulador;
    
    acumulador = 0;
    num = 1;
    
    while (num != 0) {
        printf("Digite o numero ou digite 0 para ver a soma: ");
        scanf("%d", &num);
        
        if (num != 0) {  
            acumulador = num + acumulador;
            qtd_num++;
            
            //  o operador % é usado para encontrar o resto da divisão do 
            if (num % 2 == 0) {     // número por 2. Se o resto for zero, o número é par; caso contrário, é impar.
                printf("%d é par!\n", num);  
                qtd_par++;
                num_par += num;
                
            } else {
                printf("%d é impar!\n", num);
                qtd_impar++;
                num_impar += num;
            }
        }
    }
    if (qtd_num == 0) {
        printf("Nenhum numero foi digitado...");
        return 0;
    }
    if (num == 0) {
        num--;
        printf("Apresentando a soma...\n");
        printf("\n*** Par ***\n");
        printf("O usuario digitou %d numeros pares\n", qtd_par);
        printf("A soma dos números pares é: %d\n", num_par);
        
        printf("\n*** Impar ***\n");
        printf("O usuario digitou %d numeros impar\n", qtd_impar);
        printf("A soma dos números impares é: %d\n", num_impar);
        
        printf("\n*** Média ***\n");
        printf("O usuario digitou %d numeros e a soma é: %.2f\n", qtd_num, acumulador);
        
        if (acumulador == 0 || qtd_num == 0) {
            printf("Não é possível fazer essa média.");
        } else {
            printf("A média dos números pares é: %d\n", num_par / qtd_par);
            printf("A média dos números impares é: %d\n", num_impar / qtd_impar);
        }
        
        if (acumulador != 0 && qtd_num != 0) {
            media = (num_par + num_impar) / qtd_num;
            printf("A média de todos os números é: %.2f", media);
        }
    }
    return 0;
}