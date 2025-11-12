/*
 1. Remover as indexações e usar apenas deslocamento (aritmética) de ponteiros
 2. Construir funções para modularizar o código.
 3. Mostrar também o somatório da diagonal secundária.
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

int main(int argc, char **argv){

    if (argc != 2){
        printf("Use: \n\t\t %s <dimensao>\n\n",*argv);
        exit(1);
    }

    int dim = atoi(*(argv+1));

    // Alocar Memoria
    int **m = NULL;
    
    if (!(m = (int **) malloc(dim * sizeof(int *)))){
        puts("Memória indisponível");
        exit(2);
    }

    for (int k = 0; k<dim; k++){
        if (!(m[k] = (int *) malloc(dim * sizeof(int)))){
            puts("Memória indisponível");
            exit(3);
        }
    }

    // Preencher os dados
    srand(time(NULL));
    for (int k=0; k<dim; k++){
        for (int j=0; j<dim; j++ ){
            m[k][j] = rand() % MX;
        }
    }

    // Exibir Matriz
    for (int k=0; k<dim; k++){
        for (int j=0; j<dim; j++ ){
            printf("[%p] %d\t",&m[k][j], m[k][j]);
        }
        printf("\n");
    }

    // Somatorio da Diagonal Principal
    int sum = 0;

    for (int k=0; k<dim; k++){
        sum += m[k][k];
    }

    // Desalocar Memória
    for (int k = 0; k<dim; k++){
        free(m[k]);
    }

    free(m);

    // Saída
    printf("\n\n **Somatório da diagonal principal = %d\n\n",sum);

    

    return 0;
}