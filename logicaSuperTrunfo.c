/*O objetivo é construir a base de um jogo Super Trunfo de países, um sistema 
para cadastrar as cartas com informaçoes das cidades
-O programa deve ler corretamente os dados de duas cartas do usuário vai padrão.
-O programa deve armazenar os dados lidos em variáveis apropriadas.
-O programa deve exibir os dados de cada carta na tela, formatadas de forma clara e organizada.*/

#include <stdio.h>

int main(){
    
    //declarando as variáveis das cartas 1 e 2
    char estado_carta1[10], codigo_carta1[10], cidade_carta1[50];
    char estado_carta2[10], codigo_carta2[10], cidade_carta2[50];

    int populacao_carta1, populacao_carta2;
    float area_carta1, area_carta2;
    float pib_carta1, pib_carta2;
    int turistico_carta1, turistico_carta2;
    float densidade_popu_carta1, pib_per_carta1;
    float densidade_popu_carta2, pib_per_carta2;
    int opcao; //variavel para o switch

    //pedindo ao usuário que entre com os dados da carta1 pelo scanf
    printf("============================================>>>>>SUPER TRUNFO<<<<<=============================================\n");
    printf("Entre com os dados da Carata 1: \n");

    printf("Entre com uma leta de 'A' a 'H' para representar um estado: ");
    scanf(" %s", estado_carta1);

    printf("Entre com a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", codigo_carta1);

    printf("Entre com o nome da cidade: ");
    scanf(" %[^\n]", cidade_carta1);

    printf("Entre com população da cidade: ");
    scanf(" %d", &populacao_carta1);

    printf("Entre com a Área da cidade em Km²: ");
    scanf(" %f", &area_carta1);

    printf("Entre com o PIB(poduto interno bruto) da cidade: ");
    scanf(" %f", &pib_carta1);

    printf("Entre com os pontos turistivos da cidade: ");
    scanf(" %d", &turistico_carta1);


    //entrando co, os dados da carta 2
    printf("==========================================================================================================================\n");
    printf("Entre com os dados da Carta 2:\n");

    printf("Entre com uma leta de 'A' a 'H' para representar um estado: ");
    scanf(" %s", estado_carta2);

    printf("Entre com a letra do estado seguida de um número de 01 a 04: ");
    scanf(" %s", codigo_carta2);

    printf("Entre com o nome da cidade: ");
    scanf(" %[^\n]", cidade_carta2);

    printf("Entre com população da cidade: ");
    scanf("%d", &populacao_carta2);

    printf("Entre com a Área da cidade em Km²: ");
    scanf(" %f", &area_carta2);

    printf("Entre com o PIB(poduto interno bruto) da cidade: ");
    scanf(" %f", &pib_carta2);

    printf("Entre com os pontos turistivos da cidade: ");
    scanf(" %d", &turistico_carta2);

    //imprimindo dados da carta 1]

    printf("===========================================================================================================================\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado_carta1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", cidade_carta1);
    printf("População da Cidade: %d\n", populacao_carta1);
    printf("Área da Cidade: %.2f Km²\n", area_carta1);
    printf("PIB: R$%.2f bilhões de reais.\n", pib_carta1);
    printf("Número de pontos tureisticos: %d\n", turistico_carta1);

    densidade_popu_carta1 = populacao_carta1 / area_carta1; //logica para a divisão da densidade populacional
    printf("Densidade populacional: %.2f hab/Km²\n", densidade_popu_carta1);

    pib_per_carta1 = (pib_carta1 * 10000) / populacao_carta1;//logica para a divisão do PIB percapita
    printf("PIB percapita: R$ %.2f\n", pib_per_carta1);


    // imprimindo os dados da carta 2]
    printf("===========================================================================================================================\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado_carta2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", cidade_carta2);
    printf("População da Cidade: %d\n", populacao_carta2);
    printf("Área da Cidade: %.2f Km²\n", area_carta2);
    printf("PIB: R$%.2f bilhões de reais.\n", pib_carta2);
    printf("Número de pontos tureisticos: %d\n", turistico_carta2);

    
    densidade_popu_carta2 = populacao_carta2 / area_carta2; //logica para a divisão da densidade populacional
    printf("Densidade populacional: %.2f hab/Km²\n", densidade_popu_carta2);

    pib_per_carta2 = (pib_carta2 * 10000) / populacao_carta2;//logica para a divisão do PIB percapita
    printf("PIB percapita: R$ %.2f\n", pib_per_carta2);


    

    //entrando com menu switch, para que o usuario posso esclher um atributo de comparação
    printf("==========================================================================================================================\n");
    printf("Escolha o atibuto para ser comparado.\n");
    printf("1 - Para Pupulação da cidade.\n");
    printf("2 - Para área da cidade.\n");
    printf("3 - Para PIB.\n");
    printf("4 - Pontos turistiscos.\n");
    printf("5 - PIB percapita.\n");
    printf("6 - Densidade Populacional.\n");
    printf("Encolha um atributo: ");
    scanf(" %d", &opcao);

    //estrututa switch para comparação dos atributos
    switch (opcao){
        case 1: // atributo população
        if (populacao_carta1 > populacao_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Pupulação\n");
            printf("População Carta 1 (%s): %d\n",cidade_carta1, populacao_carta1);
            printf("População Carta 2 (%s): %d\n",cidade_carta2, populacao_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else if (populacao_carta2 > populacao_carta1){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Pupulação\n");
            printf("População Carta 1 (%s): %d\n",cidade_carta1, populacao_carta1);
            printf("População Carta 2 (%s): %d\n",cidade_carta2, populacao_carta2);
            printf("**********************************************\n");
            printf("carta 2 (%s) VENCEU!\n",cidade_carta2);
            printf("**********************************************\n");

        } else {
            printf("Atributo escolhido: População\n");             
            printf("População Carta 1 (%s): %d\n",cidade_carta1, populacao_carta1);
            printf("População Carta 2 (%s): %d\n",cidade_carta2, populacao_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");

        } break; 

        case 2: // atributo área da cidade
        if (area_carta1 > area_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Área da Cidade\n");
            printf("Área da cidade Carta 1 (%s): %f Km²\n",cidade_carta1, area_carta1);
            printf("Área da cidade Carta 2 (%s): %f Km²\n",cidade_carta2, area_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else if (area_carta2 > area_carta1){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Área da Cidade\n");
            printf("Área da cidade Carta 1 (%s): %f Km²\n",cidade_carta1, area_carta2);
            printf("Área da cidade Carta 2 (%s): %f Km²\n",cidade_carta2, area_carta2);
            printf("**********************************************\n");
            printf("Carta 2 (%s) VENCEU!\n", cidade_carta2);
            printf("**********************************************\n");
        } else{
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Área da Cidade \n");             
            printf("Área da cidade Carta 1 (%s): %f Km²\n",cidade_carta1, area_carta1);
            printf("Área da cidade Carta 2 (%s): %f Km²\n",cidade_carta2, area_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");

        } break;

        case 3:
        if (pib_carta1 > pib_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB \n");  
            printf("PIB Carta 1 (%s): R$ %f\n",cidade_carta1, pib_carta1);
            printf("PIB Carta 2 (%s): R$ %f\n",cidade_carta2, pib_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else if (pib_carta2 > pib_carta1){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB \n");  
            printf("PIB Carta 1 (%s): R$ %f\n",cidade_carta1, pib_carta1);
            printf("PIB Carta 2 (%s): R$ %f\n",cidade_carta2, pib_carta2);
            printf("**********************************************\n");
            printf("Carta 2 (%s) VENCEU!\n", cidade_carta2);
            printf("**********************************************\n");

        } else {
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB \n");           
            printf("PIB Carta 1 (%s): R$ %f \n",cidade_carta1, pib_carta1);
            printf("PIB Carta 2 (%s): R$ %f \n",cidade_carta2, pib_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");
        }

        case 4:
        if (turistico_carta1 > turistico_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Pontos Turisticos\n");
            printf("Pontos Turísticos Carta 1 (%s): %d\n",cidade_carta1, turistico_carta1);
            printf("Pontos Turísticos Carta 2 (%s): %d\n",cidade_carta2, turistico_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");
                
        } else if (turistico_carta2 > turistico_carta1){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Pontos Turísticos\n");
            printf("Pontos Turísticos Carta 1 (%s): %d\n",cidade_carta1, turistico_carta1);
            printf("Pontos Turísticos Carta 2 (%s): %d\n",cidade_carta2, turistico_carta2);
            printf("**********************************************\n");
            printf("Carta 2 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

            } else {
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Pontos Turísticos\n");           
            printf("Pontos Turísticos Carta 1 (%s): %d\n",cidade_carta1, turistico_carta1);
            printf("Pontos Turísticos Carta 2 (%s): %d\n",cidade_carta2, turistico_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");

        }break;

        case 5:
            if (pib_per_carta1 > pib_per_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB Per Capita\n");
            printf("Pontos PIB Per Capita Carta 1 (%s): R$ %.2f1\n",cidade_carta1, pib_per_carta1);
            printf("Pontos PIB Per Capita Carta 2 (%s): R$ %.2f\n",cidade_carta2, pib_per_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else if (pib_per_carta2 > pib_per_carta1){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB Per Capita\n");
            printf("Pontos PIB Per Capita Carta 1 (%s): R$ %.2f\n",cidade_carta1, pib_per_carta1);
            printf("Pontos PIB Per Capita Carta 2 (%s): R$ %.2f\n",cidade_carta2, pib_per_carta2);
            printf("**********************************************\n");
            printf("Carta 2 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");
        } else{
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: PIB Per Capita\n");           
            printf("Pontos PIB Per Capita Carta 1 (%s): R$ %.2f\n",cidade_carta1, pib_per_carta1);
            printf("Pontos PIB Per Capita Carta 2 (%s): R$ %.2f\n",cidade_carta2, pib_per_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");
                
        }break;

        case 6:
        if (densidade_popu_carta1 < densidade_popu_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("Densidade Populacional Carta 1 (%s): %.2f1\n",cidade_carta1, densidade_popu_carta1);
            printf("Densidade Populacional Carta 2 (%s): %.2f\n",cidade_carta2, densidade_popu_carta2);
            printf("**********************************************\n");
            printf("Carta 1 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else if(densidade_popu_carta2 < densidade_popu_carta2){
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Densidade Populacional\n");
            printf("Densidade Populacional Carta 1 (%s): %.2f1\n",cidade_carta1, densidade_popu_carta1);
            printf("Densidade Populacional Carta 2 (%s): %.2f\n",cidade_carta2, densidade_popu_carta2);
            printf("**********************************************\n");
            printf("Carta 2 (%s) VENCEU!\n", cidade_carta1);
            printf("**********************************************\n");

        } else{
            printf("==========================================================================================================================\n");
            printf("Atributo escolhido: Densidade Populacional\n");           
            printf("Densidade Populacional Carta 1 (%s): %.2f\n",cidade_carta1, densidade_popu_carta1);
            printf("Densidade Populacional Carta 2 (%s): %.2f\n",cidade_carta2, densidade_popu_carta2);
            printf("**********************************************\n");
            printf("O jogo EMPATOU!\n");
            printf("**********************************************\n");

        } break;

        default:
            printf("==========================================================================================================================\n");
            printf("Opção invalida!");
            printf("==========================================================================================================================\n");

    }

    return 0;

}