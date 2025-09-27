// Desligar

#include <stdio.h>

int main(){
    unsigned char a = 10;

    unsigned char p;

    puts("Qual posição deseja desligar? ");
    scanf("%hhu",&p);

    unsigned char mask = 0x01;

    mask = ~(mask << (p-1)); 

    unsigned char out = mask & a;

    printf("Input : %hhu\n",a);
    printf("Output : %hhu\n",out);


    return 0;
}