#include <stdio.h>
#include <stdlib.h>

#ifndef ARVORE_REPETIDO
#define ARVORE_REPETIDO

//Definição de tipo
struct estruturaArvore{
    int dado;
    struct estruturaArvore *esq;
    struct estruturaArvore *dir;

};
typedef struct estruturaArvore tipoArvore;

//Prototipos das funções
int insereArvore(tipoArvore **arv,int valor);
int buscaArv(tipoArvore *arv, int valor);
tipoArvore* alocaNo(int valor);
void imprimePreOrdem(tipoArvore *arv);
int insereArvore2(tipoArvore **arv,int valor);

int insereArvore(tipoArvore **arv,int valor){
    int cont = 0;
    if(*arv == NULL){
        *arv = alocaNo(valor);
        cont++;//contagem
    }else{
        if( valor < ((*arv)->dado)  ){
            insereArvore((&(*arv)->esq),valor);
            cont++;//contagem

        }else if(valor > (*arv)->dado){
            insereArvore(&(*arv)->dir,valor);
            cont++;//contagem
        }

    }
    return cont;
}


int insereArvore2(tipoArvore **arv,int valor){
    int cont = 0;
    if(*arv == NULL){
        *arv = alocaNo(valor);
        cont++;//contagem
    }else{
        if( valor < ((*arv)->dado)  ){
            insereArvore((&(*arv)->esq),valor);
            cont++;//contagem

        }else if(valor > (*arv)->dado){
            insereArvore(&(*arv)->dir,valor);
            cont++;//contagem
        }

    }
    return cont;
}

int buscaArv(tipoArvore *arv, int valor){
    if(arv != NULL){
        if(valor == arv->dado)
            return 1;
        else if(valor < arv->dado)
            return buscaArv(arv->esq,valor);
        else
            return buscaArv(arv->dir,valor);
    }
    return 0;

}


//Função que realiza a alocacao
tipoArvore* alocaNo(int valor){
    tipoArvore *novoNo;

    novoNo = novoNo = (tipoArvore*) malloc(sizeof(tipoArvore));
    if(novoNo){
        novoNo->dado = valor;
        novoNo->dir = NULL;
        novoNo->esq = NULL;
    }
    return novoNo;

}

//Função qeu implenta a impressão da arvore com base em um percursso pre-ordem
void imprimePreOrdem(tipoArvore *arv){
    if(arv != NULL){
        printf("[%d]",arv->dado);
        imprimePreOrdem(arv->esq);
        imprimePreOrdem(arv->dir);
    }


}




#endif
