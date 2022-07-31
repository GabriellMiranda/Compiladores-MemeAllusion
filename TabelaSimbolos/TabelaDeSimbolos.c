//
// Created by pedro on 08/07/2022.
//

#include "TabelaDeSimbolos.h"
void imprimirLinha(linhaTabela *linha){
    printf("|%-30s | %-20s | %-25s | %-10d |\n",linha->simbolo,linha->tipoSimbolo,linha->tipo, linha->linhaSimbolo);
}