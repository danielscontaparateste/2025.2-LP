#include <stdio.h>

#define TAM 10

int main(){

    char str[TAM];
    int idade;

    puts("Qual a sua idade? ");
    scanf("%d",&idade);

    getchar();

    puts("Qual o seu nome?");
    fgets(str, TAM, stdin);

    // gets(str);

    printf("Nome= %s e idade = %d\n",str, idade);

    return 0;

}