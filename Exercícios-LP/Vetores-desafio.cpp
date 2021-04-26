#include <stdio.h>

int main(void) {

int idade[5][13], ab_media[5];
float m_idade[5];

//Entradas
for(int j=0;j<=4; j++){
    for(int i=0; i >=12; i++){
        printf("Digite a idade:");
        scanf("%i", &idade[j][i]);
    }
}
//Média
for(int j=0;j<=4; j++){
    for(int i=0; i <=12; i++){
        m_idade[j] = (m_idade[j]+idade[j][i])/13;
    }
}
//Relatório
for(int j=0;j<=4; j++){
    for(int i=0; i <=12; i++){
        if(idade[j][i]<m_idade[j]){
            ab_media[j]++;
        }   
    }
printf("%i pessoas estão abaixo da media do grupo %i",ab_media[j], j);
}
}