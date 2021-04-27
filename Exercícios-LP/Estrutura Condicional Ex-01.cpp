#include <stdio.h>

/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a mensagem de aprovado, ou reprovado, considerando média de aprovação igual a 7
*/

int main(void){
	
	int n1,n2,n3,n4;
	float media;
	
	printf("Insira as quatro notas:");
	scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
	
	media=(n1+n2+n3+n4)/4;
	
	printf("\nMedia: %f",media);
	
	if(media >= 7.0){
		printf("\nO aluno foi aprovado!");
	}else{
		printf("\nO aluno foi reprovado");
	}
	
	return(0);
}
