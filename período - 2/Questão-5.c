/* 5º) Faça um programa que inicializa um vetor com números pares inteiros de 2 a 20. O vetor
deve ter a menor dimensão possível. A seguir imprima na tela esse vetor com a seguinte
formatação:
           Elemento                 Valor
             0                       2  
             1                       4 
             2                       6 
             *                       *
             9                       20 
*/   

#include <stdio.h>
#define SIZE 9 // Tamanho padrão(global)

int main( void ){
    // Eu inicializei o vetor
    int vetor[SIZE] = {0}, i , j = 0, n = 20; 

    // Eu preenchi o vetor com os números pares 
    for(i = 2; i <= n; i++){   
    	if( i % 2 == 0 ){ 
    		vetor[j] = i;
    		j++;
    	}
    }

    // E aqui eu imprimir o resultado
    printf("elementos      Valor\n");
    
    for(i = 0; i <= SIZE; i++){
    	printf("  %d               %d\n", i, vetor[i]);
    }

    return 0;
}