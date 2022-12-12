#ifndef DECLARACOES_H_INCLUDED
#define DECLARACOES_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>
#include <locale.h>
#include <time.h>
#include<process.h>
#include <conio.h>


#define MAX 150
#define ANOKID 2010
#define ANOCLI 1921

typedef char String[MAX];
/// VARIAVEIS GLOBAIS DE CONTROLO
int cod_auto_cliente = 0;
int cod_auto_kid = 0;
int cod_auto_hist = 0;

int control_idade=0;
int control_requisito =0;
float control_valor=0.0;

String control_conta=" ";
String aux_global= " ";
String op = " ";







///...ESTRURA DATA...

typedef struct data{
    int dia;
    int mes;
    int ano;
}DATA;
///....ESTRUTURA DE DADOS CLIENTE..lLISTA LIGADA
DATA data_control;

typedef struct cliente{
    int codigo;
    int num_movimento;
    String nome_cliente;
    String num_bi;
    String num_conta;
    String telefone;
    DATA data_nasc;
    DATA data_criacao;
    float valor_saldo;
    bool estado;
    char genero;

}CLIENTE;

typedef struct no_cliente{

    CLIENTE info;
    struct no_cliente *prox;

}NO_CLIENTE;

typedef struct cabecal{
    NO_CLIENTE *cabeca_cl;

}LISTA_CLIENTE;

///.....FIM CLIENTE........

///....ESTRUTURA DE DADOS KID...lLISTA SEQUENCIAL
typedef struct kid{
    int id;
    bool estado;
    String nome_kid;
    String num_cedula;
    char genero;
    String telefone_cli;
    float valor_saldo;
    DATA data_nasc;
    DATA data_criac;
    String num_conta_cli;

}KID;

typedef struct lista{
    KID info[MAX];
    int qtd;
}LISTA_KID;

///.....FIM KID........

///....ESTRUTURA DE DADOS HISTORICOS..lLISTA DUPLAMENTE LIGADA

typedef struct historico{
    int id;
    float montante;
    String num_conta;
    DATA data_historico;
    String tipo_op;

}HISTORICO;

typedef struct no_historico{
    HISTORICO info;
    struct no_historico *prox,*ant;


}NO_HISTORICO;

typedef struct cabecah{
    NO_HISTORICO *cabeca_hst;

}LISTA_HISTORICO;

///.....FIM HISTORICO........

/// pacotes de dados


/// PROTOTIPOS DAS FUNCOES////
//FUNCOES CLIENTES
NO_CLIENTE *verificar_num_conta(LISTA_CLIENTE *lsl, String num_conta);
struct tm *data_automatica();
void gotoxy(int x, int y);
LISTA_CLIENTE *criar_lista_cliente();
NO_CLIENTE *criar_no_cliente(CLIENTE dados);
bool sevazia_cl(LISTA_CLIENTE *lsl);
NO_CLIENTE *primeiro_no_cl(LISTA_CLIENTE *lsl);
NO_CLIENTE *proximo_no_cl(NO_CLIENTE *no);
NO_CLIENTE *anterior_no_cl(LISTA_CLIENTE *lsl, NO_CLIENTE *no);
NO_CLIENTE *ultimo_no_cliente(LISTA_CLIENTE *lsl);
CLIENTE ler_dados_cliente();
int idade_cliente();
bool valor_minimo();
bool verificar_ja_conta(LISTA_CLIENTE *lsl);
bool pode_criar_conta(LISTA_CLIENTE *lsl);
bool registar_cliente(LISTA_CLIENTE *lsl, NO_CLIENTE *novo_no);
NO_CLIENTE *verificar_num_conta(LISTA_CLIENTE *lsl, String num_conta);

/// PROTOTIPOS DAS FUNCOES////
//FUNCOES HISTORICOS
LISTA_HISTORICO *criar_lista_historico();
NO_HISTORICO *criar_no_historico(HISTORICO dados);
bool sevazia_hst(LISTA_HISTORICO *ldl);
NO_HISTORICO *primeiro_no_cl(LISTA_HISTORICO *ldl);
NO_HISTORICO *proximo_no_hst(NO_HISTORICO *no);
NO_HISTORICO *anterior_no_hst(NO_HISTORICO *no);
NO_HISTORICO *ultimo_no_hst(LISTA_HISTORICO *ldl);
bool registar_historico(LISTA_HISTORICO *ldl, NO_HISTORICO *novo_no);
HISTORICO info(String tipo_op,float valor,String num_conta);
bool verificar_data(DATA data1, DATA data2);
void operacoes_por_data(LISTA_HISTORICO *ldl, DATA dataop);
int qtd_proc_conta(LISTA_HISTORICO *ldl,String num_conta);
void historico_operacao(LISTA_HISTORICO *ldl,String tipo_op);

/// PROTOTIPOS DAS FUNCOES////
//PARA LISTA KID

void inicilizar_lista_kid(LISTA_KID *ls);
bool sevazia_kid(LISTA_KID ls);
bool secheia_kid(LISTA_KID ls);

/// OUTRAS FUNCOES AUXLIAR
void toUperCase(char *palavra);
bool seLetra(char bite);



void textbackground(void);
 void textcolor(void);

















#endif // DECLARACOES_H_INCLUDED
