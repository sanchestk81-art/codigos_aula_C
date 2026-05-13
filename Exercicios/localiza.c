#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
     
    int km = 0;
    int dia = 0;
    char nome[30];
    const float totalkm = 1.25;
    const float totaldia = 99.50;
    float totalcontakm = 0;
    float totalcontadia = 0;



    printf("/n Olá, seja bem vindo a localiza");
    printf("Antes de começarmos, qual o seu nome?");
    scanf("%s", nome);// para char não se usa o i e nem o & comercial antes da variável 

    printf("\n Seja bem vindo %s!", nome);
    printf("vamos começar nossa consulta");

    printf("\n vamos calcular para ver qual é o mais vantajoso para você, alugar por km ou por dia!");

    printf("\n Qual seria a quantidade de km que você vai rodar?");
    scanf("%i", &km);

    printf("\n E para a quantidade de dias, quantos dias você iria ficar com o carro?");
    scanf("%i", &dia);

    printf("Ótimo! agora o que é mais vantajoso para você é");

    totalcontakm = km * totalkm;
    totalcontadia = dia * totaldia;

    printf("\n %s, segue um relário detalhado", nome);
    printf("\n O total por km: R$%.2f", totalcontakm);
    printf("\n O total por dia: R$%.2f", totalcontadia);

    if (totalcontadia < totalcontakm)
    {
        printf("\n Sugerimos usar o plano por dia por sair mais enconta");
    } else {
        printf("\n Sugerimos usar o plano por km por sair mais enconta");
    }
    


    


    return 0;
}
