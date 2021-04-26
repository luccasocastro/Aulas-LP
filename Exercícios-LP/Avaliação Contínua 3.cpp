#include <stdio.h>
int main(void){
	
	float temp;
	char ar,awake,op;
	printf("\t TRIAGEM DE PACIENTES\n\n");
	
	printf("O paciente esta acordado?\n");
	scanf("%s",&awake);
	
	printf("Informe a temperatura do paciente:\n");
	scanf("%f",&temp);
	
	printf("O paciente sente falta de ar?\n");
	scanf("%s",&ar);
	
	if(temp > 37.5){
		printf("\nFaca exame de sangue e de urina");
	}else if(temp > 35 && temp < 37.5){
		printf("\nConsulte com um Clinico Geral");
	}
	
	if(ar != 'n'){
		printf("\nFaca Tomografia do pulmao\n");
	}
	
	if(awake=='n' || temp < 35){
		printf("\nDirija-se para emergencia!!\n");
	}
}
