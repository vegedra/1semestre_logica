/* Coded by Ivo - 21/03/24 -- Problema 9

Descobrir a idade do usuario a partir do seu ano de nascimento, se pode se aposentar e quando anos faltam.
Também usa variaveis char para ter o nome do usuario.  */

#include <stdio.h>
#include <string.h>  /* Para trabalhar com strings (conjunto de caracteres)  */

int main() {   
    
    int ano_nasc, ano_atual, idade;   
    char nome[10];  /* Especifica o tamanho/numero de caracteres nos colchetes.  */
    
    printf("***********************************\n");  
    printf("Qual o seu nome? "); 
    scanf("%s",&nome);  /* Se usa %s para strings, Se tirar o & tira o warning, mas é melhor deixar para evitar problemas de memória no futuro  */
    
    printf("%s, em que ano você nasceu? ", nome); 
    scanf("%d",&ano_nasc); 
    
    printf("E em que ano estamos? "); 
    scanf("%d",&ano_atual); 
    
    idade = ano_atual - ano_nasc;
    
    printf("\n%s tem %d anos.\n", nome, idade);
    
    /* Condição if (poderia fazer com switch case pra ficar menos  feio)  */
    if (idade >= 18) {
        printf("%s pode dirigir.\n", nome); 
    } else {
        printf("%s não pode dirigir.\n", nome); 
        printf("%s terá que esperar %d.\n", nome, 18 - idade);
    }
    
    if (idade >= 65) {
        printf("%s pode se aposentar e já poderia a %d anos.", nome, idade - 65); 
    } else {
        printf("%s não pode se aposentar.\n", nome); 
        printf("%s terá que esperar %d anos.", nome, 65 - idade);
    }
    
	printf("\n***********************************");  
}   