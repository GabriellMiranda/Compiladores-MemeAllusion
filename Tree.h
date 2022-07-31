//
// Created by pedro on 29/07/2022.
//

#ifndef ARVORESINTATICAABSTRATA_TREE_H
#define ARVORESINTATICAABSTRATA_TREE_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ERRO -111111111

typedef struct No{
   struct No *Esq,*Dir;
   char* caracter;
}No;

int isOp(char *caractere);
void imprimeTree(No *no);
void initNo(No **no);
void insertNo(No **no,char* op);
void criaNo(No **no,char* caracter,No *esq,No *dir);
int calcular(No *no);
int calculo(No *no);
int notNumber(char *caractere);

#endif //ARVORESINTATICAABSTRATA_TREE_H
