#include <stdio.h>

/*
Ler a idade de 13 pessoas, mostrar a média das idades, o número de pessoas com idade
abaixo da média e o número de menores de idade.
*/

int main(void){

int idade[13], i,cont=0,media;

for(i=0;i<=12;i++){
    printf("Informe a idade: \n");
    scanf("%d", &idade[i]);

    cont=cont+idade[i];
}
media=cont/13;

printf("\nA media das idades eh: %d\n", media);
}