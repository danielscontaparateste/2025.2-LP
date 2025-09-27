#include <stdio.h>

int main(){

    int x, y;
    puts("Digite o início do intervalo: ");
    scanf("%d",&x);

    puts("Digite o fim do intervalo: ");
    scanf("%d",&y);

    int soma = 0;
    for (int k=x; k<=y; k++){
        if (!(k % 2)) soma+=k;
    }

    printf("Somatório Pares = %d\n",soma);

    return 0;
}