/* Coded by Ivo - 29/02/24 - Problema 1 */

/* Esse codigo mostra uma saida de dados */

#include <stdio.h>

int main() {   
    
    /* Variaveis so podem ser declaradas no inicio do codigo, que no caso o valor dela sera fornecido pelo 
    usuario e sera armazenado dentro da variavel: 
    Variaveis sao necessarias toda vez que manipulamos dados - nome, idade, etc. 
    Os dados de uma variavel ficam armazenados na memoria RAM da maquina. 
    Para os dados serem armazenados na memoria criamos variaveis, e especificamos seu tipo.
    Variaveis do mesmo tipo podem ser declaradas ao mesmo tempo. Exemplo: 'int idade, peso, resultado;' */
    
    int idade;  /* Variavel declarada, com seu tipo especificado, que varia de acordo com o dado armazenado. 
    No caso, int 'nome'; --> numero inteiro - %d quando mostrado em texto.
    
    Outros tipos de variaveis:
    
    Numeros reais = 'float' - %f
    Caractere/letras = 'char' - %c
    Palavras/texto = 'string' - %s -- Exemplo: 'char string_name[string_length] = "string";'
                                      'string_length' nao eh obrigatorio de especificar. Por exemplo:
                                      'char nome[] = "Pedro";'
    
    O nome de uma variavel nao pode ter caracteres especiais, espaço, ter 
    o nome repetido de outra variavel e ser um comando de syntax. Nomes auto-explicativos sao bons. */
    
    idade = 18;  /* Atribuimos valor a variavel. */
    
    printf("*********************************************\n");  /* O '\n' pula a linha. A barra '/' so eh usada em comentarios. */
    printf("Oi, estou estudando na faculdade UniDrummond.\n");
    printf("Meu nome é Pedro Ivo!\n");
    printf("Tenho %d anos.\n", idade);  /* %d serve para exibir o valor da variavel de tipo inteiro, que foi especificada apos a virgula. */
    printf("*********************************************");

    /* Mesmo sem o 'return 0;' ele funciona por causa do fecha-chaves abaixo. */ 
}   