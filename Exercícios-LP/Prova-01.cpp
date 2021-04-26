#include <stdio.h>

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