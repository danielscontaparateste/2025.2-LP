#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MX 10

void popularVetor(int *const, const unsigned);
void imprimirVetor(const int *const, const unsigned);
void somatorioPares(const int *const, const unsigned, int *const);

int main(){

    int *p;
    unsigned int qtd;
    puts("Digite a quantidade de elementos: ");
    scanf("%u",&qtd);

    if (!(p = malloc(qtd * sizeof(int)))){
        puts("Memória não disponível");
        exit(1);
    }

    srand(time(NULL));
    popularVetor(p, qtd);

    imprimirVetor(p, qtd);

    int s;
    somatorioPares(p, qtd, &s);

    printf("Somatório dos elementos pares: %d\n",s);

    return 0;
}

void popularVetor(int *const q, const unsigned t){
    for (int k=0; k<t; k++){
        *(q+k) = rand() % MX;
    }
}

void imprimirVetor(const int *const q, const unsigned t){
    for (int k=0; k<t; k++){
        printf("[%p] %d\n", q+k, *(q+k));
    }
}

void somatorioPares(const int *const q, const unsigned t, int *const ps){
    *ps = 0;
    for (int k=0; k<t; k++){
       if (!(*(q+k)%2)) *ps += *(q+k);
    }
}