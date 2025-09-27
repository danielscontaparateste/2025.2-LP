// Trocar o sinal

#include <stdio.h>

int main(){

    char x;
    puts("Entre com um número: ");
    scanf("%hhd",&x);

    char y = ~x + 1;

    printf("Output: %hhd\n\n",y);


    return 0;
}