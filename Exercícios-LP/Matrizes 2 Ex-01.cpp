#include <stdio.h>
#include <stdlib.h>

/*
1) Considere uma cidade pequena que tem 5 postos de saúde, numerados como 0, 1, 2, 3 e 4. Estes
postos aplicaram vacinas para covid durantes os vinte primeiros dias do mês de janeiro e
registraram o número de vacinas aplicadas a cada dia.
Faça um programa em linguagem C que leia o número de vacinas aplicadas a cada dia nos 5 postos
e mostre um dos seguintes relatórios:
- Por posto: dado o número do posto, mostre o número total de vacinas aplicadas neste posto.
- Por dia: dado o dia, mostre o número total de vacinas aplicadas neste dia.
- Por mês: mostre o número total de vacinas aplicadas no mês de janeiro.
*/

int main(void){

int i,j,k,total=0,op,cont=0;
int posto[5][20][4];

for(k=0;k<4;k++){
    printf("Mes %d\n", k);
    for(i=0;i<5;i++){
        printf("Posto %d\n", i);
        for(j=0;j<20;j++){
            printf("Numero de vacinas aplicadas no dia: ");
            scanf("%d", &posto[i][j][k]);
        }
    }
}
system("cls");

printf("\n1 -- Por posto\n2 -- Por dia\n3 -- Por mes\n0 -- Sair\n");
scanf("%d", &op);

while(op != 0){
switch(op){

    case 1:
    printf("\ninforme o numero do posto:\n");
    scanf("%d", &i);

    for(k=0;k<4;k++){
        for(j=0;j<20;j++){
            total=total+posto[i][j][k];
        }
    }
    printf("\nO posto %d aplicou %d vacinas.\n", i, total);
    break;

    case 2:
    printf("\nInforme o dia: ");
    scanf("%d", &j);

    total=0;
    for(k=0;k<4;k++){
        for(i=0;i<5;i++){
            total=total+posto[i][j][k];
        }
    }
    printf("\nNeste dia foram aplicadas %d vacinas", total);
    break;

    case 3:
    printf("\nInforme o mes: ");
    scanf("%d", &k);

    for(i=0;i<5;i++){
        for(j=0;j<20;j++){
             cont=cont+posto[i][j][k];
        }
    }
    
    printf("\nO total de vacinas aplicadas no mes: %d", cont);
    break;
}
printf("\n1 -- Por posto\n2 -- Por dia\n3 -- Por mes\n0 -- Sair\n");
scanf("%d", &op);
}


}