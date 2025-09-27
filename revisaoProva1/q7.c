#include <stdio.h>

int main(){

    int n = 3;

    int soma = 0, qmax, rmin;

    for (int k=0; k<n; k++){
        printf("Entre com a quantidade máxima de recursos do processo %d\n",k+1);
        scanf("%d",&qmax);
        soma += qmax -1;
    }

    rmin = soma + 1;

    printf("Quantidade mínima de recursos : %d\n\n",rmin);

    return 0;
}