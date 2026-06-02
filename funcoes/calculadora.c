#include <stdio.h>
#include <locale.h>


int main(int argc, char const *argv[])
{

    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int opcao = 0;
    float numero1 = 0;
    float numero2 = 0;

    printf("\nSeja bem vindo a calculadora!");

    printf("\nQual seria o primeiro número da conta:");
    scanf("%f", &numero1);

    printf("\nQual seira o segundo número da conta:");
    scanf("%f", &numero2);

    printf("Obrigado por dizer os números. Agora, qual tipo de conta você gostaria de fazer");
    printf("selecione 1 2 3 ou 4 para fazer soma, subtração, multiplicação ou divisão.");
    scanf("%i", &opcao);

    if (opcao == 1){

        float Totalsoma = numero1 + numero2;

        printf("O total da sua conta é de: %.2f", Totalsoma);
    }if (opcao == 2){

        float totalmenos = numero1 - numero2;
        
        printf("O total da sua conta é de: %.2f", totalmenos);
    }if (opcao == 3){

        float totalmultiplicacao = numero1 * numero2;

        printf("O total da sua conta é de: %.2f", totalmultiplicacao);
    } if (opcao == 4){

        float totaldivisao = numero1 / numero2;

        printf("O total da sua conta é de: %.2f", totaldivisao);
    }

    printf("Obrigado por usar a minha calculadora! Até a próxima");
    
    return 0;
}
