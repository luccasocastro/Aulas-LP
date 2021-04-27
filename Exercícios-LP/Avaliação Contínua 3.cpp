#include <stdio.h>

/*
Triagem de Pacientes:

Elabore um algoritmo que diga, segundo as regras abaixo, quais encaminhamentos um paciente terá ao chegar no pronto-socorro.

Se o paciente está com temperatura superior a 37,5C, deve ser encaminhado ao exame de sangue e urina. Se estiver com falta de ar, deve ser encaminhado para tomografia do pulmão. Se estiver com temperatura normal ou febre baixa (entre 35C a 37,5C), será encaminhado a consulta com clínico geral. Se o paciente estiver com temperatura inferior a 35C ou estiver desacordado, deve ser encaminhado à emergência. (Observe que um paciente pode ter mais de um encaminhamento por triagem. Não esqueça de avaliar o que é dependente e o que é independente).
*/
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
