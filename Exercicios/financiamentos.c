#include <stdio.h>
#include <locale.h>

// o que deve ser feito dentro do código

int main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
// variáveis básicas
     char nome [50];
    
     const int taxaveiculo = 0.015; 
     const int taxaImovel = 00.5;
     float total = 0;
     int Opcao = 0;

//variaveis para calculo
     float calculo_renda30 =0;
      float renda = 0;
      int meses = 0;
      float valorparcela = 0;
      float valorCJuros = 0; 
      float valorjuros = 0; 


//veiculos
     float carro =0;
     float moto = 0;
     float caminhão = 0;

     // imoveis 
     float casas =0;
     float apartamentos =0;

//apresentação
     printf("\nOlá seja bem vindo a empresa finantech! Qual é o seu nome?");
     scanf("%s", nome);

     printf("\nA Finantech agradece por confiar na nossa empresa %s", nome);
     printf("\nVamos começar a preencher a nossa ficha");
// perguntando a renda
     printf("\n Antes de começarmos, poderia nos dizer qual é a sua renda mensal?");
     scanf("%f", &renda);

//perguntando tipo de financiamento
     printf("\nQual tipo de financiamento você gostária de fazer %s?", nome);
     printf("\ndigite 1 <-- para veiculo e 2 <-- para imoveis");
     scanf("%i", &Opcao);



     if (Opcao == 1) // perguntando dos veiculos 
     {
        printf("\nAs opções de veiculos que temos é: Carros, Motos e Caminhões");
       printf("\nSelecione 4, 5 ou 6 na ordem respectivamente");
       scanf("%i", &Opcao);

       if (Opcao == 4){ // CARRO
// perguntando o Valor do carro 
        printf("\nÓtima escolha %s, os carros são ótimo para conforto e segurança", nome);
        printf("\n Antes de continuarmos os calculos, poderia nos informar o valor do carro?");
        scanf("%f", &total);

//De quantos meses vai ser o financiamento
        printf("\nAqui na nossa empresa nós temos os prazos de financiamento para cada uma das opções");
        printf("\nO prazo do financiamento dos carros é de: 6 até 48 meses");
        printf("\nEnquantos meses você gostaria de financiar o carro, %s?", nome);
        scanf("%i", &meses);

// CALCULO DO CARRO
          valorjuros= (meses* taxaveiculo) * total;
    } if (Opcao == 5){ // MOTO

        printf("\nÓtima escolha %s, as motos são um ótimo investimento para a economia em uma monte de coisas.", nome);
        printf("\n Antes de continuarmos os calculos, poderia nos informar o valor da moto?");
        scanf("%f", &total);

        printf("\nAqui na nossa empresa nós temos os prazos de financiamento para cada uma das opções");
        printf("\nO prazo do financiamento das motos é de: 4 até 24 meses");

        printf("\nEnquantos meses você gostaria de financiar a moto, %s?", nome);
        scanf("%i", &meses);

        valorjuros = (meses * taxaveiculo) * total;
        
         } if (Opcao == 6)
       {
        printf("\nÓtima escolha %s, os caminhões são perfeitos para transportar grandes cargas", nome);
        printf("\n Antes de continuarmos os calculos, poderia nos informar o valor da moto?");
        scanf("%f", &total);

        printf("\nAqui na nossa empresa nós temos os prazos de financiamento para cada uma das opções");
        printf("\nO prazo do financiamento dos caminhões é de: 100 até 200 meses");
        printf("\nEnquantos meses você gostaria de financiar o caminhão, %s?", nome);
        scanf("%i", &meses);

        valorjuros = (meses* taxaveiculo) * total;
       }
       
    }
    
    if (Opcao == 2) //  IMOVEIS
     {

        printf("\nÓtima escolha! Um imovel é ótimo investimento");
        printf("\npara as opções de imoveis nós temos: Casas e apartamentos");
        printf("\nqual dessas duas opções você gostaria de financiar? Digite 1 e 2 respectivamente");
        scanf("%i", &Opcao);

        if (Opcao == 1)
        {
            printf("\nOtima escolha %s, uma casa é um local confortavel e de privacidade", nome);
            printf("\nantes de continuarmos os nosso calculos, qual seria o valor da casa?");
            scanf("%f", total);

            printf("\nAqui na nossa empresa nós temos os prazos de financiamento para cada uma das opções");
        printf("\nO prazo do financiamento das casas é de: 150 até 360 meses");
        printf("\nEnquantos meses você gostaria de financiar a casa, %s?", nome);
        scanf("%i", &meses);
            valorjuros = (meses* taxaImovel) * total;

        }if(Opcao == 2){
             printf("\nOtima escolha %s, uma casa é um local confortavel e de privacidade", nome);
            printf("\nantes de continuarmos os nosso calculos, qual seria o valor do apartamento?");
            scanf("%f", total);

             printf("\nAqui na nossa empresa nós temos os prazos de financiamento para cada uma das opções");
        printf("\nO prazo do financiamento dos apartamentos é de: 100 até 300 meses");
        printf("\nEnquantos meses você gostaria de financiar o apartamento, %s?", nome);
        scanf("%i", &meses);

        valorjuros = (meses* taxaImovel) * total;

            
        }
        
     }

// caclculos
     calculo_renda30 = (renda * 30) / 100;
     valorCJuros = total + valorjuros;
     valorparcela = valorCJuros / meses;

     printf ("\nEstamos chegando ao fim da nossa consulta");
     printf("\nAqui está o relatório completo do seu financialmento");


    if (valorCJuros < calculo_renda30)
    {
        printf("\n---/----/----Valores do financiamento-----/-----/-----");
        printf("\nSEU FINANCIAMENTO NÃO FOI APROVADO");
        printf("\nSeu financiamento não pode ultrapassar de 30% da sua renda mensal");
        printf("\nNós sentimos muito. Esperamos que possa resolver. Obrigado por nos consultar!");
    } else { 

        printf("\n---/----/----Tabela do financiamento-----/-----/-----");
        printf("\nSEU FINANCIAMENTO FOI APROVADO");
         printf("\nO valor do financiamento com juros é de R$ %.2f", valorCJuros);
        printf("\nAs suas parcelas foram divididas da seguinte maneira R$ %.2f", valorparcela);

    }
    //printf("Você gostaria de dar entrada? disque 9 para sim ou 0 para não");
    //scanf("%f", &Opcao);

    if (Opcao == 9)
    {
        
    }
    
      printf("Sistema Desenvolvido por: SANCHES");
    return 0;
}
