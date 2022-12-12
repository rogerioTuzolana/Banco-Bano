
#include "Metodos.h"
#include "MENUS.h"



/// FUNCAO PRINCIPAL
///*****************************
int main()
{

    setlocale(LC_ALL,"portuguese");
    /// PARA TROCAR COR DE LETRA E FUNDO DE TELA
    system("color 0b");


    /// ********* LISTA CLIENTE *********
    LISTA_CLIENTE *cliente_l = criar_lista_cliente();
    leituraArquivo_cliente(cliente_l);

    /// ********** LISTA HISTORICO *******
    LISTA_KID kid_l;
    inicilizar_lista_kid(&kid_l);
    leituraArquivo_kid(&kid_l);


    /// ********** LISTA HISTORICO *******
    LISTA_HISTORICO *historico_l = criar_lista_historico();
    leituraArquivo_historico(historico_l);

    /// ********** FUNCAO PARA CARREGAR SISTEMA *******
    carragar_siatema();

    /// ********** FUNCAO QUE CHAMA O MENU PRINCIOPAL *******
    menuPrincipal(cliente_l,historico_l,&kid_l);
    finalizando_sistema();

    return 0;
}
