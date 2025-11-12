#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void popularVetor(int *const, const unsigned, const int);
void imprimirMatriz(const int *const, const unsigned, const unsigned);

int main(){

    int *p = NULL;

    unsigned short int lin, col;
    puts("Digite a quantidade de linhas: ");
    scanf("%hu",&lin);

    puts("Digite a quantidade de colunas: ");
    scanf("%hu",&col);

    p = (int *) malloc(lin * col * sizeof(int));
    if (!p){
        puts("Memória insuficiente");
        exit(1);
    }

    srand(time(NULL));
    popularVetor(p, lin * col, 100);
    imprimirMatriz(p, lin, col);

    unsigned short l, c;
    puts("Qual a linha do elemento que deseja: ");
    scanf("%hu",&l);
    puts("Qual a coluna do elemento que deseja: ");
    scanf("%hu",&c);

    printf("[%p] elemento(%hu,%hu) = %d\n\n",p + (l*col)+c, l, c, *(p + (l*col)+c) );

    free(p);

    return 0;

}

void popularVetor(int *const p, const unsigned tamanho, const int mx){
    for (int k=0; k<tamanho; k++){
        *(p+k) = rand() % mx;
    }
}

void imprimirMatriz(const int *const p, const unsigned lin, const unsigned col){
    for (int k=0; k<lin*col; k++){
        printf("[%p] %d\t",p+k, *(p+k));
        if ( (k+1)%col == 0){
            printf("\n");
        }
    }
}


