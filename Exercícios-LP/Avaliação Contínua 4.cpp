#include <stdio.h>

/*
Um grupo de alunos coletou informações climáticas de uma determinada cidade. Foram
realizadas várias medições de temperatura durante o ano e medições mensais do índice
pluviométrico. Elabore um algoritmo que, dadas estas informações, mostre a média anual de
temperatura e a média anual de índice pluviométrico.
*/

int main(void){
	
	int i=0,temp,final=0,op;
	int pjan,pfev,pmar,pabr,pmai,pjun,pjul,pago,pset,pout,pnov,pdez;
	float mediat,mediap;
	
	do{
		printf("Informe a temperatura:");
		scanf("%d",&temp);
		
		i=i+1;
		final=final+temp;
		printf("Continuar? SIM[1] NAO[0]");
		scanf("%d",&op);	
	}while(op == 1);
	
	mediat=(final)/i;
	
	printf("Informe o indice pluviometrico de janeiro ate dezembro:\n");
	scanf("%d %d %d %d %d %d %d %d %d %d %d %d",&pjan,&pfev,&pmar,&pabr,&pmai,&pjun,&pjul,&pago,&pset,&pout,&pnov,&pdez);
	
	mediap= (pjan+pfev+pmar+pabr+pmai+pjun+pjul+pago+pset+pout+pnov+pdez)/12;
	
	printf("A media de temperatura eh: %0.1f C\n",mediat);
	printf("A media pluviometrica anual eh: %0.1f mm",mediap);
}
