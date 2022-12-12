#ifndef FUNCOES_AUX_H_INCLUDED
#define FUNCOES_AUX_H_INCLUDED



/// FUNCAO QUE FAZ EMITIR SOM
void emitir_sor(){

    //MessageBeep(MB_OK);

    int i=1;
        while(i<=2){
            Beep(750,300);
            i++;
        }
}

/// FUNCOES PARA INFORMACOES COM MENSGEMBOX
void mensagemBox_info(String sms)
{
    MessageBox(NULL,sms,"INFORMAÇAO BANO",MB_OK);
}

int mensagemBox_quest(String sms)
{
    return MessageBox(NULL,sms,"ALERTA BANO",MB_YESNO);
}
///FUNCAO PARA DATA AUTOMATICO

struct tm *data_automatica()
{   struct tm *data;
    time_t segundo;
    time(&segundo);
    data= localtime(&segundo);
    return data;

}

///... FUNCAO PARA LEVAR O CURSOR EM UMA POSICAO XY

void gotoxy(int x, int y)
{
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD)
    {
        x-1,y-1
    });
}


///***********************************
/// FUNCAO VERIFICA SE DUAS DATAS SAO IGUAIS

bool verificar_data(DATA data1, DATA data2){
        if(data1.dia == data2.dia){
            if(data1.mes == data2.mes){
                if(data1.ano == data2.ano){
                    return true;
                }

            }
        }

return false;

}

///FUNCAO VERICAR GENERO
char* genero(char g){

if(g == 'M')
    return "MASCULINO";
else if(g == 'F')
    return "FEMENINO";

}
///FUNCAO VERICAR GENERO
char* estado(bool e){

if(e == true)
    return "ATIVADA";
else
    return "DESATIVADA";

}


/// *****FUNCAO VER QTD ESPACOS


int qtd_espacos(char dado, String infor)
{
    int i;
    for(i = 0; i < strlen(infor); i++)
    {
        if(dado == infor[i] && dado == infor[i+1])
            return 0;
    }
    return 1;
}

/// *****FUNCAO VER NOME
int validaNome(String nome)
{

    if(!(qtd_espacos(' ',nome)== 1)){
            emitir_sor();
       if(mensagemBox_quest("NOME INVALIDO! INSIRA UM NOME VALIDO ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;
        }


    }

    if(strlen(nome) == 0 || strlen(nome) == 1)
    {   emitir_sor();
        if(mensagemBox_quest("NOME INVALIDO! INSIRA UM NOME VALIDO: ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {

        toUperCase(nome);
        int i;
        for(i = 0; i < strlen(nome); i++)
        {

            if(!seLetra(nome[i]))
            {
                emitir_sor();
                if(mensagemBox_quest("NOME INVALIDO! INSIRA UM NOME VALIDO: ") == 6)
                {
                    return 1;
                }
                else
                {
                    return 0;
                }
            }
        }
    }

    return 2;

}

void toUperCase(char *palavra)
{
    int i;
    char str2[100]= {0};
    for(i=0; i<strlen(palavra); i++)
    {
        if(palavra[i]>='a'&&palavra[i]<='z')
        {
            str2[i]=(char)palavra[i]-32;
        }
        else
        {
            str2[i]=palavra[i];
        }
    }
    strcpy(palavra,str2);
}

/// *****FUNCAO VER NUMERO

bool seNumero(char bite)
{
    char numeros[] = {'0','1','2','3','4','5','6','7','8','9'};
    int i;
    for(i = 0; i < 10; i++)
    {
        if(bite == numeros[i])
        {
            return true;
        }
    }
    return false;
}


/// *****FUNCAO VER NUMERO VALIDO

int seNumeroValido(String bite)
{
    int control=0;
    char numeros[] = {'0','1','2','3','4','5','6','7','8','9'};
    int i,j;
    for(i = 0; i < strlen(bite); i++)
    {
        for(j=0; j<10;j++){
            if(bite[i] == numeros[j])
              control=1;


        }

    }
    if(control==0){
            emitir_sor();
        if(mensagemBox_quest(" NUMERO INVALIDO\n INSERIR NOVAMENTE ?")==6){
            return 1;

        }else{

            return 0;

        }


    }


    return 2;
}



/// *****FUNCAO VER NUMERO DO VALOR E VALIDO

bool seNumero_valor(char bite)
{
    char numeros[] = {'0','1','2','3','4','5','6','7','8','9',','};
    int i;
    if(bite == ',') return true;
    for(i = 0; i < 11; i++)
    {

        if(bite == numeros[i])
        {
            return true;
        }
    }
    return false;
}




/// *****FUNCAO VERIFICA DATA/ DIA

int veri_dia(String dia)
{

    int dia_int;
    dia_int = atoi(dia);

    if(strlen(dia) == 0 || strlen(dia)> 2 )
    {
        emitir_sor();

        if(mensagemBox_quest("DIA INVALIDO! INSERA NOVAMENTE: ") == 6)
        {
            return 1;
        }
        else
        {

            return 0;
        }

    }
    else
    {
        int j;
        for(j=0; j< strlen(dia); j++)
        {

            if(!seNumero(dia[j]))
            {
                emitir_sor();
                if(mensagemBox_quest("DIA INVALIDO! INSERA NOVAMENTE: ") == 6)

                {
                    return 1;
                }
                else
                {
                    return 0;

                }
            }

        }

    }

        if(dia_int > 31 || dia_int < 1)
        {
                emitir_sor();
            if(mensagemBox_quest("DIA INVALIDO! INSERA NOVAMENTE: ") == 6)
            {

                return 1;
            }
            else
            {
                return 0;

            }

        }


    return 2;
}

/// *****FUNCAO VERIFICA DATA/ MES

int veri_mes(String mes)
{
    int mes_int;
    mes_int = atoi(mes);

    if(strlen(mes) == 0 || strlen(mes)> 2 )
    {
            emitir_sor();
        if(mensagemBox_quest("MES INVALIDO! INSERA NOVAMENTE: ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }
    else
    {
        int j;
        for(j=0; j< strlen(mes); j++)
        {

            if(!seNumero(mes[j]))
            {
                emitir_sor();

                if(mensagemBox_quest("MES INVALIDO! INSERA NOVAMENTE: ") == 6)

                {
                    return 1;
                }
                else
                {
                    return 0;

                }
            }

        }

    }

        if(mes_int > 12 || mes_int <1)
        {
                emitir_sor();
            if(mensagemBox_quest("MES INVALIDO! INSERA NOVAMENTE: ") == 6)

            {
                return 1;
            }
            else
            {
                return 0;

            }

        }


    return 2;

}

/// *****FUNCAO VERIFICA DATA/ANO_kid

int veri_ano_kid(String ano)
{
    int ano_int,ano_valido=0;
    ano_int = atoi(ano);

    if(strlen(ano) == 0 || (strlen(ano)> 4 || strlen(ano)< 4))
    {
            emitir_sor();
        if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO KID INSERA NOVAMENTE:\n ATT:\n **APENAS MENOR DE 12**") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }
    else
    {
        int j;
        for(j=0; j< strlen(ano); j++)
        {

            if(!seNumero(ano[j]))
            {
                emitir_sor();
                if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO KID INSERA NOVAMENTE:\n ATT:\n **APENAS MENOR DE 12**") == 6)
                {
                    return 1;
                }
                else
                {
                    return 0;

                }
            }
            else
            {
                ano_valido++;

            }
        }

    }
    if(ano_valido == 4)
    {
        if(ano_int < ANOKID || ano_int == 0)
        {
            emitir_sor();
            if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO KID INSERA NOVAMENTE:\n ATT:\n **APENAS MENOR DE 12**") == 6)
            {
                return 1;
            }
            else
            {
                return 0;

            }

        }
    }

    return 2;

}


/// *****FUNCAO VERIFICA DATA/ANO_cliente


int veri_ano_cli(String ano)
{
    int ano_int,ano_valido=0;
    ano_int = atoi(ano);

    if(strlen(ano) == 0 || (strlen(ano)> 4 || strlen(ano)< 4))
    {
        emitir_sor();
        if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO  INSERA NOVAMENTE:") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }
    else
    {
        int j;
        for(j=0; j< strlen(ano); j++)
        {

            if(!seNumero(ano[j]))
            {
                emitir_sor();
                if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO  INSERA NOVAMENTE: ") == 6)
                {
                    return 1;
                }
                else
                {
                    return 0;

                }
            }
            else
            {
                ano_valido++;

            }
        }

    }
    if(ano_valido == 4)
    {
        if(ano_int < ANOCLI || ano_int == 0)
        {
            emitir_sor();
            if(mensagemBox_quest("ANO INVALIDO! PARA REGISTO  INSERA NOVAMENTE:") == 6)
            {
                return 1;
            }
            else
            {
                return 0;

            }

        }
    }

    return 2;

}

/// VERIFICAR SE NUMERO DA CEDULA JA EXISTE
bool verificar_ja_cedula(LISTA_KID lista_k, String num)
{
    if(sevazia_kid(lista_k)) return false;
    int i;

   for(i=0;i<lista_k.qtd;i++)
    {
        if(strcmp(lista_k.info[i].num_cedula,num)==0){
            return true;

        }
    }

    return false;

}

/// *****FUNCAO VER NUMERO CEDULA

int vercedula(LISTA_KID lista_k,String numero_cedula)
{

    int tamanho =strlen(numero_cedula);
    int j;

    for(j = 0; j < tamanho; j++)
    {
        if(!seNumero(numero_cedula[j]))
        {       emitir_sor();
            if(mensagemBox_quest("NUMERO INVALIDO! INSERIR NOVAMENTE: ")==6)
            {
                return 1;
            }
            else
            {
                return 0;

            }

        }
    }


    if(verificar_ja_cedula(lista_k,numero_cedula)){

            if(mensagemBox_quest("O NUMERO DE CEDULA INSERIDO JA ESA ASSOCIADO A UM KID! INSERIR NOVAMENTE: ")==6)
            {
                return 1;
            }
            else
            {
                return 0;

            }




    }

    return 2 ;
}


/// *****FUNCAO VER LETRA
bool seLetra(char bite)
{
    char letras[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z',' '};
    int i;
    for(i = 0; i < 26; i++)

    {   if(bite == ' ') return true;
        if(bite == letras[i]) return true;
    }
    return false;
}



///***** FUNCAO  QUE VERIFICA SE O CLIENTE JA TEM UMA CONTA

bool verificar_ja_conta(LISTA_CLIENTE *lsl)
{
    if(lsl->cabeca_cl== NULL) return false;
    NO_CLIENTE *aux= lsl->cabeca_cl;
    while(aux!=NULL)
    {
        if(strcmp(aux->info.num_bi,control_conta)==0){
            return true;

        }

        aux=aux->prox;

    }

    return false;

}
/// *****FUNCAO VER NUMERO BII

///***** FUNCAO  QUE VERIFICA SE JA TEM CLIENTE COM ESTE NUMERO DE TELEFONE

int verBI_conta(String bi,LISTA_CLIENTE *lsl)
{
    int j = 0;
    if(strlen(bi)== 0 || strlen(bi) != 14)
    {       emitir_sor();
        if(mensagemBox_quest("NUMERO DO BI INVALIDO! INSIRA UM NUMERO VALIDO ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }
    }
    else
    {

        toUperCase(bi);
        int i;
        for(i = 0; i < 14; i++)
        {
            if(i == 9 || i == 10)
            {
                if(!seLetra(bi[i]))
                {
                    j = 1;
                }
            }
            else
            {
                if(!seNumero(bi[i]))
                {
                    j = 1;
                }
            }
        }
    }

    if(j == 1)
    {   emitir_sor();
        if(mensagemBox_quest("NUMERO DO BI INVALIDO! INSIRA UM NUMERO VALIDO ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }
    if(verificar_ja_conta(lsl))
    {       emitir_sor();
        if(mensagemBox_quest("NUMERO DO BI INVALIDO\nATT: CLIENE JA REGISTDO NO BANCO BANO\n INSIRA NOVAMENTE ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }
    }

    return 2;
}


bool verificar_ja_telefone(LISTA_CLIENTE *lsl, String fone)
{
    if(lsl->cabeca_cl== NULL) return false;
    NO_CLIENTE *aux= lsl->cabeca_cl;
    while(aux!=NULL)
    {
        if(strcmp(aux->info.telefone,fone)==0){
            return true;

        }

        aux=aux->prox;

    }

    return false;

}

/// *****FUNCAO VER NUMERO TELEFONE
int isNumeroTelefone(LISTA_CLIENTE *lsl,String num)
{
    int i;
    if(strlen(num) == 9)
    {
        for(i = 0; i < strlen(num); i++)
        {
            if(i == 0)
            {
                if(num[i] != '9')
                {
                    emitir_sor();
                    if(mensagemBox_quest("NUMERO DO TELEFONE INVALIDO! INSIRA UM NUMERO VALIDO ") == 6)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
            else
            {
                if(!seNumero(num[i]))
                {
                    emitir_sor();
                    if(mensagemBox_quest("NUMERO DO TELEFONE INVALIDO! INSIRA UM NUMERO VALIDO ") == 6)
                    {
                        return 1;
                    }
                    else
                    {
                        return 0;
                    }
                }
            }
        }
    }
    else
    {
            emitir_sor();
        if(mensagemBox_quest("NUMERO DO TELEFONE INVALIDO! INSIRA UM NUMERO VALIDO ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }

    if(verificar_ja_telefone(lsl, num)){
        emitir_sor();
        if(mensagemBox_quest("NUMERO DE TELEFONE JA ESTA ASSOCIADO A UM CLIENTE!INSIRA UM DIFERENTE: ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }
    return 2;
}

/// *****FUNCAO VER GENERO

int verGerero(String genero)
{
    toUperCase(genero);

    if(strlen(genero) != 1)
    {
        emitir_sor();
        if(mensagemBox_quest("GENERO ESCOLHIDO INVALIDO! INSIRA UM GENERO VALIDO ") == 6)
        {
            return 1;
        }
        else
        {
            return 0;

        }

    }

    if(genero[0] != 'M' && genero[0] != 'F')
    {
        emitir_sor();
        if(mensagemBox_quest("GENERO ESCOLHIDO INVALIDO! INSIRA UM GENERO VALIDO ") == 6)
                    {
            return 1;
        }
        else
        {
            return 0;

        }
    }
    return 2;
}

///****FUNCAO  QUE RETORNA IDADE DE UM CLIENTE

int idade_cliente()
{
    return data_automatica()->tm_year+1900 - control_idade;

}

int calcular_idade(int ano){
    return data_automatica()->tm_year+1900 - ano;

}
///*** FUNCAO  QUE VERIFICA SE O VALOR MINIMO
bool valor_minimo()
{
    bool control = false;

    if((idade_cliente() > 11) && (idade_cliente() < 21))
    {
        if(control_valor >=6985) control = true;
    }
    else if(idade_cliente() >20 && idade_cliente() < 35)
    {
        if(control_valor>=10000) control = true;
    }
    else if(idade_cliente() >34)
    {
        if(control_valor>=15000)control = true;

    }
    return control;
}

/// VERIFICA QUANTIDADE DE PONDO NUM NUM VALOR
int qtd_pontos(char dado, String infor)
{
    int i,cont = 0;
    for(i = 0; i < strlen(infor); i++)
    {
        if(dado == infor[i])
            cont++;
    }
    return cont;
}


/// VERIFICA VALOR MINIMO EM QUESTAO A IDADE
int veriValor(String valor){

    if(strlen(valor)<4){
            emitir_sor();
        if(mensagemBox_quest("VALOR INVALIDO EM RELACAO A IDADE!!\nATT:\n >>IDADE MAIOR 11 E MENOR QUE 21, VALOR MIN.6985.00 KZ\n>>IDADE MAIOR 20 E MENOR QUE 35, VALOR MIN.10000.00 KZ\n>>IDADE MAIOR 34, VALOR MIN.15000.00 KZ\n INSERIR NOVAMENTE?")==6)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }else if(qtd_pontos(',',valor)>1){
            emitir_sor();
        if(mensagemBox_quest("VALOR INVALIDO EM RELACAO A IDADE!!\nATT:\n >>IDADE MAIOR 11 E MENOR QUE 21, VALOR MIN.6985.00 KZ\n>>IDADE MAIOR 20 E MENOR QUE 35, VALOR MIN.10000.00 KZ\n>>IDADE MAIOR 34, VALOR MIN.15000.00 KZ\n INSERIR NOVAMENTE?")==6)
        {
            return 1;
        }
        else
        {
            return 0;
        }

    }

    int j;

        for(j = 0; j < strlen(valor); j++)
        {
        if(!(seNumero_valor(valor[j])))
        {
            emitir_sor();
        if(mensagemBox_quest("VALOR INVALIDO EM RELACAO A IDADE!!\nATT:\n >>IDADE MAIOR 11 E MENOR QUE 21, VALOR MIN.6985.00 KZ\n>>IDADE MAIOR 20 E MENOR QUE 35, VALOR MIN.10000.00 KZ\n>>IDADE MAIOR 34, VALOR MIN.15000.00 KZ\n INSERIR NOVAMENTE?")==6)
            {
                return 1;
            }
            else
            {
                return 0;

            }
        }
        }

    if(!valor_minimo()){
            emitir_sor();
            if(mensagemBox_quest("VALOR INVALIDO EM RELACAO A IDADE!!\nATT:\n >>IDADE MAIOR 11 E MENOR QUE 21, VALOR MIN.6985.00 KZ\n>>IDADE MAIOR 20 E MENOR QUE 35, VALOR MIN.10000.00 KZ\n>>IDADE MAIOR 34, VALOR MIN.15000.00 KZ\n INSERIR NOVAMENTE?")==6)
            {
                return 1;
            }
            else
            {
                return 0;

            }
    }

return 2;

}


/// VERIFICA SE VALOR VALIDO
int veriValorcli(String valor){

 int j;

        for(j = 0; j < strlen(valor); j++)
        {
        if(!(seNumero_valor(valor[j])))
        {
            emitir_sor();
        if(mensagemBox_quest("VALOR INVALIDO!\n INSERIR NOVAMENTE?")==6)
            {
                return 1;
            }
            else
            {
                return 0;

            }
        }
        }



return 2;

}



#endif // FUNCOES_AUX_H_INCLUDED
