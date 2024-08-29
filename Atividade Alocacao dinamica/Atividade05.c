#include <stdio.h>
#include <stdlib.h>

int main(){
    int valor;
    
    do{
        printf("Digite um valor:");
        scanf("%d",&valor);
    }while(valor < 0);
    int *v;

     v = (int *)malloc(valor * sizeof(int));

     for (int i = 0; i < valor; i++) {
        printf("Digite um valor para o vetor:\n");
        scanf("%d", &v[i]);
        if (v[i] < 2)
        {
            i--;
        }
        
    }
    free(v);
}