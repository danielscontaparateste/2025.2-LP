#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 20
#define MX 10

// Protótipo de Função
float somar(float, float);

int main(){
    float v[TAM];
    float *p = v; // float *p = &v[0];

    // Gerar o vetor
    srand(time(NULL));
    for (int k=0; k<TAM; k++){
        *(p+k) = ((float)rand()/RAND_MAX) * MX;
    }

    //Apresentar o vetor
    for (int k=0; k<TAM; k++){
        printf("[%p] %.2f\n",p+k,*(p+k));
    }

    // Buscar pelo maior e pelo menor elemento
    // float *pMaior = NULL;
    // float *pMenor = NULL;

    float *pMaior = p;
    for (int k=1; k<TAM; k++){
        pMaior = (*pMaior < *(p+k))?p+k:pMaior;
    }

    float *pMenor = p;
    for (int k=1; k<TAM; k++){
        pMenor = (*pMenor > *(p+k))?p+k:pMenor;
    }

    puts("=======");
    printf("End. do Maior Elemento: %p\n",pMaior);
    printf("End. do Menor Elemento: %p\n",pMenor);

    // Somar o maior e menor elemento
    // float res;
    // res = somar(*pMaior, *pMenor);
    float res = somar(*pMaior, *pMenor);

    puts("=======");
    printf("[%p] %.2f + [%p] %.2f = [%p] %.2f\n\n",pMaior, *pMaior, pMenor, *pMenor, &res, res);
    

    return 0;
}

float somar(float x, float y){
   return (x+y); 
}