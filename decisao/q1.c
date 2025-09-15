#include <stdio.h>

int main(){
    unsigned char idade;

    // Entrada de Dados
    puts("Qual a idade da pessoa? ");
    scanf("%hhu",&idade);

    // Processamento e Saída

    if (idade < 16){
        puts("Não vota e não dirige");
    }else if (idade < 18){
        puts("Vota, mas não dirige");
    }else{
        puts("Vota e dirige");
    }

    return 0;
}