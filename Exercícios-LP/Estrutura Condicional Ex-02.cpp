#include <stdio.h>

/*
Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra na tabela a seguir:
0,0 até 3,0= reprovado
3,0 até 7,0= exame
7,0 até 10,0= aprovado
*/

int main(void){
	
	int n1,n2;
	float media;
	printf("Insira a nota 1:\n");
    scanf("%d",&n1);
    
    printf("Insira a nota 2:\n");
    scanf("%d",&n2);
    
	
	media=(n1+n2)/2;
	
	if(media >= 7.0){
		printf("\nO aluno foi aprovado!");
	}else if(media > 3.0 && media < 7.0){
		printf("\nO aluno fara um exame");
	}else{
		printf("\nO aluno foi reprovado!");
	}
		
 return(0);
}
