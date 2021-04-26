#include <stdio.h>
#include <string.h>

int main(void){

int num[10], i;

for(i=0;i<=9;i=i+1)
{
    printf("Digite um numero: \n");
    scanf("%d", &num[i]);
}

for(i=0;i<=9;i=i+1){
    printf("O valor: %d\n", num[i]);
}
}