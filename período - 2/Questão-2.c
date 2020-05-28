/*2º) Faça um algoritmo que mostra a forma que o personagem "Cebolinha" da turma da
Mônica fala, ou seja, troca a letra "r" por "l". Esse programa deve receber uma palavra de até
20 caracteres, realizar a referida troca e informar o número do(s) caractere(s) onde ocorre(m)
trocas, da seguinte forma:*/

#include <stdio.h>
#define SIZE 20 //Estou definido um tamanho padrão

int main(void){
   int vetor[SIZE] = {0}; // Estou inicializando o vetor com zero
   char nome[SIZE]; // Vetor de char não precisar ser inicializador
   int tam1 = 0, a = 0, tam2 = 1, i;
   
   printf("Informe uma palavra: "); // Estou informando o nome
   scanf("%20s",nome);
   
   for(i = 0;nome[i] != '\0'; i++){ // Estou verificando o tamanho do nome
   	   tam1++;
   } 

   for(i = 0; i < tam1; i++){ // Estou trocando 'r' por 'l', e também pegando a posição que foram trocados
   	   if(nome[i] == 'r'){
   	   	   nome[i] = 'l';
   	   	   vetor[a] = i; // Aqui estou pegando a posição
   	   	   a++;
   	   }
   }
    
   for(i = 1 ;vetor[i] != 0; i++){
   	   tam2++;
   } // Estou vericando quantas vezes foram trocandos 

   printf("Cebolinha falaria: %s\n",nome); // imprimindo o nome com as trocas 
   printf("Houve troca nos caracteres: "); // imprimindo o texto das posição das trocas
   
   if(vetor[i] != 0){
        for(i = 0; i < tam2; i++){ //E aqui estou imprimindo a posição
           if( i == 0){            
      	        printf("%d",vetor[i]+1);
           }else{
      	        printf(", %d",vetor[i]+1);
           }
      }
   }

   printf("\n");
   
   return 0;
}