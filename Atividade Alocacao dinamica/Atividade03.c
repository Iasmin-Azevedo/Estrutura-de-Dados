#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char nome[50];
    int idade;
    char endereco[50];
}Cadastro;

Cadastro* ponteiro(int N){
    Cadastro* vetor = (Cadastro*)malloc(N * sizeof(Cadastro));

     for (int i = 0; i < N; i++) {
        printf("Digite os dados da pessoa %d:\n", i + 1);
        
        printf("Nome: ");
        fgets(vetor[i].nome, sizeof(vetor[i].nome), stdin);
        // Remove o caractere de nova linha no final do nome, se houver
        vetor[i].nome[strcspn(vetor[i].nome, "\n")] = '\0';
        
        printf("Idade: ");
        scanf("%d", &vetor[i].idade);
        // Limpa o buffer do teclado após a leitura de um inteiro
        getchar();
        
        printf("Endereço: ");
        fgets(vetor[i].endereco, sizeof(vetor[i].endereco), stdin);
        // Remove o caractere de nova linha no final do endereço, se houver
        vetor[i].endereco[strcspn(vetor[i].endereco, "\n")] = '\0';
        
        printf("\n");
    }

    return vetor;
}

int main(){

     int N;

    printf("Digite o número de cadastros: ");
    scanf("%d", &N);
    Cadastro* vetor = criarCadastro(N);

    free(vetor);

    return 0;
}