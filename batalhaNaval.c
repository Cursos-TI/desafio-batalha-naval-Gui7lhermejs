#include <stdio.h>


int main() {
    

    int t[10][10] = {0};
    int opcao;

    //Menu
    while(1) {

        printf ("\nBatalha Naval\n");
        printf ("   \nOpções\n");
        printf("\n1. Mostrar o Tabuleiro\n2. Adicionar Navio\n3. Sair\n\nQual opção?: ");
        scanf("%d", &opcao);

    switch(opcao){

        case 1: {
            //Mostra o tabuleiro
            printf("\n=-=-Tabuleiro-=-=\n");
            for (int num = 1; num <= 10; num++){
                printf("   %d", num);
            }
            
            printf("\n");

            for (int i = 0; i < 10; i++){
                printf("%c |", 'A' + i);
                for (int j = 0; j < 10; j++){
                    printf(" %d  ", t[i][j]);
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
            char direcao;

            printf("Qual coluna? (0 - 9): ");
                scanf("%d", &coluna);
            printf("Qual o inicio? (0 - 9): ");
                scanf("%d", &inicio);
            printf("Qual o tamanho? (1 - 3): ");
                scanf("%d", &tamanho);
            printf("Digite a direção do navio (v = Vertical // h - Horizontal): ");
                scanf(" %c", &direcao);

            for (int i = 0; i < tamanho; i++) {
                if (direcao == 'V' || direcao == 'v'){
                    if (inicio + i < 10){
                        t[inicio + i][coluna] = 1;
                    }
                    else{
                        printf("Posição invalida!!");
                    }
                }
                else if (direcao == 'h' || direcao == 'H'){
                    if (coluna + i < 10){
                        t[inicio][coluna + i] = 1;
                    }
                    else {
                        printf("Posição Invalida!!");
                    }
                }
                else {
                    printf("Opção invalida!!");
                }
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
