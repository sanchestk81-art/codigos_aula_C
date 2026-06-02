#include <stdio.h>
#include <locale.h>

void orcamento(){

float const PdViedo = 139.90;
float const caixadsom = 99.90;
float const kit = 149.90;
float const monitor = 679.90;
float const desconto = 0.15;

float somadetudo = PdViedo + caixadsom + kit + monitor;
printf("\nO valor total da conta vai ser de R$ %.2f", &somadetudo);

float desconto15 = somadetudo * desconto;
printf("\nCaso vocês escolham o desconto a vista que ganha quize por cento o valor inteiro é de: R$ %.2f", &desconto15);

float descontodividido = desconto15 / 5;
printf("\nE dividido entre os 5 ficaria: R$ %.2f", &descontodividido);


float parcelado = somadetudo / 12;
printf("\nCaso vocês queiram comprar as coisas parcelados por mês: R$ %.2f", &parcelado);

float Pdividido = parcelado / 5;
printf("\nDividido entre vocês no mês fica: R$ %.2f", &Pdividido);

} 





int main(int argc, char const *argv[])
{
      setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

      orcamento();


    return 0;
}
