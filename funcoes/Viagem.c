#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int const gasolina =6.50;
    int const etanol =4.50;
    int const disel =7.10;
    int km = 0;
    int opcao = 0;

    printf("\nOlá seja bem vindo ao calculo de viagens!");
    printf("\nVamos calcular quanto você vai gastar de combustível");

    printf("\nVamos começar os calculos. Quantos kms você vai andar:");
    scanf("&i", opcao);
    
    float totalgasolina = gasolina * km;
    printf("\nO total em reais que vai ser gastado com a gasolina é de: R$%.2f", &totalgasolina);
    

    float totaletanol = etanol * km;
    printf("\nO total de reias abastencendo com etanol é: R$%.2f", &totaletanol);
    

    float totaldisel = disel * km;
    printf("\nO total que ai ser gasto em rais abastecendo com disel é de: R$%.2f", &totaldisel);
    

    printf("\nObrigado por usar nosso sistema para fazer seus calculos! até a proxima!");
    return 0;
}
