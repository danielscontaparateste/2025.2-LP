#include <stdio.h>

int main(){
    int a = 0, b = 0;
    
    // while (a<=5){
    //     while (b<=5){
    //         if (b==2) break;
    //         printf("%d %d \n", a, b);
    //         b++;
    //     }
        
    //     a++;
    // }
    // printf("Fora do laço :  %d %d\n", a, b);

    while (a<=5){
        b = 0;
        while (b<=5){
            if (b==2) break;
            printf("%d %d \n", a, b);
            b++;
        }
        
        a++;
    }
    printf("Fora do laço :  %d %d\n", a, b);

    return 0;

}