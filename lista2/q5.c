// Exercício : alterar para que seja apresentado o valor do menor/maior na primeira iteração.

#include <stdio.h>

#define COD_EXIT 0

int main(){

    int menor, maior, x;

    int c = 0;
    do{
        puts("Digite um número");
        scanf("%d",&x);

        if (c){
            menor = (x < menor)?x:menor;
            maior = (x > maior)?x:maior;
            printf("Menor: %d\n",menor);
            printf("Maior: %d\n",maior);  
            puts("====") ;
        }else menor = maior = x;
        c++;
    }while(x!=COD_EXIT);

    // printf("Menor: %d\n",menor);
    // printf("Maior: %d\n",maior);

    return 0;

}