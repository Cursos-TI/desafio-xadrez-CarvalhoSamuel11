#include <stdio.h>

int main() {
    printf("Movimentacao da torre...\n");
    
    // a torre move 5 casas para a direita
    for ( int torre = 0; torre < 5; torre++)
    {
        printf("Direita\n"); //imprime a direção do movimento
    }

    int bispo = 0;
    
    // o bispo se movimenta na diagonal 5 casas para cima à direita
    printf("Movimentacao do bispo...\n");

    while (bispo <=5)
    {
        printf("Cima, Direita\n"); //imprime a direção do movimento

        bispo++;
    };

    int rainha = 0;
    
    //a rainha se movimenta 8 casas para a esquerda
    printf("Movimetacao da rainha...\n");
    do{
        printf("Esquerda\n"); //imprime a direção do movimento

        rainha++;
    
    }while (rainha <= 8);

    int movimentoCavalo = 1; 
    //o cavalo se movimenta 2 casas para baixo e 1 casa para a esquerda
    printf("Movimentacao do cavalo...\n");

    while (movimentoCavalo--) //loop externo
    {
        for (int i = 0; i < 2; i++) //loop interno
        {
            printf("Baixo\n");
        }

        printf("Esquerda\n");
        
    }
    return 0;
}
