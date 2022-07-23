#include "ArvoreP.h"

void iniciaArvore(NoDaArvore *no){
    *no = NULL;
}
void InserirNaArvore(linhaTabela linha,NoDaArvore *arvore){
    *arvore = Insere(linha,arvore);
}
NoDaArvore CriarNoInterno(char letraIndice,int posicao,NoDaArvore *esquerda,NoDaArvore *direita){
    NoDaArvore aux;
    aux = (NoDaArvore) malloc(sizeof (ArvorePatricia));
    aux->tipo = interno;
    aux->NoExterno.NoInterno.esquerda = *esquerda;
    aux->NoExterno.NoInterno.direita = *direita;
    aux->NoExterno.NoInterno.letraIndice = letraIndice;
    aux->NoExterno.NoInterno.posicao = posicao;
    return aux;
}
NoDaArvore CriarNoExterno(linhaTabela linha){
    NoDaArvore aux;
    aux = (NoDaArvore) malloc(sizeof (ArvorePatricia));
    aux->tipo = externo;
    aux->NoExterno.LinhaTabela.linha = linha;
    return aux;
}
char caractere(int pos,char *palavra){
    return palavra[pos];
}
int EExterno(NoDaArvore no){
    return no->tipo == externo;
}
int A_menor_Equal_B(char a, char b){
    return a <= b;
}
NoDaArvore InsereEntre(linhaTabela linha,NoDaArvore *no,int posicao,char letraNointerno){
    NoDaArvore noAtual;
    if(EExterno(*no)){
        noAtual = CriarNoExterno(linha);
        if(A_menor_Equal_B(caractere(posicao, linha.simbolo), caractere(posicao, (*no)->NoExterno.LinhaTabela.linha.simbolo)))
            return CriarNoInterno(letraNointerno,posicao,&noAtual,no);
        else return CriarNoInterno(letraNointerno,posicao,no,&noAtual);
    }
    else if(posicao < (*no)->NoExterno.NoInterno.posicao){
        noAtual = CriarNoExterno(linha);
        if(A_menor_Equal_B(caractere(posicao, linha.simbolo), letraNointerno))
            return CriarNoInterno(letraNointerno,posicao,&noAtual,no);
        else return CriarNoInterno(letraNointerno,posicao,no,&noAtual);
    }
    else{
        if(A_menor_Equal_B(caractere((*no)->NoExterno.NoInterno.posicao, linha.simbolo),
                           (*no)->NoExterno.NoInterno.letraIndice))
            (*no)->NoExterno.NoInterno.esquerda = InsereEntre(linha,&(*no)->NoExterno.NoInterno.esquerda,posicao,letraNointerno);

        else
            (*no)->NoExterno.NoInterno.direita = InsereEntre(linha,&(*no)->NoExterno.NoInterno.direita,posicao,letraNointerno);
    }
    return (*no);
}
NoDaArvore Insere(linhaTabela linha,NoDaArvore *no){
    if(*no == NULL){
        return CriarNoExterno(linha);
    }
    else{
        NoDaArvore noAtual = *no;
        char letra;
        while (!EExterno(noAtual)){
            if(noAtual->NoExterno.NoInterno.posicao >= strlen(linha.simbolo)){
                letra = caractere((int)strlen(linha.simbolo)-1,linha.simbolo);
            }
            else letra = caractere(noAtual->NoExterno.NoInterno.posicao,linha.simbolo);

            if(A_menor_Equal_B(letra, noAtual->NoExterno.NoInterno.letraIndice))
                noAtual = noAtual->NoExterno.NoInterno.esquerda;

            else noAtual = noAtual->NoExterno.NoInterno.direita;
        }
        int i = 0;
        char letraDifere;
        while (caractere(i,linha.simbolo) == caractere(i,noAtual->NoExterno.LinhaTabela.linha.simbolo))
            i++;
        if(search(linha.simbolo, *no)){
            return *no;
        }
        else {
            if (caractere(i, linha.simbolo) <= caractere(i, noAtual->NoExterno.LinhaTabela.linha.simbolo))
                letraDifere = caractere(i, linha.simbolo);

            else letraDifere = caractere(i, noAtual->NoExterno.LinhaTabela.linha.simbolo);

            return InsereEntre(linha, no, i, letraDifere);
        }
    }
}

void buscar(char* simbolo,NoDaArvore no,char *tipo){
    if(no != NULL){
        if (EExterno(no)) {
            if (strcmp(simbolo, no->NoExterno.LinhaTabela.linha.simbolo) == 0)
                strcpy(tipo,no->NoExterno.LinhaTabela.linha.tipo);
            else strcpy(tipo,"");
        }
        else {
            if (A_menor_Equal_B(caractere(no->NoExterno.NoInterno.posicao, simbolo),
                                no->NoExterno.NoInterno.letraIndice))
                buscar(simbolo, no->NoExterno.NoInterno.esquerda,tipo);
            else buscar(simbolo, no->NoExterno.NoInterno.direita,tipo);
        }
    }
}

int search(char *simbolo, NoDaArvore no){
    if(no != NULL){
        if (EExterno(no)) {
            if (strcmp(simbolo, no->NoExterno.LinhaTabela.linha.simbolo) == 0)
               return true;
            else return false;
        }
        else {
            if (A_menor_Equal_B(caractere(no->NoExterno.NoInterno.posicao, simbolo),
                                no->NoExterno.NoInterno.letraIndice))
               return search(simbolo, no->NoExterno.NoInterno.esquerda);
            else return search(simbolo, no->NoExterno.NoInterno.direita);
        }
    }
}

void imprimeArvore(ArvorePatricia *no){
    if(EExterno(no))imprimirLinha(&no->NoExterno.LinhaTabela.linha);
    else{
        imprimeArvore(no->NoExterno.NoInterno.esquerda);
        imprimeArvore(no->NoExterno.NoInterno.direita);
    }
}
void imprimirTab(ArvorePatricia *no){
    printf("\n");
    printf("_________________________________________________________________________________________________\n");
    printf("|                                      Tabela de símbolos                                       |\n");
    printf("_________________________________________________________________________________________________\n");
    printf("|             Simbolo           |    Tipo do Simbolo   |            Tipo           |  Nº Linha  |\n");
    imprimeArvore(no);
    printf("_________________________________________________________________________________________________\n");
}

void adcSimb(NoDaArvore *no,char * tipo,char * yytext,int linha,char *tipoSimbolo){
    linhaTabela *linhaT = (linhaTabela *) malloc(sizeof(linhaTabela));
    linhaT->linhaSimbolo = linha;
    linhaT->tipo = (char*) malloc(sizeof(tipo));
    linhaT->simbolo = (char *) malloc(sizeof (yytext));
    linhaT->tipoSimbolo = (char *) malloc(sizeof (tipoSimbolo));
    strcpy(linhaT->tipo, tipo);
    strcpy(linhaT->simbolo, yytext);
    strcpy(linhaT->tipoSimbolo, tipoSimbolo);
    InserirNaArvore(*linhaT,no);
}