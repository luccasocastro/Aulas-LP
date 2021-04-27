#include <stdio.h>

/*
Ler 15 números inteiros, mostrar o maior deles e mostrar esses números em ordem inversa
da leitura.
*/

int main(void){

int num[15], i,maior=0;

printf("informe um numero: \n");
scanf("%d", &num[0]);
maior=num[0];

for(i=1;i<=14;i=i+1){
    printf("Informe um numero: \n");
    scanf("%d", &num[i]);

    if(num[i]>maior){
        maior=num[i];
    }
}

printf("\nO maior numero eh: %d\n\n",maior);

for(i=14;i>=0;i--){
    printf("%d\n", num[i]);
}
}