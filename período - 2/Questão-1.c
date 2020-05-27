/*1º) A UFPI realizou uma pesquisa com uma amostra 40 alunos para analisa quantas vezes um aluno frequenta a biblioteca por 
mês. Faça um algoritmo que calcula a frequência de respostas dos alunos. Esse programa deve ler um vetor de números inteiros
com os valores respondidos pelos alunos e a seguir imprimir a frequência de cada número de acordo o exemplo a seguir.*/

#include <stdio.h>
#define SIZE 41 // irei começa pelo o número 1
#define FREQUENCIA 11 // Também irei comoça pelo o número 1

int main(void){
    int res[SIZE]= { 0 }, freq[FREQUENCIA] = { 0 }, i;
    // Eu inicializei todos os array com 0
    for(i = 1; i < SIZE; i++){
        printf("Digite as 40 respostas:");
        scanf("%d",&res[i]);
    }
    // Peguei as respostas
    printf("\n");
    for(i = 1; i < SIZE; i++){
        ++freq[res[i]];
    }
    // Depois eu verifiquei quantos números estão repetindos no array 
    for( i = 1; i < FREQUENCIA; i++){
        printf("%d %d\n",i,freq[i]);
    }
    // E por fim, imprimir o resultado.
    return 0;
}
