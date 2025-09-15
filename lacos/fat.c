#include <stdio.h>

int main(){

    int x;
    unsigned long int fat = 1;

    // Entrada de Dados
    puts("Digite o número ");
    scanf("%d",&x);

    // Processamento
    if(x < 0){
        puts("Não definido");
    }else{ //if (x>0){
        for (int k=1; k<=x; k++){
            fat *= k;
        }
        printf("Fatorial de %d = %lu\n", x, fat);
    } 
    // }else{
    //     fat = 1;
    // }

    




    return 0;
}