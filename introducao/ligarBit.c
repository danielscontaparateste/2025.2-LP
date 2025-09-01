/* Exercício (01/09) : A partir deste código, construa uma versão para desligar um 
bit em uma posição fornecida pelo usuário. */

#include <stdio.h>

int main(){
    unsigned char cod = 219; //     1101 1011
    unsigned char pos;
    unsigned char mask = 0x01; //   0000 0001

    // Ligar 
    puts("Digite a posição que deseja ligar: ");
    scanf("%hhu",&pos);

    //Processamento
    pos = pos - 1;
    mask = mask << pos;
    // mask <<= (pos-1);
    // cod = cod | mask; 
    cod |= mask;

    printf("Código atualizado: %hhu\n",cod);
    
    return 0;
}