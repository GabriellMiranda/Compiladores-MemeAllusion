//
// Created by pedro on 11/07/2022.
//

#ifndef TPCOMPILADORES_ARVOREP_H
#define TPCOMPILADORES_ARVOREP_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "TabelaDeSimbolos.h"
#include "TabelaDeSimbolos.c"


typedef enum{
    interno,externo
}TipoDoNo;

typedef struct posicaoNo *NoDaArvore;

typedef struct posicaoNo{
    TipoDoNo tipo;

    union{
        struct{
            linhaTabela linha;
        }LinhaTabela;

        struct{

            char letraIndice;
            int posicao;
            NoDaArvore esquerda,direita;

        }NoInterno;

    }NoExterno;

}ArvorePatricia;


void iniciaArvore(NoDaArvore *no);
NoDaArvore CriarNoInterno(char letraIndice,int posicao,NoDaArvore *esquerda,NoDaArvore *direita);
NoDaArvore CriarNoExterno(linhaTabela linha);
int EExterno(NoDaArvore no);
int A_menor_Equal_B(char a, char b);
char caractere(int pos,char *palavra);
NoDaArvore InsereEntre(linhaTabela linha,NoDaArvore *no,int posicao,char letraNointerno);
void imprimeArvore(ArvorePatricia *no);
void imprimirTab(ArvorePatricia *no);
NoDaArvore Insere(linhaTabela linha,NoDaArvore *no);
void InserirNaArvore(linhaTabela linha,NoDaArvore *arvore);
void buscar(char* simbolo,NoDaArvore no,char *tipo);//imprime a palavra descripta
void adcSimb(NoDaArvore *no,char * tipo,char * yytext,int linha,char *tipoSimbolo);
int search(char *simbolo, NoDaArvore no);

#endif //TPCOMPILADORES_ARVOREP_H
