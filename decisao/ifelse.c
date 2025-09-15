#include <stdio.h>

int main(){
    int x; 
    int y;

    // Entrada de Dados
    puts("Digite o valor de x: ");
    scanf("%d",&x);

    puts("Digite o valor de y: ");
    scanf("%d",&y);

    // Processamento

    // if (x % 2) 
    //     puts("IMPAR");
    // else 
    //     puts("PAR");

    // if (!(x % 2)) 
    //     puts("PAR");
    // else 
    //     puts("IMPAR");
    
    // (x%2)?puts("IMPAR"):puts("PAR");

    // x = (!(x%2))?x+y:x-y;
    x += (!(x%2))?y:-y;

    printf("Resultado : %d\n",x);
    
    return 0;
}