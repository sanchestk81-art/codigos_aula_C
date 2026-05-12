#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variáveis e perguntas
    float LancheRodeio = 0;
    float batataGrande = 0;
    float Refrigerante = 0;
    float sorvete = 0; 

    printf("qual o valor do lanche?");
    scanf("%f", &LancheRodeio);

    printf("qual o valor da batata?");
    scanf("%f", &batataGrande);

    printf("qual o valor do refrigerante?");
    scanf("%f", &Refrigerante);

    printf("qual o valor do sorvete?");
    scanf("%f", &sorvete);

 // conta total e IF ELSE
    float valorTotal = LancheRodeio + batataGrande +Refrigerante + sorvete;

    if (valorTotal < 40)
    {
     printf("O lanche esta barato, R$ %.2f", valorTotal);
    } else if (valorTotal >=40 && valorTotal <=55)
    { 
        printf("O total do lanche está em um preço razoavel, R$ %.2f.", valorTotal);
    } else if (valorTotal >55) {
        printf("O total do lanche ficou caro, R$ %.2f", valorTotal);
    }

    return 0;
}