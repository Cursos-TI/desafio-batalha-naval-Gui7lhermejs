#include <stdio.h>


int main() {
    

    int t[10][10] = {0};
    int opcao;

    //Menu
    while(1) {

        printf ("\nBatalha Naval\n");
        printf ("   \nOpções\n");
        printf("\n1. Mostrar o Tabuleiro\n2. Adicionar Navio\n3. Sair\nQual opção?: ");
        scanf("%d", &opcao);

    switch(opcao){

        case 1: {
            //Mostra o tabuleiro

            for (int i = 0; i < 10; i++){
                for (int j = 0; j < 10; j++){
                    printf("%d  ", t[i][j]);
                    }
                printf("\n");
                }
            }
        
        break;
            
        case 2: {
             //Navios

            int coluna;
            int inicio;
            int tamanho;

            printf("\nQual coluna? (0 - 10): ");
                scanf("%d", &coluna);
            printf("\nQual o inicio? (0 - 10): ");
                scanf("%d", &inicio);
            printf("Qual o tamanho? (1 - 3): ");
                scanf("%d", &tamanho);

            for (int i = inicio; i < inicio + tamanho; i++) {
                t[i][coluna] = 1;
            }
        }

        break;

        case 3: {
            
            printf("Saindo...\n");
            return 0;
        }

    }
    }
}
