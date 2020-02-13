#include <stdio.h>
#include <stdlib.h>

#define N 5
/* Considere que foram construidas duas arvores binarias distintas, em momentos diferentes. Implemente uma função que verifique
se as duas arvores (passadas como parametro) são identicas,ou seja, possuem os memsmos valores.

*/


//inclusão do arquivo que executa o algoritmo
#include "arvore_iguais.c"
int main(){
    int i;
    tipoArvore *arv;//primeira arvore
    tipoArvore *arv2;//segunda arvore
    arv = NULL;//inicialização
    arv2 = NULL;//inicialização da segunda arvore

    //inserções para a primeira arvore
    insereArvore(&arv,50);
    insereArvore(&arv,20);
    insereArvore(&arv,70);

    //inserções para a segunda arvore
    insereArvore2(&arv2,50);
    insereArvore2(&arv2,20);
    insereArvore2(&arv2,70);


/*
    for(i = 0; i < N; i++){

        //primeria coisa fazer o teste se a quantidade de elementos é igual da outra arvore
        if()

        if((buscaArv(arv,aux)) == 1){
            printf("\nElemento repetido\n");
        }else{
            insereArvore(&arv,aux);
            printf("\n\n");
//imprimePreOrdem(arv);
        }
         imprimePreOrdem(arv);
    }
    */
    return 1;
}
