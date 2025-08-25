#include <stdio.h>

/*
Comentários de múltiplas
linhas
*/

// Comentário de linha

int main(){
    char y = 'a';
    // char x = 10;

    long int z = 30;

    unsigned h = 100;

    float f = 1.23;


    printf("y = %d\n",y);
    printf("z = %ld\n",z);
    printf("h = %u\n",h);
    printf("f = %f\n",f);

    printf("Qtd. de bytes de y (char) = %lu byte(s)\n", sizeof(y));
    printf("Qtd. de bytes de z (long int) = %lu byte(s)\n", sizeof(z));
    printf("Qtd. de bytes de h (unsigned) = %lu byte(s)\n", sizeof(h));
    printf("Qtd. de bytes de f (float) = %lu byte(s)\n", sizeof(f));

    printf("Qtd. de bytes de (double) = %lu byte(s)\n", sizeof(double));

    // printf("x = %c\n",x);
    
    return 0;
}