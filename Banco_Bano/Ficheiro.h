#ifndef FICHEIRO_H_INCLUDED
#define FICHEIRO_H_INCLUDED

///*****FUNCOES PARA CONVERSOES******

void converter_IntString(char* s,int num)
{

    sprintf(s,"%d",num);

}
void converter_FloatString(char* s,float num)
{

    sprintf(s,"%.2f",num);

}
void converter_CharString(char* s,char valor)
{

    *s++ = valor;
    *s = '\0';
    return;

}
void converterString_Char(char *s, char * n)
{
    if(strcmp(s,"M") == 0 || strcmp(s,"m") == 0)
    {
        *n = 'M';
        return;
    }
    *n = 'F';
}
///***************************

///*************MANIPULACAO DE FICHEIRO CLIENTE (BASE DE DADOS)...INICIO

///***********FUNCAO CRIAR ARQUIVO SE NAO EXISTE

void  criar_arquivo_cliente()
{
    fopen("bd_cliente.txt", "wt");  //Cria o Arquivo se não existir
}

///..FUNCAO PARA GUARDAR DADOS NO FICHEIRO

void Guardar_cliente(LISTA_CLIENTE *ls)
{
    if(sevazia_cl(ls))
        return;


    FILE *arq;
    String linha;
abrir:
    arq = fopen("bd_cliente.txt", "wt"); /// Cria um arquivo texto para gravação
    if (arq == NULL) /// Se não conseguiu criar
    {
        criar_arquivo_cliente();
        goto abrir;
    }
    NO_CLIENTE *aux=primeiro_no_cl(ls);
    while(aux!=NULL)
    {

        converter_IntString(linha,aux->info.codigo);
        fputs(linha, arq);  ///Escrever o cod
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,aux->info.nome_cliente);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_CharString(linha,aux->info.genero);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        strcpy(linha,aux->info.num_bi);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,aux->info.num_conta);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,aux->info.telefone);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_FloatString(linha,aux->info.valor_saldo);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        ///******guardar data_nasc
        converter_IntString(linha,aux->info.data_nasc.dia);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,aux->info.data_nasc.mes);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,aux->info.data_nasc.ano);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        ///*****guardar data_criacao
        converter_IntString(linha,aux->info.data_criacao.dia);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,aux->info.data_criacao.mes);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,aux->info.data_criacao.ano);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        if(aux->info.estado == true)
        {
            strcpy(linha,"ATIVADA");
        }
        else
        {
            strcpy(linha,"DESATIVADA");
        }
        fputs(linha,arq);
        fputs("|",arq);
        converter_IntString(linha,aux->info.num_movimento);
        fputs(linha, arq);
        fputs("|",arq);
        fputs("\n",arq);
        aux=aux->prox;
    }
    fclose(arq);
}


void leituraLinha_cliente(String linha,LISTA_CLIENTE *lsl)
{

    CLIENTE pacote;
    char *sub;
    String informacao;
    sub = strtok(linha,"|");///strok serve para separar uma string em sub strings
    int i = 0;
    while (sub != NULL)
    {
        strcpy(informacao,sub);
        if(i==0)
        {
            pacote.codigo = atoi(informacao);///funcao de convercao de string para int
        }
        else if(i==1)
        {
            strcpy(pacote.nome_cliente,informacao);
        }
        else if(i==2)
        {

            converterString_Char(informacao,&pacote.genero);
        }
        else if(i==3)
        {

            strcpy(pacote.num_bi,informacao);
        }
        else if(i==4)
        {

            strcpy(pacote.num_conta,informacao);
        }
        else if(i==5)
        {

            strcpy(pacote.telefone,informacao);
        }
        else if(i==6)
        {

            pacote.valor_saldo = atof(informacao);
        }
        else if(i==7)
        {
            /// data nascimeno
            pacote.data_nasc.dia = atoi(informacao);
        }
        else if(i==8)
        {
            pacote.data_nasc.mes = atoi(informacao);
        }
        else if(i==9)
        {
            pacote.data_nasc.ano = atoi(informacao);
        }
        else if(i==10)
        {
            /// data criacao
            pacote.data_criacao.dia = atoi(informacao);
        }
        else if(i==11)
        {
            pacote.data_criacao.mes = atoi(informacao);
        }
        else if(i==12)
        {
            pacote.data_criacao.ano = atoi(informacao);
        }
        else if(i==13)
        {
            String estado;
            strcpy(estado,"ATIVADA");
            if(strcmp(estado,informacao) == 0)
                pacote.estado = true;
            else
                pacote.estado = false;
        }else if(i==14)
        {
            pacote.num_movimento = atoi(informacao);
        }


        i++;
        sub = strtok(NULL,"|");
    }

/// salvando na lista
    NO_CLIENTE *novo_cli = (NO_CLIENTE*)malloc(sizeof(NO_CLIENTE));
    novo_cli->info = pacote;
    novo_cli->prox = NULL;

    if(lsl->cabeca_cl == NULL)
    {

        lsl->cabeca_cl = novo_cli;
    }
    else
    {

        ultimo_no_cliente(lsl)->prox = novo_cli;

    }

}

int leituraArquivo_cliente(LISTA_CLIENTE *lsl)
{
    FILE *arq;
    char Linha[100];
    char *result;
    int i;

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("bd_cliente.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        criar_arquivo_cliente();
        return 0;
    }
    while (!feof(arq))
    {
        //Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler
            leituraLinha_cliente(Linha,lsl);
    }
    fclose(arq);


    if(sevazia_cl(lsl)) return 0;

    cod_auto_cliente = ultimo_no_cliente(lsl)->info.codigo;


    return 1;
}


///.....MANIPULACAO DE FICHEIRO CLIENTE (BASE DE DADOS)...FIM
///*************************************************************************



void  criar_arquivo_historico()
{
    fopen("bd_historico.txt", "wt");  //Cria o Arquivo se não existir
}
void Guardar_historico(LISTA_HISTORICO *ldl)
{
    if(sevazia_hst(ldl))
        return;

    FILE *arq;
    String linha;
abrir:
    arq = fopen("bd_historico.txt", "wt");  // Cria um arquivo texto para gravação
    if (arq == NULL) // Se não conseguiu criar
    {
        criar_arquivo_historico();
        goto abrir;
    }
    NO_HISTORICO *noAux = ldl->cabeca_hst;
    while(noAux!=NULL)


    {
        converter_FloatString(linha,noAux->info.montante);
        fputs(linha, arq);  ///Escrever o nome da universidae
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,noAux->info.num_conta);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,noAux->info.tipo_op);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_IntString(linha,noAux->info.data_historico.dia);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_IntString(linha,noAux->info.data_historico.mes);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_IntString(linha,noAux->info.data_historico.ano);
        fputs(linha, arq);
        fputs("|", arq);

        fputs("\n",arq);
        noAux = noAux->prox;
    }
    fclose(arq);
}


void leituraLinha_historico(String linha,LISTA_HISTORICO *ldl)
{

    HISTORICO pacote;
    char *sub;
    String informacao;
    sub = strtok(linha,"|");///strok serve para separar uma string em sub strings
    int i = 0;
    while (sub != NULL)
    {
        strcpy(informacao,sub);
        if(i==0)
        {
            pacote.montante = atof(informacao);///funcao de convercao de string para int
        }
        else if(i==1)
        {
            strcpy(pacote.num_conta,informacao);
        }
        else if(i==2)
        {

            strcpy(pacote.tipo_op,informacao);
        }

        else if(i==3)
        {
            pacote.data_historico.dia = atoi(informacao);
        }
        else if(i==4)
        {
            pacote.data_historico.mes = atoi(informacao);
        }
        else if(i==5)
        {
            pacote.data_historico.ano = atoi(informacao);
        }
        i++;
        sub = strtok(NULL,"|");
    }
    /// salvando na lista
    NO_HISTORICO *aux,*novo_hst = (NO_HISTORICO*)malloc(sizeof(NO_HISTORICO));
    novo_hst->info = pacote;
    novo_hst->prox = novo_hst->ant = NULL;

    if(ldl->cabeca_hst == NULL)
    {
        ldl->cabeca_hst = novo_hst;
    }
    else
    {
        aux=ultimo_no_hst(ldl);
        aux->prox = novo_hst;
        novo_hst->ant = aux;
    }
}
int leituraArquivo_historico(LISTA_HISTORICO *ldl)
{
    FILE *arq;
    char Linha[100];
    char *result;
    int i;

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("bd_historico.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        criar_arquivo_historico();
        return 0;
    }
    while (!feof(arq))
    {
        //Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler
            leituraLinha_historico(Linha,ldl);
    }
    fclose(arq);

    if(sevazia_hst(ldl)) return 0;

    cod_auto_hist = ultimo_no_hst(ldl)->info.id;

    return 1;
}


///.....MANIPULACAO DE FICHEIRO HISTORICO (BASE DE DADOS)...FIMM
///******************************************************************

///*************MANIPULACAO DE FICHEIRO CONTA KID (BASE DE DADOS)...INICIO

void  criar_arquivo_kid()
{
    fopen("bd_kid.txt", "wt");  //Cria o Arquivo se não existir
}

///..FUNCAO PARA GUARDAR DADOS NO FICHEIRO

void Guardar_kid(LISTA_KID ls)
{
    if(sevazia_kid(ls))
        return;


    FILE *arq;
    int i;
    String linha;
abrir:
    arq = fopen("bd_kid.txt", "wt"); /// Cria um arquivo texto para gravação
    if (arq == NULL) /// Se não conseguiu criar
    {
        criar_arquivo_kid();
        goto abrir;
    }


    for(i=0; i<ls.qtd; i++)
    {

        converter_IntString(linha,ls.info[i].id);
        fputs(linha, arq);  ///Escrever o cod
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,ls.info[i].nome_kid);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_CharString(linha,ls.info[i].genero);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        strcpy(linha,ls.info[i].num_cedula);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,ls.info[i].num_conta_cli);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        strcpy(linha,ls.info[i].telefone_cli);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha, arq);
        converter_FloatString(linha,ls.info[i].valor_saldo);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        ///******guardar data_nasc
        converter_IntString(linha,ls.info[i].data_nasc.dia);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,ls.info[i].data_nasc.mes);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,ls.info[i].data_nasc.ano);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        ///*****guardar data_criacao
        converter_IntString(linha,ls.info[i].data_criac.dia);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,ls.info[i].data_criac.mes);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);
        converter_IntString(linha,ls.info[i].data_criac.ano);
        fputs(linha, arq);
        strcpy(linha,"|");
        fputs(linha,arq);

        if(ls.info[i].estado == true)
        {
            strcpy(linha,"ATIVADA");
        }
        else
        {
            strcpy(linha,"DESATIVADA");
        }
        fputs(linha,arq);
        fputs("|",arq);
        fputs("\n",arq);

    }
    fclose(arq);
}


void leituraLinha_kid(String linha,LISTA_KID *ls)
{

    KID pacote;
    char *sub;
    String informacao;
    sub = strtok(linha,"|");///strok serve para separar uma string em sub strings
    int i = 0;
    while (sub != NULL)
    {
        strcpy(informacao,sub);
        if(i==0)
        {
            pacote.id = atoi(informacao);///funcao de convercao de string para int
        }
        else if(i==1)
        {
            strcpy(pacote.nome_kid,informacao);
        }
        else if(i==2)
        {

            converterString_Char(informacao,&pacote.genero);
        }
        else if(i==3)
        {

            strcpy(pacote.num_cedula,informacao);
        }
        else if(i==4)
        {

            strcpy(pacote.num_conta_cli,informacao);
        }
        else if(i==5)
        {

            strcpy(pacote.telefone_cli,informacao);
        }
        else if(i==6)
        {

            pacote.valor_saldo = atof(informacao);
        }
        else if(i==7)
        {
            /// data nascimeno
            pacote.data_nasc.dia = atoi(informacao);
        }
        else if(i==8)
        {
            pacote.data_nasc.mes = atoi(informacao);
        }
        else if(i==9)
        {
            pacote.data_nasc.ano = atoi(informacao);
        }
        else if(i==10)
        {
            /// data criacao
            pacote.data_criac.dia = atoi(informacao);
        }
        else if(i==11)
        {
            pacote.data_criac.mes = atoi(informacao);
        }
        else if(i==12)
        {
            pacote.data_criac.ano = atoi(informacao);
        }
        else if(i==13)
        {
            String estado;
            strcpy(estado,"ATIVADA");
            if(strcmp(estado,informacao) == 0)
                pacote.estado = true;
            else
                pacote.estado = false;
        }

        i++;
        sub = strtok(NULL,"|");
    }

/// salvando na lista
        ls->info[ls->qtd]=pacote;
        ls->qtd++;
}

int leituraArquivo_kid(LISTA_KID *ls)
{
    FILE *arq;
    char Linha[100];
    char *result;
    int i;

    // Abre um arquivo TEXTO para LEITURA
    arq = fopen("bd_kid.txt", "rt");
    if (arq == NULL)  // Se houve erro na abertura
    {
        criar_arquivo_kid();
        return 0;
    }
    while (!feof(arq))
    {
        //Lê uma linha (inclusive com o '\n')
        result = fgets(Linha, 100, arq);  // o 'fgets' lê até 99 caracteres ou até o '\n'
        if (result)  // Se foi possível ler
            leituraLinha_kid(Linha,ls);
    }
    fclose(arq);


    if(sevazia_kid(*ls)) return 0;

    cod_auto_kid = ls->info[ls->qtd-1].id;


    return 1;
}


///.....MANIPULACAO DE FICHEIRO KID (BASE DE DADOS)...FIM
///*************************************************************************



#endif // FICHEIRO_H_INCLUDED
