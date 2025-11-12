#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 100

int main(){

    int **m = NULL;

    unsigned short int lin, col;
    puts("Digite a quantidade de linhas: ");
    scanf("%hu",&lin);

    puts("Digite a quantidade de colunas: ");
    scanf("%hu",&col);

    m = (int **) malloc(lin * sizeof(int *));
    if (!m){
        puts("Memória indisponível");
        exit(1);
    }

    for (int k=0; k<lin; k++){
        m[k] = malloc(col * sizeof(int));
        if (!m[k]){
           puts("Memória indisponível");
            exit(1);
        }   
    }

    for (int k=0; k<lin; k++){
        for (int j=0; j<col; j++){
            m[k][j] = rand() % MX;
        }
    }

    for (int k=0; k<lin; k++){
        for (int j=0; j<col; j++){
            printf("[%p] %d\t",&m[k][j], m[k][j]);
        }
    }

    // Desalocar memória.


    return 0;


}
