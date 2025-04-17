#include <stdio.h>
 
int main() {
    char Estado = 'A';
    char Codigo[20] = "A01";
    char Cidade[50] = "RioDeJaneiro";
    int Populacao;
    float Area;
    float PIB;
    int PontosTuristicos;
    float densepop = Populacao / Area;

    char Estado_B = 'B';
    char Codigo_B[20] = "B02";
    char Cidade_B[50] = "SaoPaulo";
    int Populacao_B;
    float Area_B;
    float PIB_B;
    int PontosTuristicos_B;
    float denspop_B = Populacao_B / Area_B;

    printf("Sua cidade é: %s\n", Cidade);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &Populacao);
    printf("Digite a Área de sua cidade: \n");
    scanf("%f", &Area);
    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", &PontosTuristicos);

    printf("sua cidade é: %s\n", Cidade);
    printf("ela possui a população de: %d\n", Populacao);
    printf("a Área de sua cidade é: %.2f\n", Area);
    printf("o PIB da sua cidade é: %.2f\n", PIB);
    printf("e a quantidade de pontos turisticos da sua cidade é: %d\n", PontosTuristicos);

    printf("-----------------------------------------------------------------------\n");

    printf("Sua nova cidade é: %s\n", Cidade_B);

    printf("Digite a população da sua cidade: \n");
    scanf("%d", &Populacao_B);
    printf("Digite a Área de sua cidade: \n");
    scanf("%f", &Area_B);
    printf("Digite o PIB de sua cidade: \n");
    scanf("%f", &PIB_B);
    printf("Digite a quantidade de pontos turisticos da sua cidade: \n");
    scanf("%d", &PontosTuristicos_B);

    printf("sua cidade é: %s\n", Cidade_B);
    printf("ela possui a população de: %d\n", Populacao_B);
    printf("a Área de sua cidade é: %.2f\n", Area_B);
    printf("o PIB da sua cidade é: %.2f\n", PIB_B);
    printf("e a quantidade de pontos turisticos da sua cidade é: %d\n", PontosTuristicos_B);

    printf("-----------------------------------------------------------------------\n");

    printf("o valor a ser comparado será a área das cidades.\n");
    
    if(Area > Area_B){
        printf("\n a carta de %s é a ganhadora pois possui a maior área.\n", Cidade);
    } else {
    } if (Area_B > Area){
        printf("\n a carta de %s é a ganhadora pois possui a maior área.\n", Cidade_B);
    } else {
    } if (Area == Area_B){
        printf("\n ambas as cartas possuem o mesmo valor.\n");
    }
    

    return 0;
}
