#include <stdio.h>
#include <stdlib.h>
int main(){
    int tamanho = 0;
    int *vetor = NULL;

    printf("Digite o tamanho do Vetor:\n");
    scanf("%d",&tamanho);

    vetor = (int *)malloc(tamanho * sizeof(int));

    for (int i = 0; i < tamanho; i++) {
        printf("Digite um valor:\n");
        scanf("%d", &vetor[i]);
    }for (int i = 0; i < tamanho; i++) {
        printf("%d", vetor[i]);
    }
    free(vetor);
}