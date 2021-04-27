#include <stdio.h>

/*
Uma editora pretende fazer uma análise estatística sobre os dados de seus pedidos nos últimos
anos. Faça um algoritmo que receba como entrada, para cada pedido realizado no período, o
número de livros encomendados e, para cada livro, receba o seguimento do livro (Fundamental,
Médio ou Superior) e se o livro teve incentivo fiscal ou não. Para encerrar a coleta dos dados, será
digitado o código -1 na variável de entrada referente ao número de livros do pedido.
Após o encerramento das leituras, o algoritmo deve imprimir o seguinte relatório:
- Porcentagem de livros de cada seguimento,
- Número total de livros que não receberam incentivo fiscal,
- Média de livros por pedido no período.
- Quantos pedidos tiveram mais de 20 livros com incentivo fiscal,
- Quantos livros tinha o maior pedido.
*/

int main(void){

int nlivros,maior=0,cont,seg,fund=0,med=0,sup=0,op,qntd=0,pedido=0,incs=0,incn=0,cont_inc=0,media;

do{
    printf("\tInforme a qntd de livros encomendados:\n\t");
    scanf("%d", &nlivros);

    qntd=qntd+nlivros;

    if(nlivros != -1){
        pedido=pedido+1;
    }
    

    if(nlivros > maior){
        maior=nlivros;
    }

    for(cont=1;cont<=nlivros;cont++){
        printf("\tQual o seguimento do livro?\nFundamental[1]\tMedio[2]\tSuperior[3]\n\t");
        scanf("%d", &seg);

        if(seg == 1){
            fund=fund+1;
        }else if(seg == 2){
            med=med+1;
        }else{
            sup=sup+1;
        }

        printf("\tTeve incentivo fiscal?\n\tSim[1]\tNao[2]\n\t");
        scanf("%d", &op);

        if(op == 2){
            incn=incn+1;
        }else{
            incs=incs+1;
        }
    }
    
}while(nlivros != -1);

if(incs > 20){
    cont_inc=cont_inc+1;
}

 media=(qntd/pedido);


printf("\nQntd de livros do fundamental: %d", fund);
printf("\nQntd de livros do medio: %d", med);
printf("\nQntd de livros do superior: %d", sup);
printf("\nLivros que nao receberam incentivo fiscal: %d", incn);
printf("\nA media de livros por pedido: %d", media); 
printf("\nPedidos com mais de 20 livros com incentivo fiscal: %d", cont_inc);
printf("\nMaior numero de livros por pedido: %d", maior);
}