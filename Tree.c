//
// Created by pedro on 29/07/2022.
//

#include "Tree.h"

void initNo(No **no){
    *no = NULL;
}

void criaNo(No **no,char* caracter,No *esq,No *dir){
    *no = (No*)malloc(sizeof(No));
    (*no)->Esq = esq;
    (*no)->Dir = dir;
    (*no)->caracter = (char*) malloc(strlen(caracter)*sizeof(char));
    strcpy((*no)->caracter,caracter);
}

void insertNo(No **no,char* op){// depende da ordem com as quais as operações devem acontecer
    No *OP;
    initNo(&OP);
    criaNo(&OP,op,NULL,NULL);
    if(*no == NULL){
        *no = OP;
    }
    else{
        No *aux = *no;
        if(isOp(op)){
            OP->Esq = aux;
            *no = OP;
        }
        else if(isOp((*no)->caracter)){
            if((*no)->Esq == NULL){
                (*no)->Esq = OP;
            }
            else{
                (*no)->Dir = OP;
            }
        }
    }
}

void imprimeTree(No *no){
    if(no == NULL){
        printf("\nÁrvore vazia :(\n");
    }
    else{
        if(no->Esq != NULL)
            imprimeTree(no->Esq);
        printf("%s ",no->caracter);
        if(no->Dir != NULL) {
            imprimeTree(no->Dir);
        }
    }
}
int isOp(char *caractere){
    int inteiros[] = {42,43,45,47,60,61,62};
    int tam = 7;
    for(int i = 0;i<tam;i++){
        if(*caractere == inteiros[i]){
            return 1;
        }
    }
    return 0;
}
int notNumber(char *caractere){
    int valor = atoi(caractere);
    return valor == 0 && strcmp(caractere,"0") != 0;
}
int calculo(No *no){
    int valor = calcular(no);
    if(valor <= 0){
        printf("\nNão é possivel calcular!\n");
        return 0;
    }
    else{
        return valor;
    }
}
int calcular(No *no){
    int valor,valorEsq,valorDir;
    if(no == NULL){
        printf("\nÁrvore vazia :(\n");
        return 0;
    }
    else{
        if(no->Esq != NULL)
            valorEsq = calcular(no->Esq);
        if(no->Dir != NULL) {
            valorDir = calcular(no->Dir);
        }
        if(isOp(no->caracter)){
            switch (*no->caracter) {
                case '+':
                    valor = valorEsq + valorDir;
                    break;
                case '-':
                    valor = valorEsq - valorDir;
                    break;
                case '*':
                    valor = valorEsq * valorDir;
                    break;
                case '/':
                    valor = valorEsq / valorDir;
                    break;
                default:
                    valor = 0;
                    break;
            }
            return valor;
        }
        if(!isOp(no->caracter)){
            if(!notNumber(no->caracter))
                return atoi(no->caracter);
            else return ERRO;
        }
    }
}
