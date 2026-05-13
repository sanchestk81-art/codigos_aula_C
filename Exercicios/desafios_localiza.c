#include <stdio.h>
#include <locale.h>
#include <string.h>

int main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
     
    int km = 0;
    int dia = 0;
    char nome[30];
    char carro[50];
    const float totalkm = 1.25;
    const float totaldia = 99.50;
    float totalcontakm = 0;
    float totalcontadia = 0;
    const char cupons [3][30] = {
        "PSC_10", "PSC_20", "PSC_30"
    };
    char cupomCliente[30];
    int temCupom = 0;
    float valordesconto =0;

    printf("/nOlá, seja bem vindo a localiza");
    printf("\nAntes de começarmos, qual o seu nome?");
    scanf("%s", nome);// para char não se usa o i e nem o & comercial antes da variável 

    printf("\n Seja bem vindo %s!", nome);
    printf("vamos começar nossa consulta");

    printf("\n Qual carro você gostaria de alugar?");
    scanf("%s", carro);

    printf("\n vamos calcular para ver qual é o mais vantajoso para você, alugar por km ou por dia!");

    printf("\n Qual seria a quantidade de km com o %s que você vai rodar?", carro);
    scanf("%i", &km);

    printf("\n E para a quantidade de dias, quantos dias você iria ficar com o carro %s?", carro);
    scanf("%i", &dia);

    printf("%s, Tem cupom de desconto? 1-> sim 0-> não", nome);
    scanf("%i", &temCupom);

    if (temCupom == 1)
    {
        printf("digite o código:");
        scanf("%s", cupomCliente);

        for (int i = 0; i < 3; i++){
            if (strcmp (cupomCliente, "PSC_10") == 0){
                valordesconto = 10;
                
            }if (strcmp (cupomCliente,"PSC_20") == 0){
                valordesconto = 20;

            }if (strcmp (cupomCliente, "PSC_30") ==0){
                valordesconto = 30;
            }

            
        }
    }
    

    printf("Ótimo! agora o que é mais vantajoso para você é");


// calculos
    totalcontakm = (km * totalkm) - valordesconto;
    totalcontadia = (dia * totaldia) - valordesconto;

    printf("\n %s, segue um relário detalhado", nome);
    printf("\n O total por km: R$%.2f", totalcontakm);
    printf("\n O total por dia: R$%.2f", totalcontadia);

    if (temCupom == 1){
        printf ("\n você teve um desgonto de R$ %.2f", valordesconto);
    } 
    if (totalcontadia < totalcontakm){
        printf("\n Sugerimos usar o plano por dia por sair mais enconta");
    } else {
        printf("\n Sugerimos usar o plano por km por sair mais enconta");
    }
    
    printf("\nObrigado por escolher a nossa empresa para alugar o carro");
    printf("\ntenha uma ótima tarde");
    printf("\nDesenvolvido por: SANCHES"); 

  return 0;
}