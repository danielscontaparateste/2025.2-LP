#include <stdio.h>

int main(){
    char x, y;
    char *px = &x, *py = &y;

    // A partir deste ponto, apenas manipulação com ponteiros.

    puts("Digite o valor de x: ");
    scanf("%hhd",px);

    *py = 2 * *px;

    printf("[%p] px = %p\n", &px, px);
    printf("[%p] py = %p\n", &py, py);
    printf("[%p] x = %d, %d\n", &x, x, *px);
    printf("[%p] y = %d, %d\n", &y, y, *py);

    return 0;
}