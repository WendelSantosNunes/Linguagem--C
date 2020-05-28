/*3º) Faça um algoritmo que recebe o primeiro nome de uma pessoa com até 20 caracteres
todo em minúsculo e imprima esse nome todo em maiúsculo com cada letra separada por
um espaço. Por exemplo, o nome "wendel" deve ser impresso "W E N D E L" */

#include <stdio.h> 
#include <ctype.h> //  Essa biblioteca tem várias função de manipulação de string
#define SIZE 20 // Define o tamanho padrão do array 

int main(void){
   char nome[SIZE];
   int i = 0, tam = 0;

   printf("Digite o seu nome:"); // Informei o nome
   scanf("%20s",nome); 
   
   for(i = 0; nome[i] != '\0'; i++){ // verifiquei o tamanho e transformei em maiúscula
      tam++;
      nome[i] = toupper(nome[i]);
   }

   for( ; tam > 0 ; tam--){ // Estou colocando o espaço entre as letras
       nome[tam*2] = nome[tam]; 
       nome[(tam*2)-1] = ' ';
   }
   

   printf("%s\n",nome); // por fim imprimir o resultado
}

// Esse pergunta tem várias jeito de responder com função, mas também podemos resolver sem função.
// Para isso você utilizara a tabela ASCII.