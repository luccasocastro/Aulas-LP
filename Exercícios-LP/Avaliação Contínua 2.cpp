#include <stdio.h>

int main(void){
	
	float horas_trab,salario_min,horas_extra,salario_bruto,valor_hora,valor_he,add_he,salario_final;
	
	printf("Informe suas horas trabalhadas:\n");
	scanf("%f",&horas_trab);
	
	printf("Informe o valor do salario minimo:\n");
	scanf("%f",&salario_min);
	
	printf("Informe suas horas extras trabalhadas:\n");
	scanf("%f",&horas_extra);
	
	valor_hora=(salario_min*0.125);
	salario_bruto=(horas_trab*valor_hora);
	valor_he=(salario_min*0.25);
	add_he=(horas_extra*valor_he);
	salario_final=(salario_bruto+add_he);
	
	printf("Seu salario bruto: %0.3f\n",salario_bruto);
	printf("O valor a receber pelas horas extras: %0.3f\n",add_he);
	printf("Seu salario final eh: %0.3f",salario_final);
	
	
}
