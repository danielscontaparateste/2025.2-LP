#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10
#define MX 100

// Protótipo de Função
void popularVetor(float *, unsigned);
float *getMenorElemento(float *, unsigned);
float *getMaiorElemento(float *, unsigned);
void imprimirVetor(float *, unsigned);
void somar(float *, float *, float *);

int main(){
    float v[TAM];
    
    popularVetor(v, TAM);
    
    imprimirVetor(v, TAM);

    float *elementos[2]; // Endereços do menor e maior elementos. 

    // elementos[0] = getMenorElemento(v, TAM);
    *elementos = getMenorElemento(v, TAM);
    // elementos[1] = getMaiorElemento(v, TAM);    
    *(elementos+1) = getMaiorElemento(v, TAM);    

    puts("=======");
    printf("End. do Menor Elemento: %p\n",*elementos);
    printf("End. do Maior Elemento: %p\n",*(elementos+1));

    float res;
    // somar(elementos[1], elementos[0], &res);
    somar(*(elementos+1), *elementos, &res);
    
    puts("======= Usando Ref. para vetores ");
    printf("[%p] %.2f + [%p] %.2f = [%p] %.2f\n\n",*(elementos+1), *(*(elementos+1)), *elementos, **elementos, &res, res);
    

    return 0;
}

void popularVetor(float *p, unsigned tamanho){
    srand(time(NULL));
    for (int k=0; k<tamanho; k++){
        *(p+k) = ((float)rand()/RAND_MAX) * MX;
    }
}

void imprimirVetor(float *p, unsigned tamanho){
    for (int k=0; k<tamanho; k++){
        printf("[%p] %.2f\n",p+k,*(p+k));
    }
}

float *getMaiorElemento(float *p, unsigned tamanho){
    float *pMaior = p;
    for (int k=1; k<tamanho; k++){
        pMaior = (*pMaior < *(p+k))?p+k:pMaior;
    }
    return pMaior;
}

float *getMenorElemento(float *p, unsigned tamanho){
    float *pMenor = p;
    for (int k=1; k<tamanho; k++){
        pMenor = (*pMenor > *(p+k))?p+k:pMenor;
    }
    return pMenor;
}

void somar(float *pmax, float *pmin, float *r){
   *r = *pmax + *pmin;
}