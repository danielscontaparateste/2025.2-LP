#include <stdio.h>

int main(){
    
    // Laço Infinito
    // int i = 1;
    // while(i <= 10){
    //     if (i % 2 == 0)
    //         continue;
    //     printf("%d\n", i );
    //     i++;
    // }

    // Solução 1
    // int i = 0;
    // while(i < 10){
    //     i++;
    //     if (i % 2 == 0)
    //         continue;
    //     printf("%d\n", i );
    // }

    // Solução 2
    int i = 1;
    while(i <= 10){
        if (i % 2 == 0){
            i++;
            continue;
        }
        printf("%d\n", i );
        i++;
    }

    return 0;
}