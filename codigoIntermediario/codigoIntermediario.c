#include "codigoIntermediario.h"

void iniciaLista(Lista *lista){
    lista->inicio = NULL;
    lista->fim = NULL;
    lista->tam = 0;
    lista->autoIncremento = 1;
}

void insereLista(Lista *lista,char *operacao,int isOperator){
    if(lista->fim == NULL){
        lista->inicio = (Pointer)malloc(sizeof(Tcelula));
        lista->fim = lista->inicio;
        lista->fim->esq = NULL;
    }

    else{
        Pointer aux = lista->fim;
        lista->fim->dir = (Pointer)malloc(sizeof(Tcelula));
        lista->fim = lista->fim->dir;
        lista->fim->esq = aux;
    }
    strcpy(lista->fim->string,operacao);
    lista->fim->var = NULL;
    lista->fim->isOperator = isOperator;
    lista->fim->dir = NULL;
    lista->tam++;
}

void percorrerLista(Lista* lista){
    Pointer aux = lista->inicio;
    while(aux != NULL){        
        if(aux->isOperator == 1){
            char *instrucao = (char*)malloc(100*sizeof(char));
            atualizarVar(aux->esq,lista);
            atualizarVar(aux->dir,lista);
            strcpy(instrucao,concat(lista->autoIncremento));
            strcat(instrucao,": ");
            strcat(instrucao,aux->esq->var);
            strcat(instrucao," ");
            strcat(instrucao,aux->string);
            strcat(instrucao," ");
            strcat(instrucao,aux->dir->var); 
            emiteInstrucao(instrucao);
            strcpy(aux->dir->var,concat(lista->autoIncremento));
            lista->autoIncremento++;
        }
        aux = aux->dir;
    }
}
char *concat(int valor){
    char *string = (char*) malloc(100*sizeof(char));
    strcpy(string,"T");
    char vr[100];
    sprintf(vr,"%d",valor);
    strcat(string,vr);
    return string;
}

char* trasnfNtoP(char* valor){
    char *eptr;
    double resultV = strtod(valor, &eptr);
    char *result = (char*) malloc(100*sizeof(char));
    sprintf(result,"%lf",resultV*(-1));
    return result;
}

void atualizarVar(Tcelula* cel,Lista* lista){
   if(cel->var == NULL){
        if(isNegative(cel->string)){
        char *instrucao = (char*)malloc(100*sizeof(char));
        strcpy(instrucao,concat(lista->autoIncremento));
        cel->var = (char*)malloc(strlen(instrucao)*sizeof(char));
        strcpy(cel->var,instrucao);
        strcat(instrucao,": minus ");
        strcat(instrucao,trasnfNtoP(cel->string));
        emiteInstrucao(instrucao);
        lista->autoIncremento++;
        }
        else{
            cel->var = (char*)malloc(strlen(cel->string)*sizeof(char));
            strcpy(cel->var,cel->string);
        }
   }
}

int isNegative(char *valor){
    int v = atoi(valor);
    return v < 0;
}
void imprime(Lista *lista){
    Pointer aux = lista->inicio;
    while (aux != NULL)
    {
        printf("%s ",aux->string);
        aux = aux->dir;
    }
}

void emiteInstrucao(char* instrucao){
    FILE *arquivo;
    arquivo = fopen("tresEndereco.txt", "a");
    fprintf(arquivo,"%s\n", instrucao);
    fclose(arquivo);
}