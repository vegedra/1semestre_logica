/* Coded by Ivo - 29/02/24 */

/* Biblioteca que fornece os comando de entrada e saida de dados, quase sempre usa. */
#include <stdio.h>

/* Define o nome do programa/funcão principal, no caso de C é main(), se tirar o 'int' ocorre um 
warning de que consegue executar o codigo, mas se precisasse retornar algo precisaria 
identificar o tipo de retorno como 'int'. Error ≠ Warning */

int main() 
{   /* <-- As chaves servem para iniciar e fechar o sistema */

    /* Exibe uma mensagem no console, comandos são case-sensitive. O ; serve para dizer que o comando acabou */
    printf("Oi mundo");

    return 0;  /* Todo programa precisa retornar algo, o return 0 encerra o que tem que fazer e retorna 0 - nada. */
    
}   /* Nao precisaria do return 0 pois ja tem o fecha-chaves NESSE CASO */