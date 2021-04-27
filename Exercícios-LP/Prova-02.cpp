#include <stdio.h>
#include <stdlib.h>

/*
Uma escola de idiomas mantém 6 turmas de no máximo 30 alunos em cada. Os alunos recebem 4
notas ao longo do ano, a média aritmética destas notas consiste na média final do aluno e a média
para aprovação é no mínimo 7,0 pontos. O aluno deve ter também no máximo 10 faltas, caso
contrário será reprovado por falta. Se o aluno tiver média final abaixo de 5,0 também será
reprovado. O aluno que não foi aprovado, nem reprovado, terá a chance de fazer uma prova
substitutiva. Elabore um programa em linguagem C que leia para cada aluno, seu nome, suas 4
notas, sua frequência e mostre os seguintes relatórios:
- Consulta por aluno:
Dado o número do aluno e de sua turma, mostre seu nome, suas notas, sua média final, sua
frequência e uma das mensagens: “Reprovado por falta”, “Reprovado por nota”, “Aprovado” ou
“Fará substitutiva”.
- Consulta por turma:
Dado o número da turma, mostre quantos alunos tem a turma, quantos tiveram média final acima de
8, quantos alunos tiveram algum zero em suas notas, quantos farão prova substitutiva e qual é a
média de notas geral da turma.
Após imprimir um relatório, deve ser possível ao usuário imprimir outro caso queira.
*/

int main(void){

int i,j,k,op,mfreq=100,cont,cont0,conts;
float n1[6][30],n2[6][30],n3[6][30],n4[6][30],media;
int freq[6][30],qntd[6];
char nome[6][30][15];

//Recolhendo notas, nome e frequencia
for(i=0;i<6;i++){
    printf("\tTurma %d:\n", i);
    printf("Informe a qntd de alunos da turma:");
    scanf("%d", &op);
    //qntd de alunos na turma
    qntd[i]=op;

    for(j=0;j<op;j++){
        printf("\nInforme o nome do aluno [%d][%d]:", i, j);
        scanf("%s", &nome[i][j]);

        printf("\nInforme as 4 notas do aluno [%d][%d]:\n", i, j);
        scanf("%f %f %f %f", &n1[i][j],&n2[i][j],&n3[i][j],&n4[i][j]);

        printf("\nInforme a qntd de faltas:");
        scanf("%d", &freq[i][j]);
    }
}
system("cls");

printf("\n\t1 -- Consulta por aluno\n\t2 -- Consulta por turma\n\t0 -- Sair\n");
scanf("%d", &op);
//caso seja 0, nao ira executar a resposta do menu
while(op != 0){
    switch(op){
        case 1:
        system("cls");
        printf("Informe o numero da turma e numero do aluno:");
        scanf("%d %d", &i, &j);

        printf("Seu nome: %s\n", nome[i][j]);
        printf("Sua nota 1: %.1f\nSua nota 2: %.1f\nSua nota 3: %.1f\nSua nota 4: %.1f\n", n1[i][j],n2[i][j],n3[i][j],n4[i][j]);
        printf("Sua media final: %.1f\n",(n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4);
        printf("Sua frequencia: %d\n", mfreq-freq[i][j]);

        if(freq[i][j] > 10){
            printf("Reprovado por falta!:(\n");
        }else if((n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 < 5.0){
            printf("Reprovado por nota!:(\n");
        }else if((n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 > 5.0 && (n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 < 7.0){
            printf("Fara prova substitutiva!:(\n");
        }else if((n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 >= 7.0 && freq[i][j] <= 10){
            printf("Aprovado!!:)\n");
        }
        break;

        case 2:
        system("cls");
        printf("Informe o numero da turma:");
        scanf("%d", &i);

        printf("\nO qntd de alunos da turma %d eh: %d\n", i, qntd[i]);

        //conta quantos alunos tem media acima de 8
        cont=0;
        for(j=0;j<qntd[i];j++){
            if((n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 > 8){
                cont=cont+1;
            }
        }
        printf("Numero de alunos que tiveram media acima de oito: %d\n", cont);

        //quantos alunos tiveram algum zero
        cont0=0;
        for(j=0;j<qntd[i];j++){
            if(n1[i][j] == 0 || n2[i][j] == 0 || n3[i][j] == 0 || n4[i][j] == 0){
                cont0=cont0+1;
            }
        }
        printf("Numero de alunos que tiveram algum zero em suas notas: %d\n", cont0);

        //quantos farao substitutiva
        conts=0;
        for(j=0;j<qntd[i];j++){
            if((n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 > 5.0 && (n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4 < 7.0){
                conts=conts+1;
            }
        }
        printf("Numero de alunos que farao substitutiva: %d\n", conts);

        //media geral da turma
        media=0;
        for(j=0;j<qntd[i];j++){
            media=media+(n1[i][j]+n2[i][j]+n3[i][j]+n4[i][j])/4;
        }
        printf("A media geral da turma eh: %.1f\n", media/qntd[i]);
        break;
        //caso seja digitado um numero diferente do menu
        default:
        printf("Opcao invalida.\n");
        break;

    }
    printf("\n\t1 -- Consulta por aluno\n\t2 -- Consulta por turma\n\t0 -- Sair\n");
    scanf("%d", &op);
}



}
