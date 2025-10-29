#include <stdio.h>
#include <string.h>

#define TAM 30

int main(){
    char str[TAM];

    puts("Digite o seu nome");
    fgets(str, TAM, stdin);

    unsigned k=0;
    while(str[k]!='\0'){
        k++;
    }

    

    printf("*Quantidade de Caracteres (contagem) : %u\n",k);
    printf("Quantidade de Caracteres (strlen) : %lu\n",strlen(str));
    
    return 0;
}