#include <stdio.h>

/*
Ler 20 valores reais, somar cada valor lido com uma constante fornecida pelo usuário e,
logo após, mostrar os resultados.
*/

int main(void){

int i,cont;
float real[20],soma;

for(i=0;i<=19;i=i+1){
    soma=0;
    printf("Digite um numero: \n");
    scanf("%f", &real[i]);
}

printf("Informe uma constante para ser somada: \n");
scanf("%d", &cont);

for(i=0;i<=19;i=i+1){
    printf("%.1f + %d= %.1f\n",real[i],cont,real[i]+cont);
}

}