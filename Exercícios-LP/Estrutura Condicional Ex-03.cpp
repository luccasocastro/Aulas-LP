#include <stdio.h>

/*
Faça um programa que receba 2 números e diga qual é o menor.
*/

int main(void){
	
	int n1,n2;
	
	printf("Insira dois numeros:");
	scanf("%d %d",&n1,&n2);
	
	if(n1 > n2){
		printf("\n %d eh maior que %d",n1,n2);
	}else{
		printf("\n %d eh menor que %d",n1,n2);
	}
	
	return(0);
}
