#include <stdio.h>

int main(){
    // unsigned char x = 255;
    unsigned char x = 0b11111111;

    x = x + 3;

    printf("x = %hhu\n",x);

    return 0;
}