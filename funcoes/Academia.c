#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{

      setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    //////////////////////////// planos da academia //////

    float mensalidade = 0;
    float diasdetreino= 0;

    printf("\nSeja bem vindo a academia Profit");
    printf("\nVamos começar com algumas perguntas básicas para vermos qual plano é melhor para você");

    printf("\nquanto você estária disposto a pagar na academia por mês?");
    scanf("%f", &mensalidade);

    printf("Quantos dias você está disposto treinar?");
    scanf("%f", diasdetreino);

    if(mensalidade <= 50.99 && diasdetreino <= 3){
        printf("\nO melhor plano para você é");
        printf("------Viva Saúde------ \nMensalidade R$ 49,99 \nAnual R$ 12 x 39,99 \nUso 3 vezes por semana");
    }if (mensalidade <= 60.99 && diasdetreino <= 4){
    printf("\nO melhor plano para você é:");
    printf("------Saúde em Dia------ \nMensalidade R$ 59,99 \nAnual R$ 12 x 48,99 \nUso 4 vezes por semana");
    }if (mensalidade <= 70.99 && diasdetreino >= 7){
        printf("\n O melhor plano para você é:");
        printf("------Fitness Pro------ \nMensalidade R$ 69,99 \nAnual R$ 12 x 58,99 \nQuantos dias quiser");
    }
    return 0;
}
