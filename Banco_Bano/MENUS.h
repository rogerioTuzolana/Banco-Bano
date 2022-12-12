#ifndef MENUS_H_INCLUDED
#define MENUS_H_INCLUDED

/// FUNCAO PARA CARREGAR INICIO DO PRGROGRAMA
void finalizando_sistema(){
 int i=0;
                        while(i<=5){
                            system("cls");
                            printf ("\n\n\n\n\t\t\t\t\t\t        ============== FINALIZANDO SISTEMA    ===================");
                            Sleep(300);
                            system("cls");
                            printf ("\n\n\n\n\t\t\t\t\t\t        ============== FINALIZANDO SISTEMA.   ===================");
                            Sleep(300);
                            system("cls");
                            printf ("\n\n\n\n\t\t\t\t\t\t        ============== FINALIZANDO SISTEMA..  ===================");
                            Sleep(300);system("cls");
                            printf ("\n\n\n\n\t\t\t\t\t\t        ============== FINALIZANDO SISTEMA... ===================");
                            Sleep(300);
                            i++;

                        }
                            system("cls");
                            printf ("\n\n\n\n\t\t\t\t\t\t        ==============  SISTEMA FINALIZANDO    ===================\n");
                            printf ("\t\t\t\t\t\t        ==============      BANCO BANO         ===================\n\n");
                            Sleep(200);





}


/// FUNCAO PARA CARREGAR INICIO DO PRGROGRAMA

void carragar_siatema(){

    int i, j;
    system("cls");Sleep(1500);
    printf("\n\n\n\t\t\t\t\t\t=============================================================================================\n");Sleep(300);
    printf("\t\t\t\t\t\t========================================= BANCO =============================================\n\n");Sleep(300);

    printf("\t\t\t\t\t\tSSSSSSSSSSSSSSSS      AAAAAAAAAAAAAAAAAA  NNNNNNN           NNNNNNN   OOOOOOOOOOOOOOOOOOOOOOO\n");Sleep(300);
    printf("\t\t\t\t\t\tSS:::::::::::::::S    A::::::::::::::::A  N:::::N           NNNNNNN   O:::::::::::::::::::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tS:::::SSSSSS::::::S   A::::::::::::::::A  N:::::::N         NNNNNNN   O:::::::::::::::::::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tS:::::S     SSSSSSS   A::::AAAAAAAAA:::A  N::::::::N        NNNNNNN   O:::::OOOOOOOOOOO:::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tS:::::S     SSSSSSS   A::::A       A:::A  N:::::::::N       NNNNNNN   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tS:::::S   SSSSSSSS    A::::A       A:::A  N::::::::::N      N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tS::::SSSSSSSSSSS      A::::AAAAAAAAA:::A  N:::::::::::N     N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tSS::::::SSSSS         A::::::::::::::::A  N::::::::::::N    N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSS::::::::SSSS      A::::::::::::::::A  N::::NNN::::::N   N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSSSSSSSS:::SSSSS    AAAAAAAAAAAAA::::A  N::::N   N:::::N  N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSS        S:::::S   AAAAAA      A::::A  N::::N    N:::::N N:::::N   O:::::0         OOOOOO0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSS       S:::::S S  AAAAAA      A::::A  N::::N     N:::::NN:::::N   O:::::0         O:::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSSSSS     S:::::SS  AAAAAA      A::::A  N::::N       N::::::::::N   O:::::OOOOOOOOOOO:::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tS::::::SSSSSS:::::SS  AAAAAA      A::::A  N::::N         N::::::::N   O:::::::::::::::::::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tS:::::::::::::::SS    AAAAAA      A::::A  N::::N           NN:::::N   O:::::::::::::::::::::0\n");Sleep(300);
    printf("\t\t\t\t\t\tSSSSSSSSSSSSSSS       AAAAAA      AAAAAA  NNNNNN            NNNNNNN   OOOOOOOOOOOOOOOOOOOOOO0\n");Sleep(300);
    printf("\n\n\t\t\t\t\t\t=========================== PROJETO DE AED 2020- 21021 ======================================\n");Sleep(300);
    printf("\t\t\t\t\t\t=============================================================================================\n");Sleep(300);
    printf("\t\t\t\t\t\t===================================== INTEGRANTES DO GRUPO ==================================\n");Sleep(300);
    printf("\t\t\t\t\t\t==== 1- ROGERIO RONA TUZOLANA     ============================ 2- JULIO DA COSTA MANUEL  ====\n");Sleep(300);
    printf("\t\t\t\t\t\t=============================================================================================\n");Sleep(300);
    printf("\t\t\t\t\t\t==== 3- YURI JOSE REGO (NOTURNO)  ============================ 4- EDSON CARLO P.XAUVUNGE ====\n");Sleep(300);
    printf("\t\t\t\t\t\t=============================================================================================\n");Sleep(300);
    fflush (stdout);
    fflush (stdin);
    printf("\n\t\t\t\t\t\t                             ..:: SEJA BENVIDO AO BANCO BANO! ::.. ");
    printf ("\n\n\t\t\t\t\t\tCARREGANDO DADOS DO SISTEMA:\n\t\t\t\t\t\t");

   for (i = 1; i <= 50; i++){
      printf (" %d%%\r", i*2);
      fflush (stdout);

      for (j = 0; j < i; j++){
         if (!j)
           printf("\t\t\t\t\t\t");

         printf ("%c", '|');
         Sleep(10);
      }
   }

    printf ("\n\n\t\t\t\t\t\t                               == INICIALIZANDO SISTEMA... ==");
    Sleep(2500);
    system("cls");

}



/// FUNCAO DO MENU HISTORICO
void menu_historico(LISTA_HISTORICO *ldl,NO_CLIENTE *no){
    String dados;
    int limpa, c_dados;

while(!(strcmp(op,"4") == 0))
    {
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t\t======================== MENU HISTORICO ==================");
        printf("\n\t\t\t\t\t\t========================= SEJA BENVINDO ===================");
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");
        printf("\n\t\t\t\t\t\t= 1- VER QUANTIDADE DE PROCESSSO FEITO                    =");
        printf("\n\t\t\t\t\t\t= 2- VER RELATORIO DE OPERACOES NUMA DETERMINADA DATA     =");
        printf("\n\t\t\t\t\t\t= 3- VER RELATORIO DE UM TIPO DE OPERACAO                 =");
        printf("\n\t\t\t\t\t\t=                                                         =");
        printf("\n\t\t\t\t\t\t= 4- VOLTAR                                               =");
        printf("\n\t\t\t\t\t\t= Opcao:                                                  =");
        printf("\n\t\t\t\t\t\t===========================================================");
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");
        fflush(stdin);
        gotoxy(57,14);
        gets(op);
        system("cls");

        if(strcmp(op,"1") == 0)
        {

                strcpy(aux_global,"**BANCO BANO **\nQUANTIDADE DE PROCESSO FEITO:  ");
                control_requisito = qtd_proc_conta(ldl,no->info.num_conta);
                converter_IntString(control_conta,control_requisito);
                strcat(aux_global,control_conta);
                mensagemBox_info(aux_global);

        }

        else if(strcmp(op,"2") == 0)
        {
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t= ============== INFORMA DATA DESEJADA ==================== =");
            printf("\n\t\t\t\t\t\t= DIA:               MES:               ANO:                =");
            printf("\n\t\t\t\t\t\t= ========================================================= =");
            fflush(stdin);

                /// ******* LER E VALIDAR DIA
            diacliValido:
                gotoxy(55,5);
                gets(dados);
                c_dados = veri_dia(dados);
                if(c_dados == 1){
                    for(limpa = 55; limpa < 70; limpa++)
                    {
                        gotoxy(limpa,5);
                        printf(" ");
                    }
                        goto diacliValido;

                    }else if(c_dados == 0){
                        goto SALTO;

                    }
                    data_control.dia = atoi(dados);

                    /// ******* LER E VALIDAR MES

                    mescliValido:
                        gotoxy(74,5);
                        gets(dados);
                        c_dados = veri_mes(dados);
                        if(c_dados == 1){
                            for(limpa = 74; limpa < 89; limpa++)
                            {
                                gotoxy(limpa,5);
                                printf(" ");
                            }
                                goto mescliValido;

                        }else if(c_dados == 0){
                            goto SALTO;

                        }
                        data_control.mes= atoi(dados);


                            /// ******* LER E VALIDAR ANO

                        anocliValido:
                            gotoxy(93,5);
                            gets(dados);
                            c_dados = veri_ano_cli(dados);
                        if(c_dados == 1){
                            for(limpa = 93; limpa < 110; limpa++)
                            {
                                gotoxy(limpa,5);
                                printf(" ");
                            }
                                goto anocliValido;

                        }else if(c_dados == 0){
                           goto SALTO;

                        }
                        data_control.ano = atoi(dados);

                            operacoes_por_data(ldl,data_control,no->info.num_conta);
                            SALTO:
                            Sleep(0);




        }else if(strcmp(op,"3") == 0){

            system("cls");
            printf("\n\n\n\t\t\t\t\t\t= ============ INFORMA O TIPO DE OPERACAO ===================");
            printf("\n\t\t\t\t\t\t=  ======(TRANSFERENCIA,CONSULTA,DEPOSITO,LEVANTAMENTO)======");
            printf("\n\t\t\t\t\t\t= OPERACAO:                                                 =");
            printf("\n\t\t\t\t\t\t= ===========================================================");
            gotoxy(60,6);
            /// ******* LER E VALIDAR NOME
            nomecliValido:
            gotoxy(60,6);
            gets(dados);
            c_dados = validaNome(dados);
            if(c_dados == 1){
                    nomeOP:
                    for(limpa = 60; limpa < 109; limpa++)
                    {
                    gotoxy(limpa,6);
                    printf(" ");
                    }
                goto nomecliValido;

            }else if(c_dados == 0){
                goto SALT;

            }

            if(historico_operacao(dados,ldl,no->info.num_conta) == 1){
               goto nomeOP;
            }
            SALT:
            Sleep(0);



        }

    }
}


///..MENU DE OPERACOES DOS CLIENTE
void menu_cliente_operacao(LISTA_CLIENTE *lsl,LISTA_HISTORICO *ldl,LISTA_KID *ls,NO_CLIENTE *no)
{
    String dados;
    int limpa,c_dados=0;



    while(!(strcmp(op,"8") == 0))
    {
        system("cls");
        printf("\n\n\n\n\n\t\t\t\t\t\tCLIENTE:%s                 N.CONTA:%s      ",no->info.nome_cliente,no->info.num_conta);
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");
        printf("\n\t\t\t\t\t\t======================== MENU CLIENTE OPERACOES ===========");
        printf("\n\t\t\t\t\t\t========================= SEJA BENVINDO ===================");
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");
        printf("\n\t\t\t\t\t\t= 1- TRANSFERIR                                           =");
        printf("\n\t\t\t\t\t\t= 2- DEPOSITAR                                            =");
        printf("\n\t\t\t\t\t\t= 3- CONSULTAR                                            =");
        printf("\n\t\t\t\t\t\t= 4- LEVANTAR                                             =");
        printf("\n\t\t\t\t\t\t= 5- DEPOSITAR EM KID                                     =");
        printf("\n\t\t\t\t\t\t= 6- CRIAR CONTA KID                                      =");
        printf("\n\t\t\t\t\t\t= 7- HISTORICO DE OPERACOES                               =");
        printf("\n\t\t\t\t\t\t= 8- VOLTAR                                               =");
        printf("\n\t\t\t\t\t\t= Opcao:                                                  =");
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");
        fflush(stdin);
        gotoxy(57,19);
        gets(op);
        system("cls");
        if(strcmp(op,"1") == 0)// CHAMA OPERACAO TRANSFERENCIA
        {
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t== VALOR A TRANSFERIR:                        (KZ)==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);

            rescreverncontat:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                        emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontat;
                        }else{

                            goto sairt;
                        }

                    nconta:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontat;

            }else if(strcmp(verificar_num_conta(lsl,dados)->info.num_conta,no->info.num_conta)== 0){
                emitir_sor();
                if(mensagemBox_quest("NAO PODE FAZER ESTE OPERACAO COM SEU NUMERO  DE CONTA\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontat;
                        }else{

                            goto sairt;
                        }

                    ncontat:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontat;
            }else if(verificar_num_conta(lsl,dados)->info.estado == false){
                emitir_sor();
                mensagemBox_info("NUMERO DE CONTA INSERIDO ESTA DESATIVADO ");
                   goto sairt;
            }
                strcpy(control_conta,dados);
            valort:
            gotoxy(71,6);
            gets(dados);
            c_dados = veriValorcli(dados);
        if(c_dados == 1){
                limpart:
                for(limpa = 71; limpa < 98; limpa++)
            {
                gotoxy(limpa,6);
                printf(" ");
            }
                goto valort;

        }else if(c_dados == 0){
            goto sairt;

        }
            control_valor = atof(dados);
            if(no->info.valor_saldo<control_valor){
                    emitir_sor();
                if(mensagemBox_quest("O MONTANTE DESEJADO PARA TRANSFERIR E MAIOR QUE SALDO DE CONTA\n INSERIR NOVAMENTE? ")== 6){
                        goto limpart;
                        }else{

                            goto sairt;
                        }

            }


            if(tranferencia(lsl,no,control_conta,control_valor)){
                strcpy(aux_global,"   TRANSFERENCIA FEITA COM SUCESSO\nPARA CONTA DE: ");
                strcpy(control_conta,verificar_num_conta(lsl,control_conta)->info.nome_cliente );
                strcat(aux_global,control_conta);

                /// GUARDANDO OS DADOS NO FICHEIRO
                registar_historico(ldl,criar_no_historico(info("TRANSFERENCIA",control_valor,no->info.num_conta)));
                Guardar_historico(ldl);
                Guardar_cliente(lsl);
                /// MOSTRANDO MENSAGEM NA TELA
                mensagemBox_info(aux_global);

            }
            sairt:
                Sleep(0);

            }else if(strcmp(op,"2") == 0)// CHAMA OPERACAO DEPOSITAR
            {
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t== VALOR A DEPOSITAR:                         (KZ)==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);

            rescreverncontac:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontad;
                        }else{

                            goto saird;
                        }

                    ncontad:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontac;
            }else if(verificar_num_conta(lsl,dados)->info.estado == false){
                emitir_sor();
                mensagemBox_info("NUMERO DE CONTA INSERIDO ESTA DESATIVADO ");
                   goto saird;
            }
            strcpy(control_conta,dados);

            valord:
            gotoxy(70,6);
            gets(dados);
            c_dados = veriValorcli(dados);
        if(c_dados == 1){
                limpard:
                for(limpa = 70; limpa < 99; limpa++)
            {
                gotoxy(limpa,6);
                printf(" ");
            }
                goto valord;

        }else if(c_dados == 0){
            goto saird;

        }
            control_valor = atof(dados);

            if(control_valor<0){
                    emitir_sor();
                if(mensagemBox_quest("VALOR NAO PODE SER NEGATIVO\n INSERIR NOVAMENTE? ")== 6){
                        goto limpard;
                        }else{

                            goto saird;
                        }
            }


            if(depositar(lsl,control_conta,control_valor)){
                strcpy(aux_global,"DEPOSITO FEITO COM SUCESSO\nPARA CONTA DE: ");
                strcpy(control_conta,verificar_num_conta(lsl,control_conta)->info.nome_cliente );
                strcat(aux_global,control_conta);

                                /// GUARDANDO OS DADOS NO FICHEIRO
                registar_historico(ldl,criar_no_historico(info("DEPOSITO",control_valor,no->info.num_conta)));
                Guardar_historico(ldl);
                Guardar_cliente(lsl);
                //***********************
                mensagemBox_info(aux_global);
            }

            saird:
            Sleep(0);
        }
        else if(strcmp(op,"3") == 0)// CHAMA OPERACAO CONSULTA
            {
            consulta(no);

            /// GUARDANDO OS DADOS NO FICHEIRO
            registar_historico(ldl,criar_no_historico(info("CONSULTA",0,no->info.num_conta)));
            Guardar_historico(ldl);
            Guardar_cliente(lsl);

        }
        else if(strcmp(op,"4") == 0)// CHAMA OPERACAO LEVANTAMENTO
            {
            printf("\n\n\n\t\t\t\t\t\t========================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:%-23s==",no->info.num_conta);
            printf("\n\t\t\t\t\t\t== VALOR A LEVANTAR:                              (KZ)==");
            printf("\n\t\t\t\t\t\t========================================================");
            fflush(stdin);

            valorl:
            gotoxy(69,6);
            gets(dados);
            c_dados = veriValorcli(dados);
        if(c_dados == 1){
                limparl:
                for(limpa = 69; limpa < 100; limpa++)
            {
                gotoxy(limpa,6);
                printf(" ");
            }
                goto valorl;

        }else if(c_dados == 0){
            goto sairl;

        }
            control_valor = atof(dados);
            if(no->info.valor_saldo<control_valor){
                    emitir_sor();
                if(mensagemBox_quest("O MONTANTE DESEJADO PARA SACAR E MAIOR QUE SALDO DE CONTA\n INSERIR NOVAMENTE? ")== 6){
                        goto limparl;
                        }else{

                            goto sairl;
                        }
            }


            if(levantamento(no,control_valor)){
                strcpy(aux_global,"LEVANTAMENTO FEITO COM SUCESSO\nVALOR SACADO(kz): ");
                converter_FloatString(control_conta,control_valor);
                strcat(aux_global,control_conta);

                /// GUARDANDO OS DADOS NO FICHEIRO
                registar_historico(ldl,criar_no_historico(info("LEVANTAMENTO",control_valor,no->info.num_conta)));
                Guardar_historico(ldl);
                Guardar_cliente(lsl);
                ///*****************************
                mensagemBox_info(aux_global);

            }
            sairl:
                Sleep(0);

       } else if(strcmp(op,"5") == 0){// CHAMA OPERACAO CRIAR CONTA KID
           if(veri_se_tem_kid(no,*ls)== false){
                emitir_sor();
                mensagemBox_info("NAO TENS NENHUMA CONTA KID CRIADA \n ATT: CRIA UMA CONTA KID PRIMEIRO");
                goto sairk;

           }

          system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== KID ------------>  N.CEDULA:                   ==");
            printf("\n\t\t\t\t\t\t== VALOR A DEPOSITAR:                         (KZ)==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);

            rescreverncontak:
            gotoxy(80,5);
            gets(dados);
            if(!(verificar_num_cedula(*ls,dados))){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CEDULA KID INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontak;
                        }else{

                            goto sairk;
                        }

                    ncontak:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontak;
            }
            strcpy(control_conta,dados);

            valork:
            gotoxy(70,6);
            gets(dados);
            c_dados = veriValorcli(dados);
        if(c_dados == 1){
                limpark:
                for(limpa = 70; limpa < 99; limpa++)
            {
                gotoxy(limpa,6);
                printf(" ");
            }
                goto valork;

        }else if(c_dados == 0){
            goto sairk;

        }
            control_valor = atof(dados);

            if(control_valor<0){
                    emitir_sor();
                if(mensagemBox_quest(" VALOR NAO PODER SER NEGATIVO\n INSERIR NOVAMENTE? ")== 6){
                        goto limpark;
                        }else{

                            goto sairk;
                        }
            }


            if(depositar_kid(ls,control_conta,control_valor,no)){

                /// GUARDANDO OS DADOS NO FICHEIRO
                registar_historico(ldl,criar_no_historico(info("TRANSFERENCIA",control_valor,no->info.num_conta)));
                Guardar_historico(ldl);
                Guardar_cliente(lsl);
                Guardar_kid(*ls);

                mensagemBox_info("DEPOSITO FEITO COM SUCESSO ");
            }

            sairk:
            Sleep(0);
        }
        else if(strcmp(op,"6") == 0){
                if(secheia_kid(*ls)){
                emitir_sor();
                mensagemBox_info("IMPOSSIVEL CRIAR CONTA KID \n ATT:\n**LISTA KID CHEIA**");

                }else if(no->info.valor_saldo > 150000){

                    if(registar_kid(ls,ler_dados_kid(no,*ls),no)){
                            ///registando historico e armazenar no dados no ficheiro
                                registar_historico(ldl,criar_no_historico(info("TRANSFERENCIA",20000.00,no->info.num_conta)));
                                no->info.num_movimento++;
                                Guardar_historico(ldl);
                                Guardar_cliente(lsl);
                                Guardar_kid(*ls);
                                mensagemBox_info("CONTA KID CRIADA COM SUCESSO**");


                        }else{
                            emitir_sor();
                        mensagemBox_info("NAO FOI POSSIVEL CRIAR CONTA KID**");
                        cod_auto_kid--;
                        }
                }else{
                emitir_sor();
                mensagemBox_info("**NAO TENS SALDO MIN.PARA ABERTURA DE CONTA KID ** \n ATT:\n**SALDO CLIENTE > 150000.00 **");

                }

        }
        else if(strcmp(op,"7") == 0)
        {
            menu_historico(ldl,no);
        }

    }

}


///..MENU DE SISTEMA

void menu_sistema(LISTA_CLIENTE *lsl,LISTA_HISTORICO *ldl,LISTA_KID *ls)
{
     String dados;
    int limpa, c_dados=0;

    while(!(strcmp(op,"V") == 0))
    {
        system("cls");
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");
        printf("\n\t\t\t\t\t\t========================== MENU SISTEMA ===================");
        printf("\n\t\t\t\t\t\t========================= SEJA BENVINDO ===================");
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");
        printf("\n\t\t\t\t\t\t= 1- VER QTD DE CLIENTES EXISTENE                         =");
        printf("\n\t\t\t\t\t\t= 2- VER QTD DE KIDS EXISTENE                             =");
        printf("\n\t\t\t\t\t\t= 3- LISTAR CLIENTES COM + DE N CONTAS KIDS               =");
        printf("\n\t\t\t\t\t\t= 4- LISTAR UM RANKING DOS CLIENTES + ATTIVO NO BANCO     =");
        printf("\n\t\t\t\t\t\t= 5- LISTAR INFORMACOES DOS CLIENTE                       =");
        printf("\n\t\t\t\t\t\t= 6- VER INFORMACOES DE UM CLIENTE                        =");
        printf("\n\t\t\t\t\t\t= 7- LISTAR HISTORICO E OS DADOS DE UM CLIENTE            =");
        printf("\n\t\t\t\t\t\t= 8- LISTAR CLIENTE DA MESMA DADA DE CRIACAO CONTA        =");
        printf("\n\t\t\t\t\t\t= 9- LISTAR CLIENTE COM IDADE ENTRE X E Y                 =");
        printf("\n\t\t\t\t\t\t= 10- DEBITA 1.5%% DO VALOR DE TODAS CONTA                 =");
        printf("\n\t\t\t\t\t\t= 11- DESATIVAR CONTA CLIENTE                             =");
        printf("\n\t\t\t\t\t\t= 12- CONTA COM SALDO MENOR DE N                          =");
        printf("\n\t\t\t\t\t\t= 13- LISTAR CLIENTE EM ORDEM ALFABETICA                  =");
        printf("\n\t\t\t\t\t\t=                                                         =");
        printf("\n\t\t\t\t\t\t= R- REGISTAR CLIENTE                                     =");
        printf("\n\t\t\t\t\t\t= A- ATIVAR CONTA CLIENTE                                 =");
        printf("\n\t\t\t\t\t\t= V- VOLTAR                                               =");
        printf("\n\t\t\t\t\t\t= Opcao:                                                  =");
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");
        fflush(stdin);
        gotoxy(57,23);
        gets(op);
        system("cls");
        if(strcmp(op,"1") == 0)
        {
                strcpy(aux_global,"**BANCO BANO **\n\nQUANTIDADE EXISTENTE DE CONTAS E : ");
                control_requisito = qtd_contas_exist(lsl);
                converter_IntString(control_conta,control_requisito);
                strcat(aux_global,control_conta);
                mensagemBox_info(aux_global);

            }else if(strcmp(op,"2") == 0){

            strcpy(aux_global,"**BANCO BANO **\n\nQUANTIDADE DE CONTAS KID E :");
                control_requisito = ls->qtd;
                converter_IntString(control_conta,control_requisito);
                strcat(aux_global,control_conta);
                mensagemBox_info(aux_global);

        }else if(strcmp(op,"3") == 0){
            if(sevazia_kid(*ls)){
                    emitir_sor();
                        mensagemBox_info(" LISTA KID VAZIA! ");
                        goto s;
                    }
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== QUANTIDADE  ---------> N:                      ==");
            printf("\n\t\t\t\t\t\t==                 BANCO BANO                     ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);
            n:
            gotoxy(77,5);
            gets(dados);
            c_dados = seNumeroValido(dados);
        if(c_dados == 1){
                for(limpa = 77; limpa < 99; limpa++)
            {
                gotoxy(limpa,5);
                printf(" ");
            }
                goto n;

        }else if(c_dados == 0){
            goto s;

        }
            control_requisito = atoi(dados);

            cli_n_conta_kid(lsl,*ls,control_requisito);
            s:
            Sleep(0);

        }
        else if(strcmp(op,"4") == 0){

           lista_cliente_ranking(lsl);

       } else if(strcmp(op,"5") == 0){

            listar_cliente(lsl);
        }
        else if(strcmp(op,"6") == 0){
                if(sevazia_cl(lsl)){
            mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
            goto hdc;

            }
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t==                 BANCO BANO                     ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);
             NUMCONTAc:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontatTc;
                        }else{

                            goto hdc;
                        }

                    ncontatTc:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto NUMCONTAc;
            }
            system("cls");
            mostrar_cliente(lsl,dados);
            hdc:
                Sleep(0);

        }
        else if(strcmp(op,"7") == 0)
        {
             if(sevazia_cl(lsl)){
                    emitir_sor();
            mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
            goto hd;

            }
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t==                 BANCO BANO                     ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);
            NUMCONTA:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto st;
                        }else{

                            goto hd;
                        }

                    st:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto NUMCONTA;
            }
            mostrar_hist_e_dado_clie(lsl,ldl,dados);

            hd:
                Sleep(0);

        }else if(strcmp(op,"8") == 0)
        {
            if(sevazia_cl(lsl)){
                    emitir_sor();
                        mensagemBox_info(" LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
                        goto SALTOD;
                    }
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t= ============== INFORMA DATA DESEJADA ==================== =");
            printf("\n\t\t\t\t\t\t= DIA:               MES:               ANO:                =");
            printf("\n\t\t\t\t\t\t= ========================================================= =");
            fflush(stdin);

                /// ******* LER E VALIDAR DIA
            diacliValidoD:
                gotoxy(55,5);
                gets(dados);
                c_dados = veri_dia(dados);
                if(c_dados == 1){
                    for(limpa = 55; limpa < 70; limpa++)
                    {
                        gotoxy(limpa,5);
                        printf(" ");
                    }
                        goto diacliValidoD;

                    }else if(c_dados == 0){
                        goto SALTOD;

                    }
                    data_control.dia = atoi(dados);

                    /// ******* LER E VALIDAR MES

                    mescliValidoD:
                        gotoxy(74,5);
                        gets(dados);
                        c_dados = veri_mes(dados);
                        if(c_dados == 1){
                            for(limpa = 74; limpa < 89; limpa++)
                            {
                                gotoxy(limpa,5);
                                printf(" ");
                            }
                                goto mescliValidoD;

                        }else if(c_dados == 0){
                            goto SALTOD;

                        }
                        data_control.mes= atoi(dados);


                            /// ******* LER E VALIDAR ANO

                        anocliValidoD:
                            gotoxy(93,5);
                            gets(dados);
                            c_dados = veri_ano_cli(dados);
                        if(c_dados == 1){
                            for(limpa = 93; limpa < 110; limpa++)
                            {
                                gotoxy(limpa,5);
                                printf(" ");
                            }
                                goto anocliValidoD;

                        }else if(c_dados == 0){
                           goto SALTOD;

                        }
                        data_control.ano = atoi(dados);

                             lista_cliente_dataX(lsl,data_control);
                            SALTOD:
                            Sleep(0);

        }else if(strcmp(op,"9") == 0)
        {
            if(sevazia_cl(lsl)){
                    emitir_sor();
                        mensagemBox_info(" LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
                        goto sI;
                    }

                    int mini,maxi;
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== IDADE MIN   --------->  N.:                      ==");
            printf("\n\t\t\t\t\t\t== IDADE MAX   --------->  N.:                      ==");
            printf("\n\t\t\t\t\t\t==                 BANCO BANO                       ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);
            nI:
            gotoxy(79,5);
            gets(dados);
            c_dados = seNumeroValido(dados);
        if(c_dados == 1){
                for(limpa = 77; limpa < 99; limpa++)
            {
                gotoxy(limpa,5);
                printf(" ");
            }
                goto nI;

        }else if(c_dados == 0){
            goto sI;

        }

            mini = atoi(dados);

            nII:
            gotoxy(79,6);
            gets(dados);
            c_dados = seNumeroValido(dados);
        if(c_dados == 1){
                for(limpa = 77; limpa < 99; limpa++)
            {
                gotoxy(limpa,6);
                printf(" ");
            }
                goto nII;

        }else if(c_dados == 0){
            goto sI;

        }
            maxi = atoi(dados);


            lista_cliente_idadeXY(lsl,mini,maxi);
            sI:
            Sleep(0);



        }else if(strcmp(op,"10") == 0)
        {
            debitar_conta(lsl);
            Guardar_cliente(lsl);



        }else if(strcmp(op,"11") == 0)
        {
             if(sevazia_cl(lsl)){
                    emitir_sor();
                        mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
                        goto sairtD;
                    }

        system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t==               BANCO BANO                       ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);

            rescreverncontatD:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontatD;
                        }else{

                            goto sairtD;
                        }

                    ncontatD:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontatD;

            }
                   if(desativar_conta(verificar_num_conta(lsl,dados),ls)){
                        mensagemBox_info(" CONTA DESATIVADA COM SUCESSO");
                        Guardar_cliente(lsl);

                   }else{
                    emitir_sor();
                    mensagemBox_info(" CONTA COM SALDO NAO PODE DESATIVA\n ATT: SACA O DINHEIRO NA CONTA");

                   }


                    sairtD:
                    Sleep(0);



        }else if(strcmp(op,"12") == 0)
        {
                if(sevazia_cl(lsl)){
                        emitir_sor();
                        mensagemBox_info(" LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
                        goto sn;
                    }
            system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== VALOR  ------------>  N.:                      ==");
            printf("\n\t\t\t\t\t\t==                 BANCO BANO                     ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);
            nn:
            gotoxy(77,5);
            gets(dados);
            c_dados = veriValorcli(dados);
        if(c_dados == 1){
                for(limpa = 77; limpa < 99; limpa++)
            {
                gotoxy(limpa,5);
                printf(" ");
            }
                goto nn;

        }else if(c_dados == 0){
            goto sn;

        }
            control_valor = atof(dados);

            if(cliente_com_saldo_menor_n(lsl,control_valor)){
                emitir_sor();
                strcpy(aux_global,"EXISTE CLIENTE COM SALDO MENOR QUE(kz): ");
                converter_FloatString(control_conta,control_valor);
                strcat(aux_global,control_conta);
                mensagemBox_info(aux_global);

            }else{
                emitir_sor();
                strcpy(aux_global,"NAO EXISTE CLIENTE COM SALDO MENOR QUE(kz): ");
                converter_FloatString(control_conta,control_valor);
                strcat(aux_global,control_conta);
                mensagemBox_info(aux_global);

            }

            sn:
            Sleep(0);

        }else if(strcmp(op,"13") == 0)
        {

            lista_cliente_ordem_alfabetica(lsl);

        }else if(strcmp(op,"R") == 0){

        if(registar_cliente(lsl,ldl,criar_no_cliente(ler_dados_cliente(lsl)))){
            mensagemBox_info("**CLIENTE REGISTADO COM SUCESSO** \n**BENVINDO AO BANCO BANO**");
            Guardar_cliente(lsl);

        }else{
            emitir_sor();
            mensagemBox_info("**NAO FOI POSIVEL REGISTAR O CLIENTE**");
            cod_auto_cliente--;
            }

        }else if(strcmp(op,"A") == 0)
        {
             if(sevazia_cl(lsl)){
                    emitir_sor();
                        mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
                        goto sairtA;
                    }

        system("cls");
            printf("\n\n\n\t\t\t\t\t\t====================================================");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t==               BANCO BANO                       ==");
            printf("\n\t\t\t\t\t\t====================================================");
            fflush(stdin);

            rescreverncontatA:
            gotoxy(80,5);
            gets(dados);
            if(verificar_num_conta(lsl,dados) == NULL){
                    emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto ncontatA;
                        }else{

                            goto sairtA;
                        }

                    ncontatA:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto rescreverncontatA;

            }
                   if(ativar_conta(verificar_num_conta(lsl,dados),ls)){
                        mensagemBox_info(" CONTA ATIVADA COM SUCESSO");
                        Guardar_cliente(lsl);

                   }else{
                    emitir_sor();
                    mensagemBox_info(" CONTA INFORMADA JA ENCONTRA SE ATIVADA ");

                   }


                    sairtA:
                    Sleep(0);



        }
    }

}


void menuPrincipal(LISTA_CLIENTE *cliente_l,LISTA_HISTORICO *historico_l, LISTA_KID *kid_l){
    int limpa;

    while(!(strcmp(op,"3") == 0))
    {
        system("cls");Sleep(100);
        printf("\n\n\n\n\n\t\t\t\t\t\t======================== MENU BANCO BANO ==================");Sleep(100);
        printf("\n\t\t\t\t\t\t========================= SEJA BENVINDO ===================");Sleep(100);
        printf("\n\t\t\t\t\t\t=---------------------------------------------------------=");Sleep(100);
        printf("\n\t\t\t\t\t\t= 1- CLIENTE                                              =");Sleep(100);
        printf("\n\t\t\t\t\t\t= 2- SISTEMA                                              =");Sleep(100);
        printf("\n\t\t\t\t\t\t= 3- SAIR                                                 =");Sleep(100);
        printf("\n\t\t\t\t\t\t=                                                         =");Sleep(100);
        printf("\n\t\t\t\t\t\t= Opcao:                                                  =");Sleep(100);
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");Sleep(100);
        printf("\n\t\t\t\t\t\t-----------------------------------------------------------");Sleep(100);
        fflush(stdin);
        gotoxy(57,13);
        gets(op);
        system("cls");

        if(strcmp(op,"1") == 0)
        {
            if(sevazia_cl(cliente_l)){
            mensagemBox_info("LISTA VAZIA, NAO EXISTE NENHUM CLIENE REGISTADO ");
            goto SAIRAc;

            }

            system("cls");
            printf("\n\n\n\t\t\t\t\t\t----------------------------------------------------");
            printf("\n\t\t\t\t\t\t== CLIENTE --------->  N.CONTA:                   ==");
            printf("\n\t\t\t\t\t\t==                  BANCO BANO                    ==");
            printf("\n\t\t\t\t\t\t----------------------------------------------------");
            fflush(stdin);
             RAc:
            gotoxy(80,5);
            gets(control_conta);
            if(verificar_num_conta(cliente_l,control_conta) == NULL){
                   emitir_sor();
                if(mensagemBox_quest("NUMERO DE CONTA INVALIDO\n INSERIR NOVAMENTE? ")== 6){
                        goto LTc;
                        }else{

                            goto SAIRAc;
                        }

                    LTc:
                    for(limpa = 80; limpa < 99; limpa++)
                    {
                    gotoxy(limpa,5);
                    printf(" ");
                    }
                    goto RAc;
            }else if(verificar_num_conta(cliente_l,control_conta)->info.estado == false){

                mensagemBox_info("CONTA DESATIVADA IMPOSSIVEL ACESSO ");
                    goto SAIRAc;
            }
                menu_cliente_operacao(cliente_l,historico_l,kid_l,verificar_num_conta(cliente_l,control_conta));
            SAIRAc:
                Sleep(0);

        }

        else if(strcmp(op,"2") == 0)
        {

        menu_sistema(cliente_l,historico_l,kid_l);


        }

    }



















}









#endif // MENUS_H_INCLUDED
