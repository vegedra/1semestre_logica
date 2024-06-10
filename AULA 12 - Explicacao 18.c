/************************************************************************************************************
                            Coded by Ivo - 02/05/24 -- Explicacao 18 - Do-while
No while, primeiro ele testa e depois faz, ja no do-while ele primeiro faz (ao menos uma vez) e depois testa 
                                            Pode ser usado em um menu

*************************************************************************************************************/

#include <stdio.h>

int main(void) {
    // Se fosse 6 ele mostraria a mensagem apenas uma vez
    int cont = 0;
    
    do {
        printf("\nLoop do while: %d", cont);
        cont++;
    } while (cont<5);
}