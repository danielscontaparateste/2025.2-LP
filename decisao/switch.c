#include <stdio.h>

int main(){
    int x; 
    int y;
    
    // Entrada de Dados
    puts("Digite o valor de x: ");
    scanf("%d",&x);

    puts("Digite o valor de y: ");
    scanf("%d",&y);

    puts("Digite uma das opções a seguir: ");
    puts("1. Somar");
    puts("2. Subtrair");
    puts("3. Multiplicar");
    puts("4 ou 5. Dividir");

    int op;
    scanf("%d",&op);


    // Processamento e Saída
    switch(op){

        case 1:
            printf("%d + %d = %d\n\n",x,y,x+y);
        break;
        case 2:
            printf("%d - %d = %d\n\n",x,y,x-y);
        break;    
        case 3:
            printf("%d * %d = %d\n\n",x,y,x*y);
        break;
        case 4:
        case 5:
            y?printf("%d / %d = %.2f\n\n",x,y,((float)x)/y):puts("Erro!");
        break;
        default:
            puts("Opção Inválida");
    }

    
    
    return 0;
}