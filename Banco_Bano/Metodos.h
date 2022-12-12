#ifndef METODOS_H_INCLUDED
#define METODOS_H_INCLUDED

#include "Declaracoes.h"
#include "Ficheiro.h"
#include "Funcoes_aux.h"




///**************************************************************************************
///**************************************************************************************


///... FUNCOES  DA LISTA DE CLIENTES...
///**************************************************************************************
///**************************************************************************************


// FUNCAO CRIAR LISTA
LISTA_CLIENTE *criar_lista_cliente()
{
    LISTA_CLIENTE *lsl = (LISTA_CLIENTE*)malloc(sizeof(LISTA_CLIENTE));
    lsl->cabeca_cl=NULL;
    return lsl;

}

// FUNCAO CRIAR NO

NO_CLIENTE *criar_no_cliente(CLIENTE dados)
{

    NO_CLIENTE *novo = (NO_CLIENTE*)malloc(sizeof(NO_CLIENTE));
    novo->info = dados;
    novo->prox = NULL;

    return novo;


}


// FUNCAO VERIFICACAO SE A LISTA ESTA VAZIA
bool sevazia_cl(LISTA_CLIENTE *lsl)
{

    return(lsl->cabeca_cl == NULL);
}

// FUNCAO RETORNA O PRIMEIO NO

NO_CLIENTE *primeiro_no_cl(LISTA_CLIENTE *lsl)
{
    return lsl->cabeca_cl;

}
// FUNCAO RETORNA O PROXIMO NO


NO_CLIENTE *proximo_no_cl(NO_CLIENTE *no)
{
    return no->prox;

}

// FUNCAO RETORNA O ANTERIOR NO
NO_CLIENTE *anterior_no_cl(LISTA_CLIENTE *lsl, NO_CLIENTE *no)
{
    if(sevazia_cl(lsl) || no == lsl->cabeca_cl) return NULL;
    NO_CLIENTE *aux = lsl->cabeca_cl;
    while(aux->prox!= NULL)
    {
        if(aux->prox == no) return aux;
        aux=proximo_no_cl(aux);
    }
    return NULL;

}

// FUNCAO RETORNA O ULTIMO NO

NO_CLIENTE *ultimo_no_cliente(LISTA_CLIENTE *lsl)
{
    if(sevazia_cl(lsl)) return NULL;

    NO_CLIENTE *aux = lsl->cabeca_cl;
    while(aux->prox!=NULL)
        aux=aux->prox;

    return aux;


}



// FUNCAO  LER DADOS DO CLIENTE

CLIENTE ler_dados_cliente(LISTA_CLIENTE *lsl)
{

    CLIENTE pacote;

    pacote.codigo = ++cod_auto_cliente;
    pacote.num_movimento = 0;
    pacote.estado = false;

    String dados;
    int limpa, c_dados;
    int telfone;


    control_idade = 0;
    control_valor = 0.0;
    String bano = " ";
    strcpy(bano,"BANO");
    system("cls");

    printf("\n\n\n\t\t\t\t\t\tREGISTAR NOVO CLIENTE                                  ID:[%d]",pacote.codigo);
    printf("\n\t\t\t\t\t\t==============================================================");
    printf("\n\t\t\t\t\t\t=                                                            =");
    printf("\n\t\t\t\t\t\t= NOME:                                                      =");
    printf("\n\t\t\t\t\t\t= ================== DATA NASCIMENTO: =====================  =");
    printf("\n\t\t\t\t\t\t= DIA:               MES:               ANO:                 =");
    printf("\n\t\t\t\t\t\t= ========================================================== =");
    printf("\n\t\t\t\t\t\t= N.BI:                                                      =");
    printf("\n\t\t\t\t\t\t= GENERO(M/F):                                               =");
    printf("\n\t\t\t\t\t\t= N.TELEFONE:                                                =");
    printf("\n\t\t\t\t\t\t= VALOR:                                                     =");
    printf("\n\t\t\t\t\t\t=                                                        (KZ)=");
    printf("\n\t\t\t\t\t\t==============================================================");
    fflush(stdin);
    /// ******* LER E VALIDAR NOME
    nomecliValido:
    gotoxy(56,7);
    gets(dados);
    c_dados = validaNome(dados);
    if(c_dados == 1){
        for(limpa = 56; limpa < 100; limpa++)
        {
            gotoxy(limpa,7);
            printf(" ");
        }
        goto nomecliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    strcpy(pacote.nome_cliente,dados);

    /// ******* LER E VALIDAR DIA

    diacliValido:
    gotoxy(55,9);
    gets(dados);
    c_dados = veri_dia(dados);
    if(c_dados == 1){
        for(limpa = 55; limpa < 70; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto diacliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.dia = atoi(dados);

    /// ******* LER E VALIDAR MES

    mescliValido:
    gotoxy(74,9);
    gets(dados);
    c_dados = veri_mes(dados);
    if(c_dados == 1){
        for(limpa = 74; limpa < 89; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto mescliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.mes = atoi(dados);

    /// ******* LER E VALIDAR ANO

    anocliValido:
    gotoxy(93,9);
    gets(dados);
    c_dados = veri_ano_cli(dados);
    if(c_dados == 1){
        for(limpa = 93; limpa < 110; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto anocliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.ano = atoi(dados);

     /// VARIAVEIS PARA VERIFICACAO DE IDADE
    control_idade=pacote.data_nasc.ano;


    /// ******* LER E VALIDAR BI

    bicliValido:
    gotoxy(56,11);
    gets(dados);

     /// VARIAVEIS PARA VERIFICACAO DE QTD CONTA POR CLIENTE
    strcpy(control_conta,dados);

    c_dados = verBI_conta(dados,lsl);
    if(c_dados == 1){
        for(limpa = 56; limpa < 104; limpa++)
        {
            gotoxy(limpa,11);
            printf(" ");
        }
        goto bicliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    strcpy(pacote.num_bi,dados);

    /// ******* LER E VALIDAR GENERO

    generocliValido:
    gotoxy(63,12);
    gets(dados);
    c_dados = verGerero(dados);
    if(c_dados == 1){
        for(limpa = 63; limpa < 108; limpa++)
        {
            gotoxy(limpa,12);
            printf(" ");
        }
        goto generocliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.genero= dados[0];

    /// ******* LER E VALIDAR TELEFONE

    telefonecliValido:
    gotoxy(62,13);
    gets(dados);
    c_dados = isNumeroTelefone(lsl,dados);
    if(c_dados == 1){
        for(limpa = 62; limpa < 109; limpa++)
        {
            gotoxy(limpa,13);
            printf(" ");
        }
        goto telefonecliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    strcpy(pacote.telefone,dados);

    /// ******* LER E VALIDAR VALOR

    valorcliValido:
    gotoxy(57,14);
    gets(dados);
    //dados[strcspn(dados,".")]=',';

     /// VARIAVEIS PARA VERIFICACAO DE SALDO DE CONTA
    control_valor =atof(dados);

    c_dados = veriValor(dados);
    if(c_dados == 1){
        for(limpa = 57; limpa < 109; limpa++)
        {
            gotoxy(limpa,14);
            printf(" ");
        }
        goto valorcliValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.valor_saldo= control_valor;



    /// RECEBENDO DADOS AUTOMAICA
    pacote.data_criacao.ano = data_automatica()->tm_year+1900;
    pacote.data_criacao.dia = data_automatica()->tm_mday;
    pacote.data_criacao.mes = data_automatica()->tm_mon+1;

    strcpy(pacote.num_conta,strcat(bano,pacote.telefone));
    pacote.estado= true;


    return pacote;
}


// FUNCAO  QUE REGISTA O CLIENTE


bool registar_cliente(LISTA_CLIENTE *lsl,LISTA_HISTORICO *ldl,NO_CLIENTE *novo_no)
{

    if(novo_no->info.estado){
        if(sevazia_cl(lsl))
        {
        lsl->cabeca_cl = novo_no;

        }
        else
        {

        NO_CLIENTE *aux = ultimo_no_cliente(lsl);
        aux->prox = novo_no;

        }
    registar_historico(ldl,criar_no_historico(info("DEPOSITO",novo_no->info.valor_saldo,novo_no->info.num_conta)));
    novo_no->info.num_movimento++;
    return true;

    }
        free(novo_no);

    return false;
}

// FUNCAO  QUE VERIFICA SE A CONTA EXISTE

NO_CLIENTE *verificar_num_conta(LISTA_CLIENTE *lsl, String num_conta)
{
    if(lsl->cabeca_cl== NULL) return NULL;
    NO_CLIENTE *aux= lsl->cabeca_cl;
    while(aux!=NULL)
    {
        if(strcmp(aux->info.num_conta,num_conta)== 0){
                return aux;

        }

        aux=aux->prox;

    }

    return NULL;

}

///**************************FUNCOES DO MENU CLIENTE *********************************
///**************************************************************************************



// FUNCAO  PARA TRANSFERENCIA

bool tranferencia(LISTA_CLIENTE *lsl,NO_CLIENTE *no,String conta_distino,float montante){
                    no->info.valor_saldo-=montante;
                    verificar_num_conta(lsl,conta_distino)->info.valor_saldo+= montante;
                    verificar_num_conta(lsl,conta_distino)->info.num_movimento++;
                    return true;

}

// FUNCAO  PARA DEPOSITA

bool depositar(LISTA_CLIENTE *lsl,String conta_distino,float montante){
        verificar_num_conta(lsl,conta_distino)->info.valor_saldo+= montante;
        verificar_num_conta(lsl,conta_distino)->info.num_movimento++;

        return true;

}


// FUNCAO  PARA CONSULTAR

void consulta(NO_CLIENTE *no){
    DATA datac;
    datac.ano=data_automatica()->tm_year+1900;
    datac.dia=data_automatica()->tm_mday;
    datac.mes=data_automatica()->tm_mon+1;
    printf("\n\n\n\t\t\t\t\t\tCONSULTA CLIENTE                                   ID:[%d]",no->info.codigo);
    printf("\n\t\t\t\t\t\t==============================================================");
    printf("\n\t\t\t\t\t\t====================   BANCO BANO ============================");
    printf("\n\t\t\t\t\t\t= NOME: %-52s=",no->info.nome_cliente);
    printf("\n\t\t\t\t\t\t= N.CONTA: %-50s=",no->info.num_conta);
    printf("\n\t\t\t\t\t\t= SALDO CONTA(KZ): %-42.2f=",no->info.valor_saldo);
    printf("\n\t\t\t\t\t\t=                                                            =");
    printf("\n\t\t\t\t\t\t=                    DATA: %d/%d/%d                         =",datac.dia,datac.mes,datac.ano);
    printf("\n\t\t\t\t\t\t= ============================================================\n\n\t\t\t\t\t\t");
    fflush(stdin);
    system("pause");


}

// FUNCAO  PARA LEVANATR
    bool levantamento(NO_CLIENTE *no,float montante){
                    no->info.valor_saldo-=montante;
                    no->info.num_movimento++;
                    return true;

}





///... FIM FUNCOES BASICA DA LISTA DE CLIENTES FIM...
///**************************************************************************************
///**************************************************************************************


///... FUNCOES BASICA DA LISTA DE KIDS...
///******************************************************************************


///... FUNCAO QUE INICIAIZA LISTA KID

void inicilizar_lista_kid(LISTA_KID *ls){
    ls->qtd=0;
}

///... FUNCAO QUE VERIFICA SE  LISTA ESTA CHEIA KID

bool secheia_kid(LISTA_KID ls){
    return ls.qtd==MAX;
}

///... FUNCAO QUE VERIFICA SE  LISTA ESTA VAZIA KID
bool sevazia_kid(LISTA_KID ls){
    return ls.qtd==0;
}

///... FUNCAO QUE LER DADOS CONTA KID

KID ler_dados_kid(NO_CLIENTE *no,LISTA_KID lista_k)
{

    KID pacote ;
    pacote.id = ++cod_auto_kid;
    pacote.estado= false;
    String dados;
    int limpa, c_dados;
    system("cls");
    printf("\n\n\n\t\t\t\t\t\tREGISTAR NOVO KID                                  ID:[%d]",pacote.id);
    printf("\n\t\t\t\t\t\t==============================================================");
    printf("\n\t\t\t\t\t\t=                                                            =");
    printf("\n\t\t\t\t\t\t= NOME:                                                      =");
    printf("\n\t\t\t\t\t\t= ================== DATA NASCIMENTO: =====================  =");
    printf("\n\t\t\t\t\t\t= DIA:               MES:               ANO:                 =");
    printf("\n\t\t\t\t\t\t= ========================================================== =");
    printf("\n\t\t\t\t\t\t= N.CEDULA:                                                  =");
    printf("\n\t\t\t\t\t\t= GENERO(M/F):                                               =");
    printf("\n\t\t\t\t\t\t=                                                            =");
    printf("\n\t\t\t\t\t\t==============================================================");
    fflush(stdin);
/// ******* LER E VALIDAR NOME
    nomekidValido:
    gotoxy(56,7);
    gets(dados);
    c_dados = validaNome(dados);
    if(c_dados == 1){
        for(limpa = 56; limpa < 100; limpa++)
        {
            gotoxy(limpa,7);
            printf(" ");
        }
        goto nomekidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    strcpy(pacote.nome_kid,dados);

    /// ******* LER E VALIDAR DIA

    diakidValido:
    gotoxy(55,9);
    gets(dados);
    c_dados = veri_dia(dados);
    if(c_dados == 1){
        for(limpa = 55; limpa < 70; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto diakidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.dia = atoi(dados);

    /// ******* LER E VALIDAR MES

    meskidValido:
    gotoxy(74,9);
    gets(dados);
    c_dados = veri_mes(dados);
    if(c_dados == 1){
        for(limpa = 74; limpa < 89; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto meskidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.mes = atoi(dados);

    /// ******* LER E VALIDAR ANO

    anokidValido:
    gotoxy(93,9);
    gets(dados);
    c_dados = veri_ano_kid(dados);
    if(c_dados == 1){
        for(limpa = 93; limpa < 110; limpa++)
        {
            gotoxy(limpa,9);
            printf(" ");
        }
        goto anokidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.data_nasc.ano = atoi(dados);

    /// ******* LER E VALIDAR CEDULA

    cedulakidValido:
    gotoxy(60,11);
    gets(dados);
    c_dados = vercedula(lista_k,dados);
    if(c_dados == 1){
        for(limpa = 60; limpa < 110; limpa++)
        {
            gotoxy(limpa,11);
            printf(" ");
        }
        goto cedulakidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    strcpy(pacote.num_cedula,dados);

    /// ******* LER E VALIDAR GENERO

    generokidValido:
    gotoxy(63,12);
    gets(dados);
    c_dados = verGerero(dados);
    if(c_dados == 1){
        for(limpa = 63; limpa < 108; limpa++)
        {
            gotoxy(limpa,12);
            printf(" ");
        }
        goto generokidValido;

    }else if(c_dados == 0){
        return pacote;

    }
    pacote.genero = dados[0];


    /// VARIAVEIS PARA VERIFICACAO DE DADOS A RECEBER
    strcpy(pacote.telefone_cli,no->info.telefone);
    strcpy(pacote.num_conta_cli,no->info.num_conta);

    /// RECEBENDO DATA AUTOMAICA
    pacote.data_criac.ano = data_automatica()->tm_year+1900;
    pacote.data_criac.dia = data_automatica()->tm_mday;
    pacote.data_criac.mes = data_automatica()->tm_mon+1;
    pacote.estado= true;

    return pacote;
}


///... FUNCAO QUE REGISTA NA LISTA LISTA KID

bool registar_kid(LISTA_KID *ls, KID dados, NO_CLIENTE *no){

        if(!(dados.estado == false)){
            no->info.valor_saldo-=20000;
            dados.valor_saldo+=20000;
            ls->info[ls->qtd]=dados;
            ls->qtd++;
            return true;
        }
        return false;
}


///... FUNCOES PARA VERIFICAR NUM CEDULA KID...

bool verificar_num_cedula(LISTA_KID ls,String cedula){
            if(sevazia_kid(ls)) return false;
            int i;
            for(i=0; i<ls.qtd; i++){
                 if(strcmp(ls.info[i].num_cedula,cedula)==0)
                    return true;
            }

       return false;
}

///... FUNCOES DEPOSITAR EM KID...
bool depositar_kid(LISTA_KID *ls,String cedula,float montante,NO_CLIENTE *no){
            int i;
            for(i=0; i<ls->qtd; i++){
                 if(strcmp(ls->info[i].num_cedula,cedula)==0){
                        ls->info[i].valor_saldo += montante;
                        no->info.valor_saldo -= montante;
                        no->info.num_movimento++;
                    return true;
                 }

            }
        return false;
}




///... FIM FUNCOES BASICA DA LISTA DE KIDS FIM...
///**************************************************************************************
///*************************************************************************************



///... FUNCOES BASICA DA LISTA DE HISTORICOS...
///**************************************************************************************


// FUNCAO CRIAR LISTA
LISTA_HISTORICO *criar_lista_historico()
{
    LISTA_HISTORICO *ldl = (LISTA_HISTORICO*)malloc(sizeof(LISTA_HISTORICO));
    ldl->cabeca_hst=NULL;
    return ldl;

}

// FUNCAO CRIAR NO

NO_HISTORICO *criar_no_historico(HISTORICO dados)
{

    NO_HISTORICO *novo = (NO_HISTORICO*)malloc(sizeof(NO_HISTORICO));
    novo->info = dados;
    novo->prox = novo->ant= NULL;

    return novo;


}


// FUNCAO VERIFICACAO SE A LISTA ESTA VAZIA
bool sevazia_hst(LISTA_HISTORICO *ldl)
{

    return(ldl->cabeca_hst == NULL);
}

// FUNCAO RETORNA O PRIMEIO NO

NO_HISTORICO *primeiro_no_cl(LISTA_HISTORICO *ldl)
{
    return ldl->cabeca_hst;

}
// FUNCAO RETORNA O PROXIMO NO


NO_HISTORICO *proximo_no_hst(NO_HISTORICO *no)
{
    return no->prox;

}

// FUNCAO RETORNA O ANTERIOR NO
NO_HISTORICO *anterior_no_hst(NO_HISTORICO *no)
{
    return no->ant;

}

// FUNCAO RETORNA O ULTIMO NO

NO_HISTORICO *ultimo_no_hst(LISTA_HISTORICO *ldl)
{
    if(sevazia_hst(ldl)) return NULL;

    NO_HISTORICO *aux = ldl->cabeca_hst;
    while(aux->prox!=NULL)
        aux=aux->prox;

    return aux;


}

// FUNCAO INSERIR NOVO HISTORICO NA LISTA

bool registar_historico(LISTA_HISTORICO *ldl, NO_HISTORICO *novo_no)
{
    if(sevazia_hst(ldl))
    {
        ldl->cabeca_hst = novo_no;
        return true;
    }
    else
    {
        NO_HISTORICO *aux = ultimo_no_hst(ldl);
        aux->prox = novo_no;
        novo_no->ant = aux;
        return true;
    }

    return false;
}


HISTORICO info(String tipo_op,float valor,String num_conta){

    HISTORICO info;

    info.data_historico.dia=data_automatica()->tm_mday;
    info.data_historico.mes=data_automatica()->tm_mon+1;
    info.data_historico.ano=data_automatica()->tm_year+1900;
    strcpy(info.tipo_op,tipo_op);
    info.montante= valor;
    strcpy(info.num_conta,num_conta);
     return info;

}




// FUNCAO QUE MOSTA OPERA;OES POR DATA

void operacoes_por_data(LISTA_HISTORICO *ldl,DATA dataop,String num){

        if(sevazia_hst(ldl)){
                mensagemBox_info("LISTA DE HISTORICO DE CONTA VAZIA  ");
        return;

    }
        NO_HISTORICO *aux = ldl->cabeca_hst;
        int i=0;
        /// ver se a data existe em ums dos no
        while(aux!=NULL){
            if(verificar_data(aux->info.data_historico,dataop))
                i=1;
            aux=aux->prox;
        }
        if(i==0){
            mensagemBox_info("NENHUMA OPERACOES FEITA NA DATA INFORMADA ");
            return;

        }


    system("cls");
    aux = ldl->cabeca_hst;
    printf("\n\n\n\t\t\t\t\t\tOPERACOES DATA:[%d/%d/%d]\n",dataop.dia,dataop.mes,dataop.ano);
    printf("\t\t\t\t\t\t========================================================\n");
    printf("\t\t\t\t\t\t=TIPO DE OPERACAO           |MONTANTE(kz)              =\n");
    printf("\t\t\t\t\t\t========================================================\n");
    fflush(stdin);

        while(aux!=NULL){
           if(verificar_data(aux->info.data_historico,dataop) && strcmp(aux->info.num_conta,num)== 0){
                if(strcmp(aux->info.tipo_op,"CONSULTA")==0){
                printf("\t\t\t\t\t\t=%-27s|%-25s=\n",aux->info.tipo_op,"-------------");
                }else{
                printf("\t\t\t\t\t\t=%-27s|%-25.2f=\n",aux->info.tipo_op,aux->info.montante);
                }
           }
        aux=aux->prox;
        }
    printf("\t\t\t\t\t\t========================================================\n\n\n\n\t\t\t\t");
    system("pause");



}


// FUNCAO QUE RETORNA A QTD DE PREOCESSO FEITO EM UMA CONTA
int qtd_proc_conta(LISTA_HISTORICO *ldl,String num_conta){
    if(sevazia_hst(ldl)) return 0;
        int cont=0;
        NO_HISTORICO *aux = ldl->cabeca_hst;
        while(aux!=NULL){
            if(strcmp(aux->info.num_conta,num_conta)== 0)
                cont++;
            aux=aux->prox;

        }
    return cont;

}


// FUNCAO QUE RETORNA O HISTORICO DE UMA OPERACAO
int historico_operacao(String tipo_op,LISTA_HISTORICO *ldl,String num){


        if(sevazia_hst(ldl)){
            mensagemBox_info("LISTA DE HISTORICO DE CONTA VAZIA  ");
        return 0;
        }
    NO_HISTORICO *aux = ldl->cabeca_hst;
    int i = 0;
    /// ver se a data existe em ums dos no
        while(aux!=NULL){
            if(strcmp(aux->info.tipo_op,tipo_op)== 0)
                i=1;
            aux=aux->prox;
        }
        if(i==0){
            if(mensagemBox_quest("NENHUMA INFORMACAO DA OPERACOES INFORMADA\n INSERIR NOVAMENTE? ")== 6){
                return 1;
            }else{

                return 0;
            }

        }
    system("cls");
    aux = ldl->cabeca_hst;
    printf("\n\n\n\t\t\t\t\t\t========================================================\n");
    printf("\t\t\t\t\t\t=DATA             |MONTANTE(kz)      |OPERACAO         =\n");
    printf("\t\t\t\t\t\t========================================================\n");
    fflush(stdin);


        while(aux!=NULL){
           if(strcmp(aux->info.tipo_op,tipo_op)== 0 && strcmp(aux->info.num_conta,num)== 0){
            if(strcmp(aux->info.tipo_op,"CONSULTA")==0){
                printf("\t\t\t\t\t\t=%d/%d/%d         |%-18s|%-17s=\n",aux->info.data_historico.dia,aux->info.data_historico.mes,aux->info.data_historico.ano,"-------------",tipo_op);
                }else{
                printf("\t\t\t\t\t\t=%d/%d/%d         |%-18.2f|%-17s=\n",aux->info.data_historico.dia,aux->info.data_historico.mes,aux->info.data_historico.ano,aux->info.montante,tipo_op);
                }
                Sleep(150);
           }

        aux=aux->prox;
        }
    printf("\t\t\t\t\t\t========================================================\n\n\t\t\t\t\t\t");
    system("pause");

    return false;
}
///... FIM FUNCOES  DA LISTA DE HISTORICOS FIM...
///**************************************************************************************
///**************************************************************************************




///...  FUNCOES  DO SISTEMA ...
///**************************************************************************************



///...  FUNCAO RETORNA QUANTIDADE CONTAS EXISTENTES ...

int qtd_contas_exist(LISTA_CLIENTE *lsl){
    if(sevazia_cl(lsl)) return 0;

    NO_CLIENTE *aux=lsl->cabeca_cl;
    int cont =0;
    while(aux!=NULL){
        cont++;
        aux=aux->prox;
    }

return cont;

}



///...  FUNCAO LISTAR INFORMACOES DOS CLIENTE ...
void listar_cliente(LISTA_CLIENTE *lsl){
    if(sevazia_cl(lsl)){
            mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
            return;
    }

    system("cls");

    NO_CLIENTE *aux=lsl->cabeca_cl;

    printf("\n\n\n\t=============================================== LISTA DE CLIENTE ======================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    printf("\t=NOME                 |GENERO        |NUM.BI            |TELEFONE      |NUM.CONTA         |SALDO(kz)        |DATA_NASC    |DATA_CRIAC    |ESTADO      =\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    while(aux!=NULL)
    {


        printf("\t=%-21s|%-14s|%-18s|%-14s|%-19s|%-15.2f |%d/%d/%-9d|%d/%d/%-9d|%-12s=\n",aux->info.nome_cliente,genero(aux->info.genero),aux->info.num_bi,aux->info.telefone,aux->info.num_conta,aux->info.valor_saldo,aux->info.data_nasc.dia,aux->info.data_nasc.mes,aux->info.data_nasc.ano,aux->info.data_criacao.dia,aux->info.data_criacao.mes,aux->info.data_criacao.ano,estado(aux->info.estado));
        Sleep(150);
        aux=aux->prox;
    }
    printf("\t=======================================================================================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    system("pause");



}


///...  FUNCAO MOSTRAR INFORMACAO DE UM CLIENTE ...

void mostrar_cliente(LISTA_CLIENTE *lsl,String num_conta){


    NO_CLIENTE *aux=lsl->cabeca_cl;
    printf("\n\n\n\t=============================================== INFORMACOES DO CLIENTE ================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    printf("\t=NOME                 |GENERO        |NUM.BI            |TELEFONE      |NUM.CONTA         |SALDO(kz)        |DATA_NASC    |DATA_CRIAC    |ESTADO      =\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    while(aux!=NULL)
    {
        if(strcmp(aux->info.num_conta,num_conta)==0)
         printf("\t=%-21s|%-14s|%-18s|%-14s|%-19s|%-15.2f |%d/%d/%-9d|%d/%d/%-9d|%-12s=\n",aux->info.nome_cliente,genero(aux->info.genero),aux->info.num_bi,aux->info.telefone,aux->info.num_conta,aux->info.valor_saldo,aux->info.data_nasc.dia,aux->info.data_nasc.mes,aux->info.data_nasc.ano,aux->info.data_criacao.dia,aux->info.data_criacao.mes,aux->info.data_criacao.ano,estado(aux->info.estado));

        aux=aux->prox;
    }
     printf("\t=======================================================================================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    system("pause");


}


///...  FUNCAO MOSTRAR HISTORICO DE UM CLIENTE ...

void historico_cliente(LISTA_HISTORICO *ldl,String num_conta ){
    if(sevazia_hst(ldl))
        if(sevazia_hst(ldl)){
                mensagemBox_info("CLIENTE SEM HISTORICO REGISTADO");

     return;

    }

        NO_HISTORICO *aux = ldl->cabeca_hst;
    system("cls");
    printf("\n\n\n\t\t\t\t\t\t= HISTORICO N.CONTA:%-35s=\n",num_conta);
    printf("\t\t\t\t\t\t========================================================\n");
    printf("\t\t\t\t\t\t=DATA              |MONTANTE(kz)      |OPERACAO        =\n");
    printf("\t\t\t\t\t\t========================================================\n");
    fflush(stdin);


        while(aux!=NULL){
           if(strcmp(aux->info.num_conta,num_conta)== 0){

            if(strcmp(aux->info.tipo_op,"CONSULTA")==0){
                printf("\t\t\t\t\t\t=%d/%d/%d         |%-18s|%-16s=\n",aux->info.data_historico.dia,aux->info.data_historico.mes,aux->info.data_historico.ano,"-------------",aux->info.tipo_op);
                }else{
                printf("\t\t\t\t\t\t=%d/%d/%d         |%-18.2f|%-16s=\n",aux->info.data_historico.dia,aux->info.data_historico.mes,aux->info.data_historico.ano,aux->info.montante,aux->info.tipo_op);
                }
                Sleep(150);
           }
        aux=aux->prox;
        }
    printf("\t\t\t\t\t\t========================================================\n\n\t\t\t\t\t\t");

}

///...  FUNCAO MOSTRAR HISTORICO INFORMACAO DE UM CLIENTE ...

void mostrar_hist_e_dado_clie(LISTA_CLIENTE *lsl,LISTA_HISTORICO *ldl,String num_conta){

                    historico_cliente(ldl,num_conta);
                    mostrar_cliente(lsl,num_conta);

}


///...  FUNCAO LISTAR CLIENTE COM MAIS N CONTA KID ...


void cli_n_conta_kid(LISTA_CLIENTE *lsl,LISTA_KID lk,int n){

NO_CLIENTE *aux = lsl->cabeca_cl;
int i,cont1,cont2=0,control=1;

system("cls");
printf("\n\n\n\t\t\t\t\t\t=========================================================");
printf("\n\t\t\t\t\t\t==         OS CLIENTES COM MAIS DE [%d] CONTAS KID     ==",n);
printf("\n\t\t\t\t\t\t=========================================================");
printf("\n\t\t\t\t\t\t== NUM   |NOME                         |N.CONTA KID    ==");
printf("\n\t\t\t\t\t\t=========================================================");

        while(aux != NULL){
            cont1=0;

            for(i=0 ; i<lk.qtd ; i++){
                    if(strcmp(aux->info.num_conta,lk.info[i].num_conta_cli)== 0)
                        cont1++;
            }

                if(cont1> n){
                        control =0;
                        ++cont2;
                    printf("\n\t\t\t\t\t\t== %-5d |%-29s|%-15d==",cont2,aux->info.nome_cliente,cont1);
                }
                    aux=aux->prox;
        }
        if(control== 1){
            mensagemBox_info(" NAO EXISTE NENHUM CLIENTE ");
            goto n;
        }


printf("\n\t\t\t\t\t\t=========================================================\n\n\n\t\t\t\t");
system("pause");
n:
    Sleep(0);


}

///...  FUNCAO VERIFICAR SE CLIENTE TE  CONTA KID ...


bool veri_se_tem_kid(NO_CLIENTE *no,LISTA_KID lk){
                if(sevazia_kid(lk)) return false;
int i;
            for(i=0 ; i<lk.qtd ; i++){
                    if(strcmp(no->info.num_conta,lk.info[i].num_conta_cli)== 0)
                        return true;
            }
    return false;

}


///...  FUNCAO QUE DEBITA 1.5% DO VALOR DE CLIENTE  ...

void debitar_conta(LISTA_CLIENTE *lsl){
            if(sevazia_cl(lsl)){
                    mensagemBox_info(" LISTA DE CLIENTE VAZIA! ");
                    return;
                }
NO_CLIENTE *aux=lsl->cabeca_cl;

while(aux != NULL){
        if(aux->info.estado == true){
        aux->info.valor_saldo-= (aux->info.valor_saldo*1.5)/100;

        }
aux = aux->prox ;
}
        mensagemBox_info(" TODAS CONTAS DE CLIENTE FOI DEBITADA 1.5% DO SEU VALOR");

}

///...  FUNCAO LISTAR CLIENTE  DE REGISTO NA MESMA DATA ...


void lista_cliente_dataX(LISTA_CLIENTE *lsl,DATA data){

int control = 1;
NO_CLIENTE *aux = lsl->cabeca_cl;

    system("cls");
    printf("\n\n\n\t===================================== LISTA DE CLIENTE COM DATA CRIACAO DE [%d/%d/%d]  ================================================================\n",data.dia,data.mes,data.ano);
    printf("\t=======================================================================================================================================================\n");
    printf("\t=NOME                 |GENERO        |NUM.BI            |TELEFONE      |NUM.CONTA         |SALDO(kz)        |DATA_NASC    |DATA_CRIAC    |ESTADO      =\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);

        while(aux != NULL){

                    if(verificar_data(aux->info.data_criacao,data)){
                            control = 0;
       printf("\t=%-21s|%-14s|%-18s|%-14s|%-19s|%-15.2f |%d/%d/%-9d|%d/%d/%-9d|%-12s=\n",aux->info.nome_cliente,genero(aux->info.genero),aux->info.num_bi,aux->info.telefone,aux->info.num_conta,aux->info.valor_saldo,aux->info.data_nasc.dia,aux->info.data_nasc.mes,aux->info.data_nasc.ano,aux->info.data_criacao.dia,aux->info.data_criacao.mes,aux->info.data_criacao.ano,estado(aux->info.estado));
        Sleep(150);
                    }


                    aux=aux->prox;
        }
        if(control== 1){
                        mensagemBox_info(" NAO EXISTE NENHUM CLIENTE REGISTADO NESTA DATA ");
                        goto s;
        }

    printf("\t=======================================================================================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);system("pause");
    s:
        Sleep(0);


}


///...  FUNCAO QUE DESATIVA CONTA CLIENTE(KID)  ...

bool desativar_conta(NO_CLIENTE *no,LISTA_KID *ls){

                    if(no->info.valor_saldo!=0) return false;

                    int i;

                    for(i=0; i<ls->qtd; i++){
                        if(strcmp(no->info.num_conta,ls->info[i].num_conta_cli))
                            ls->info[i].estado = false;
                            ls->info[i].valor_saldo = 0.0;
                    }
                    no->info.estado = false;

    return true;

}

///FUNCAO QUE ATIVA CONTA CLIENTE(KID)  ...

bool ativar_conta(NO_CLIENTE *no,LISTA_KID *ls){

                    if(no->info.estado == true) return false;

                    int i;

                    for(i=0; i<ls->qtd; i++){
                        if(strcmp(no->info.num_conta,ls->info[i].num_conta_cli))
                            ls->info[i].estado = true;
                    }
                    no->info.estado = true;

    return true;

}

///...  FUNCAO LISTAR RNKING CLIENTE  MAIS ATIVO ...

void lista_cliente_ranking(LISTA_CLIENTE *lsl){

                if(sevazia_cl(lsl)){
                        mensagemBox_info(" LISTA DE CLIENTE VAZIA! ");
                return;
                    }

int control = 0;
NO_CLIENTE *aux1 = lsl->cabeca_cl,*aux2;
CLIENTE aux;

system("cls");
printf("\n\n\n\t\t\t\t\t\t=========================================================");
printf("\n\t\t\t\t\t\t==         RANKING DOS  CLIENTES MAIS ATIVOS           ==");
printf("\n\t\t\t\t\t\t=========================================================");
printf("\n\t\t\t\t\t\t== NUM   |NOME                         |N.MOV CONTA    ==");
printf("\n\t\t\t\t\t\t=========================================================");

        while(aux1 != NULL){
                aux2=aux1->prox;
                while(aux2 != NULL){
                    if(aux1->info.num_movimento<aux2->info.num_movimento){
                            aux=aux1->info;
                            aux1->info=aux2->info;
                            aux2->info=aux;
                    }
                    aux2=aux2->prox;
                }
                            ++control;
                    printf("\n\t\t\t\t\t\t== %-5d |%-29s|%-15d==",control,aux1->info.nome_cliente,aux1->info.num_movimento);

                     aux1=aux1->prox;

        }

printf("\n\t\t\t\t\t\t=========================================================\n\n\n\t\t\t\t");
system("pause");


}




///...  FUNCAO LISTAR ORDEM ALFABETICA CLIENTE  ...

void lista_cliente_ordem_alfabetica(LISTA_CLIENTE *lsl){

                if(sevazia_cl(lsl)){
                        mensagemBox_info(" LISTA DE CLIENTE VAZIA! ");
                return;
                    }

NO_CLIENTE *aux = lsl->cabeca_cl,*aux2;
CLIENTE aux1;

system("cls");
    printf("\n\n\n\t=============================================== LISTA DE CLIENTE EM ORDEM ALFABEICA ===================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    printf("\t=NOME                 |GENERO        |NUM.BI            |TELEFONE      |NUM.CONTA         |SALDO(kz)        |DATA_NASC    |DATA_CRIAC    |ESTADO      =\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);

        while(aux != NULL){
                aux2=aux->prox;
                while(aux2 != NULL){
                    if(strcmp(aux->info.nome_cliente,aux2->info.nome_cliente)== 1){
                            aux1 =aux->info;
                            aux->info=aux2->info;
                            aux2->info=aux1;
                    }
                    aux2=aux2->prox;
                }
  printf("\t=%-21s|%-14s|%-18s|%-14s|%-19s|%-15.2f |%d/%d/%-9d|%d/%d/%-9d|%-12s=\n",aux->info.nome_cliente,genero(aux->info.genero),aux->info.num_bi,aux->info.telefone,aux->info.num_conta,aux->info.valor_saldo,aux->info.data_nasc.dia,aux->info.data_nasc.mes,aux->info.data_nasc.ano,aux->info.data_criacao.dia,aux->info.data_criacao.mes,aux->info.data_criacao.ano,estado(aux->info.estado));
    Sleep(150);
                     aux=aux->prox;

        }

    printf("\t=======================================================================================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    system("pause");


}

///...  FUNCAO VERIFICAR SE EXISTE CLIENTE COM SALDO MENOR QUE N ...

bool cliente_com_saldo_menor_n(LISTA_CLIENTE *l , float n) {
        NO_CLIENTE *aux=l->cabeca_cl;

        while(aux != NULL){
            if(aux->info.valor_saldo < n){
                return true;
            }

            aux=aux->prox;
        }

return false;
}



///...  FUNCAO LISTAR CLIENTE  DE IDADE NO INTERVALO X E Y ...

void lista_cliente_idadeXY(LISTA_CLIENTE *lsl,int mini,int maxi){

NO_CLIENTE *aux = lsl->cabeca_cl;
int control = 1;
    system("cls");
    printf("\n\n\n\t=============================================== LISTA DE CLIENTE COM IDADE ENTRE %d a %d ==============================================================\n",mini,maxi);
    printf("\t=======================================================================================================================================================\n");
    printf("\t=NOME                 |GENERO        |NUM.BI            |TELEFONE      |NUM.CONTA         |SALDO(kz)        |DATA_NASC    |DATA_CRIAC    |ESTADO      =\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);

        while(aux != NULL){

                    if(calcular_idade(aux->info.data_nasc.ano)>mini &&calcular_idade(aux->info.data_nasc.ano)<maxi){
                            control = 0;
        printf("\t=%-21s|%-14s|%-18s|%-14s|%-19s|%-15.2f |%d/%d/%-9d|%d/%d/%-9d|%-12s=\n",aux->info.nome_cliente,genero(aux->info.genero),aux->info.num_bi,aux->info.telefone,aux->info.num_conta,aux->info.valor_saldo,aux->info.data_nasc.dia,aux->info.data_nasc.mes,aux->info.data_nasc.ano,aux->info.data_criacao.dia,aux->info.data_criacao.mes,aux->info.data_criacao.ano,estado(aux->info.estado));
        Sleep(150);
                    }


                    aux=aux->prox;
        }

        if(control== 1){
                        mensagemBox_info(" NAO EXISTE NENHUM CLIENTE NESSE INTERVALO DE IDADE ");
                        goto a;
                    }
    printf("\t=======================================================================================================================================================\n");
    printf("\t=======================================================================================================================================================\n");
    fflush(stdin);
    system("pause");
    a:
        Sleep(0);


}

///**************************  FIM FUNCOES SISTEMAS  **********************************************************
///************************************************************************************************************
/*
LISTA_Funcionario *inverter_orde_lista(LISTA_Funcionario *li){
    NO_F *ant,*atual,*depois = li->head_F;
    ant=depois;atual=depois->prox;depois=atual->prox;
    ant->prox=NULL;atual->prox=ant;li->head_F=atual;
    if(depois!=NULL){
        while(depois!=NULL){
            if(depois->prox==NULL){
                depois->prox=li->head_F;
                li->head_F=depois;
                return li;
            }else{
            ant=depois;atual=depois->prox;depois=atual->prox;
            ant->prox=li->head_F;atual->prox=ant;li->head_F=atual;
            }
        }
    }

     return li;
}





*/












#endif // METODOS_H_INCLUDED
