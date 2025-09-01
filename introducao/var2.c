#include <stdio.h>

int main(){
    int x = 5;

    int y = 2;

    int resp;
    
    y += 3; // y = y + 3;

    // resp = x++ + y;
    resp = --x + y;

    printf("x = %d\ny = %d\nresp = %d\n\n",x, y, resp);


    return 0;
}