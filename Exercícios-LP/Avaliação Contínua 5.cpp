#include <stdio.h>
#include <stdlib.h>

int main(void){

int i,idade[50],soma=0,abaixo=0,midade=0,maior;
float media=0;

for(i=0;i<50;i++){
    printf("Informe a idade:");
    scanf("%d", &idade[i]);
}

//media idades
for(i=0;i<50;i++){
    soma=soma+idade[i];
}

media=(float)soma/50;

//idade abaixo da media
for(i=0;i<50;i++){
    if(idade[i] < media){
        abaixo=abaixo+1;
    }
}

//menor de idade
for(i=0;i<50;i++){
    if(idade[i] < 18){
        midade=midade+1;
    }
}

//maior idade
maior=idade[0];
for(i=1;i<50;i++){
    if(idade[i] > maior){
        maior=idade[i];
    }
}

printf("A media das idades eh: %.1f\n", media);
printf("Numeros de idades abaixo da media: %d\n", abaixo);
printf("Menores de idade: %.1f%%\n", (float)midade*100/50);
printf("A idade do mais velho eh: %d\n", maior);



}