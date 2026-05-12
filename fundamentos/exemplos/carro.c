/*
você precisa comprar um carro e pretender realizar o paragamentgo de forma
parcelada.
crie um algoritmo que calcule o valor das parcelas descontando a o valor das
parcelas descontando o valor da entrada de 30%*/

#include <stdio.h>

int main(){
    //entrada
    float valorCarro = 0;
    int qtdeParcelas = 0;
    const float entrada30 = 0.30;
    printf ("Qual o valor do carro?");
    scanf("%f", &valorCarro);
    printf("Quantas parcelas deseja pagar?");
    scanf("%i", &qtdeParcelas);

    //processamento
    float valorde30 = valorCarro * entrada30;
    float valorPagar = valorCarro - valorde30;
    float valorTotal = valorPagar / qtdeParcelas;

    //saída
    printf("O valor a ser pago por mes e R$%.2f", valorTotal);
    return 0;
}