#ifndef CODIGO_INTERMEDIARIO
#define CODIGO_INTERMEDIARIO
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct celLista * Pointer;

typedef struct celLista{
    struct celLista *esq,*dir;
    char string[100]; 
    char *var;
    int isOperator;
}Tcelula;

typedef struct{
    int autoIncremento;
    int tam;
    Pointer inicio,fim;
}Lista;


void iniciaLista(Lista *lista);
void insereLista(Lista *lista,char *operacao, int isOperator);
void imprime(Lista *lista);
int isNegative(char *valor);
void percorrerLista(Lista* lista);
void atualizarVar(Tcelula* cel,Lista* lista);
char *concat(int valor);
char* trasnfNtoP(char* valor);
void emiteInstrucao(char* instrucao);
#endif