//
// Created by pedro on 08/07/2022.
//

#ifndef TPCOMPILADORES_TABELADESIMBOLOS_H
#define TPCOMPILADORES_TABELADESIMBOLOS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define TAM_VETOR_LINHAS_SIMBOLO 10

#define TRUE 1
#define FALSE 0

typedef struct{
    char *simbolo;
    char *tipoSimbolo;
    char *tipo;
    int linhaSimbolo[TAM_VETOR_LINHAS_SIMBOLO];
    int posVetorLinha;
}linhaTabela;

void imprimirLinha(linhaTabela *linha);
char *toString(int *vetor,int tam);

#endif //TPCOMPILADORES_TABELADESIMBOLOS_H
