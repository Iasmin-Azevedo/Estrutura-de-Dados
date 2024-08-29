#include <stdio.h>
#include <stdlib.h>

struct Aluno
{
    int matricula;
    char nome;
    float n1;
    float n2;
    float n3;
};


int main(){

struct Aluno aluno;

int tamanho = 0;
tamanho = (int)sizeof(struct Aluno);

printf("Tamanho da struct: %d",tamanho);
}