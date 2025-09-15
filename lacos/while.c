#include <stdio.h>

// Exercício : Melhore esse código.

/* Requisitos: 
1. Não pode inicializar a variável maior valor pré-definido. 
2. A condição de saída precisa ser zero.
3. Não pode imprimir : O maior valor digitado é zero. 
4. Você pode explorar o do-while. 
*/

int main(){

    int numero, maior;
    
    puts("Entre com um valor: ");
    scanf("%d",&numero);
    maior = numero;
    
    while(numero){
        maior = (maior<numero)?numero:maior;
        printf("Maior valor digitado: %d\n", maior);
        
        puts("Entre com um valor: ");
        scanf("%d",&numero);

    }

    puts("Tchau!");

    return 0;

}