//
// Created by pedro on 08/07/2022.
//

#include "TabelaDeSimbolos.h"
void imprimirLinha(linhaTabela *linha){
    printf("|%-30s | %-20s | %-25s | %-10s |\n",linha->simbolo,linha->tipoSimbolo,linha->tipo, toString(linha->linhaSimbolo,linha->posVetorLinha+1));
}
char *toString(int *vetor,int tam){
    char *string = (char*) malloc(sizeof (tam*10));
    char caractere[vetor[0]];
    sprintf(caractere,"%d",vetor[0]);
    strcpy(string,caractere);
    if(tam >= 2) {
        strcat(string, ", ");
        for (int i = 1; i < tam; i++) {
            sprintf(caractere, "%d", vetor[i]);
            strcat(string, caractere);
            if (i != tam - 1)
                strcat(string, ", ");
        }
    }
    return string;
}