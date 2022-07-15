//
// Created by pedro on 08/07/2022.
//

#ifndef TPCOMPILADORES_TABELADESIMBOLOS_H
#define TPCOMPILADORES_TABELADESIMBOLOS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define true 1
#define false 0

typedef struct{
    char *simbolo;
    char *tipoSimbolo;
    char *tipo;
    int linhaSimbolo;
}linhaTabela;

void imprimirLinha(linhaTabela *linha);

#endif //TPCOMPILADORES_TABELADESIMBOLOS_H
