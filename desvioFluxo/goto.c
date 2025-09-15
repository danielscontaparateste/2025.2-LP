#include <stdio.h>

int main(){

    int i = 10;

    rot: 
        i--;
    
    if (i) {
        printf("%d\n",i);
        goto rot;    
    }    
    return 0;

}