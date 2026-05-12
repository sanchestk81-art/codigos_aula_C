#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{
    // entrada de informações, variáveis
    const float valorPorlitro = 0.05;
    const int Lmulta = 400;
    const int Ldesconto = 250;
    const float multa = 150;
    const float desconto = 50;
    const int periodo30 = 30;
    const int economica = 250;
    const int excessivo = 400;

     int pessoas = 0;
     float valorTotal = 0;
     int lconsumido = 0;
     int idade = 0;

//processamento das informaçôes, quantidade de pessoas
printf("Ola, vamos calcular sua conta de agua\n");
printf ("Para iniciarmos, quantas pessoas moram na sua casa");
scanf ("%i", &pessoas);

//idade das pessoas
for (int i=0; i<pessoas; i++ ){
printf ("Agora qual a idade da pessoa %i: ", i);
scanf ("%i", &idade);

// uso da tabela com if else
if (idade <= 10){
    lconsumido += 18;
        printf("menores de 10 anos consomem apenas 18litros de agua\n");
    } else if (idade >10 && idade <= 18){
        lconsumido += 30;
        printf ("os adolecentes consomem em media 30litros de agua\n");
    } else if (idade >18 && idade <= 25){
        lconsumido += 42;
        printf("os jovens adultos consomem 42litros de agua\n");
    } else if (idade > 25){
        lconsumido += 24; 
        printf("pessoas maiores de 24 anos utilizam cerca 24litros de agua\n");
    }
} 
// valor total da conta
valorTotal = valorPorlitro * lconsumido * periodo30;

// relatório
if (lconsumido >= excessivo){
// execessivo
printf("faixa de consumo: execessiva \n");
printf("quantidade de pessoas na residencia: %i\n", pessoas);
printf("Consumo de litros %i\n", lconsumido);
printf("valor da conta mensal: R$ %.2f\n", valorTotal);
printf("Multa aplicada: R$%.2\n", multa);
}else if (lconsumido <= economica){
//economica
printf("faixa de consumo: economica\n");
printf("quantidade de pessoas na residencia: %i\n", pessoas);
printf("Consumo de litros %i\n", lconsumido);
printf("valor da conta mensal: R$ %.2f\n", valorTotal);
printf("desconto na proxima conta: R$ %.2f\n", desconto);
}else{
    // normal
    printf("faixa de consumo: normal\n");
    printf("quantidade de pessoas na residencia: %i\n", pessoas);
    printf("Consumo de litros %i\n", lconsumido);
    printf("valor da conta mensal: R$ %.2f\n", valorTotal);
}

    return 0;
}
