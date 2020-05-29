/* 4º) Faça um algoritmo para mostrar números duplicados. Use um array de subscrito único (ou
seja, um vetor) para ler 10 números, cada um entre 10 e 100, inclusive. À medida que cada
número for lido, imprima-o apenas se ele não for uma duplicata de um número já lido.
Considere a "pior das hipóteses": os 10 números são diferentes. Use o menor array possível
para resolver o problema.*/

#include <stdio.h>
#define SIZE 10 //Define o tamanho padrão para meu array

int main( void ){
   int vetor[SIZE]={0}, i , j, tam = 0; // Eu inicializei o array com 0

   for(i = 0; i < SIZE;i++){ 
   	    // Estou pegando os 10 números e verificando se estão entre 10 e 100
   	    do{
           printf("Digite 10 números:\n");
           printf("O %d número:",i+1);
           scanf("%d",&vetor[i]);
   	    }while(vetor[i] < 10 || vetor[i] > 100);
        // Estou imprimindo a primeiro número  
        if(i == 0){
             printf("%d\n",vetor[i]);
        }
        // Estou verificando se não tem nenhum número repetido
        for(j = 0; j < i; j++){
            if(vetor[i] != vetor[j]){
                 tam++; 
            }     
        }
        // E por fim irei imprimir o número se não tiver repetido
         if(i != 0){ // isso é para não executar o primeiro número
            if(i == tam){
                 printf("%d\n",vetor[i]);
            }
        }    
          
        tam = 0; 
   }
   return 0;
}