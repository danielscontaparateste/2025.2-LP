#include <stdio.h>

int main(){
    int x;
    int y;

    puts("Digite um número: ");
    scanf("%d",&x);

    puts("Digite outro número: ");
    scanf("%d",&y);

    float resp = ((float) x) / y;

    printf("Resposta: %.3f\n",resp);


    return 0;
}