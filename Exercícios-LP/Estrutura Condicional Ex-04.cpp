#include <stdio.h>

int main(void){
	
	int n1,n2,n3;
	printf("Digite 3 numeros:");
	scanf("%d %d %d",&n1,&n2,&n3);
	
	if(n1 > n2 && n1 > n3){
		printf("\n%d eh o maior",n1);
	}else if(n2 > n1 && n2 > n3){
		printf("\n%d eh o maior",n2);
	}else if(n3 > n2 && n3 > n1){
		printf("\n%d eh o maior",n3);
	}
	
	return(0);
}
