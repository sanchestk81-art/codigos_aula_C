#include <stdio.h>

int main(int argc, char const *argv[])
{
    //variáveis
    int sim = 0;
    int não = 1;
    int opcao = 0;
    int parcelas = 0;
    float Corte = 0;
    float PintouCabelo = 0;
    float progressiva = 0;
    float Hidratacao = 0;


    //perguntas
    printf("Foi feito corte? 0 - sim. 1- nao");
    scanf("%i", &opcao);

    if (opcao == 0){
        printf("qual o valor do corte?");
        scanf("%f", &Corte);
    } 

    printf("Pintou o cabelo? 0 - sim. 1- nao");
    scanf("%i", &opcao);

    if (opcao == 0){
        printf("qual o valor cobrado?");
        scanf("%i", &PintouCabelo);
    }    
    printf("Foi feita hidratacao? 0 - sim. 1- nao");
    scanf("%i",&opcao);

    if (opcao == 0){
        printf("Qual foi o valor da hidratacao?");
        scanf("%f", &Hidratacao);
    }
    printf("Foi feita progrssiva? 0 - sim. 1- nao");
    scanf("%i", &opcao);

    if (opcao == 0){
        printf("qual foi o valor da progressiva?");
        scanf ("%f", &progressiva);
    }

    float ValorTotal = Corte + PintouCabelo + progressiva + Hidratacao;

    if (ValorTotal <= 150){
     printf("esta barato, valor R$%.2f", ValorTotal);   
    } else if (ValorTotal > 150 && ValorTotal <= 250){
        printf("esta em um valor razoavel, valor R$%.2f", ValorTotal);
    } else if (ValorTotal > 250) {
        printf("Esta caro, valor R$%.2f",ValorTotal);
    }

    printf("O valor total dos procedimentos é de R$%.2f\n", ValorTotal);

    printf("Qual seria a forma de pagamento?0 - avista 1- parcelado\n");
    scanf("%i", opcao);

if (opcao == 0){
    float desconto = ValorTotal * 0.05;
    float totalavista= ValorTotal - desconto;
        printf("O valor avista ganha 5% de desconto, R$%.2f", ValorTotal);
    } else if(opcao == 1){
        int parcela = 0;
        printf("qual seria a quantidade de parcelas?");
        scanf("%i", parcela);
        float valorParcelado = ValorTotal / parcela;
        printf("O valor com as parcelas é de R$%.2f", valorParcelado);
    }
    return 0;
}
