#include <stdio.h>


int main() {
        
    //Declarar Variáveis da Carta nº 01.
        char carta01_estado;
        char carta01_codigo[50];
        char carta01_cidade[50];
        int carta01_populacao;
        float carta01_area;
        float carta01_PIB;
        int carta01_ponto_turistico;
        float carta01_densidade_populacional;
        float carta01_PIB_per_capita;

    //Declarar Variáveis da Carta nº 02.
        char carta02_estado;
        char carta02_codigo[50];
        char carta02_cidade[50];
        int carta02_populacao;
        float carta02_area;
        float carta02_PIB;
        int carta02_ponto_turistico;
        float carta02_densidade_populacional;
        float carta02_PIB_per_capita;

        
    //Cadastrar os dados de entrada da Carta nº 01.
        printf("***Cadastrar Carta nº 01***\n");//Título da operação da entrada de dados da carta 01.

        printf("Digite a letra do Estado: ");//Cadastro da letra do estado da carta 01.
        scanf(" %c", &carta01_estado);

        printf("Digite o código da Cidade: ");//Cadastro do código da carta 01.
        scanf("%s", carta01_codigo);

        printf("Digite o nome da Cidade: ");//Cadastro do nome da cidade da carta 01.
        scanf("%s", carta01_cidade);

        printf("Digite a População: ");//Cadastro da População da carta 01.
        scanf("%d", &carta01_populacao);

        printf("Digite a Área km²: ");//Cadastro da Área em km² da carta 01.
        scanf("%f", &carta01_area);

        printf("Digite o PIB: ");//Cadastro do PIB da carta01.
        scanf("%f", &carta01_PIB);

        printf("Digite o número de Pontos Turísticos: ");//Cadastro do número de pontos turísticos da carta 01.
        scanf("%d", &carta01_ponto_turistico);

        carta01_densidade_populacional = (float)carta01_populacao / carta01_area;//Calculo da Densidade Populacional com Casting (float) da carta 01.

        carta01_PIB_per_capita = (float)carta01_PIB / carta01_populacao;//Calculo do PIB per capita com Casting (float) da carta 01.

        printf("\n");//Quebra de linha.
    
    
    //Exibir os dados de saída da Carta nº 01
        printf("***Registros da Carta nº 01***\n");//Título da operação de saída de dados da carta 01.

        printf("Letra do Estado: %c\n", carta01_estado);//Exibir letra do estado da carta 01.

        printf("Código da Cidade: %s\n", carta01_codigo);//Exibir código da cidade da carta 01.

        printf("Nome da Cidade: %s\n", carta01_cidade);//Exibir nome da cidade da carta 01.

        printf("População: %d\n", carta01_populacao);//Exibir população da carta 01.
        
        printf("Área km²: %.2f\n", carta01_area);//Exibir Área km² c/ duas casas decimais da carta 01.

        printf("PIB: %.2f\n", carta01_PIB);//Exibir o PIB c/ duas casas decimais da carta 01.

        printf("Número de Pontos Turísticos: %d\n", carta01_ponto_turistico);//Exibir número de pontos turísticos da carta 01.

        printf("Densidade Populacional: %.2f\n", carta01_densidade_populacional);//Exibir Densidade Populacional da carta 01.

        printf("PIB per capita: %.2f\n", carta01_PIB_per_capita);//Exibir PIB per capita da carta 01.       

        printf("\n");//Quebra de linha.

    //Cadastrar os Dados de Entrada da Carta nº 02
        printf("***Cadastrar a Carta nº 02***\n");//Título da operação de entrada de dados da carta 02.

        printf("Digite a letra do Estado: ");//Cadastrar a letra do Estado da carta 02.
        scanf(" %c", &carta02_estado);

        printf("Digite o Código da Cidade: ");//Cadastrar o código da cidade da carta 02.
        scanf("%s", carta02_codigo);

        printf("Digite o nome da Cidade: ");//Cadastrar o nome da Cidade da carta 02.
        scanf("%s", carta02_cidade);

        printf("Digite a População: ");//Cadastrar a População da carta 02.
        scanf("%d", &carta02_populacao);

        printf("Digite a Área km²: ");//Cadastrar a Área em km² da carta 02.
        scanf("%f", &carta02_area);

        printf("Digite o PIB: ");//Cadastrar o PIB da carta 02.
        scanf("%f", &carta02_PIB);

        printf("Digite o número de Pontos Turísticos: ");//Cadastrar o número de pontos turísticos da carta 02.
        scanf("%d", &carta02_ponto_turistico);

        carta02_densidade_populacional = (float)carta02_populacao / carta02_area;//Calculo da Densidade Populacional com Casting (float) da carta 02.

        carta02_PIB_per_capita = (float)carta02_PIB / carta02_populacao;//Calculo do PIB per capita com Casting (float) da carta 02.

        printf("\n");//Quebra de linha.


    //Exibir os Dados de Saída da Carta nº 02
        printf("***Registros da Carta nº 02***\n");//Título da operação da saída de dados da carta 02.

        printf("Letra do Estado: %c\n", carta02_estado);//Exibir a letra do Estado da carta 02.

        printf("Código da Cidade: %s\n", carta02_codigo);//Exibir o código da cidade da carta 02.

        printf("Nome da Cidade: %s\n", carta02_cidade);//Exibir o nome da cidade da carta 02.

        printf("População: %d\n", carta02_populacao);//Exibir a população da carta 02.

        printf("Área km²: %.2f\n", carta02_area);//Exibir a Área em km² c/ duas casas decimais da carta 02.

        printf("PIB: %.2f\n", carta02_PIB);//Exibir o PIB c/ duas casas decimais da carta 02.

        printf("Número de Pontos Turísticos: %d\n", carta02_ponto_turistico);//Exibir o número dos pontos turísticos da carta 02.

        printf("Densidade Populacional: %.2f\n", carta02_densidade_populacional);//Exibir Densidade Populacional da carta 02.

        printf("PIB per capita: %.2f\n", carta02_PIB_per_capita);//Exibir PIB per capita da carta 02.

        printf("\n");//Quebra de linha;
      

    return 0;
}