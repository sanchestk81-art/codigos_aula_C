#include <stdio.h>

int main(){
    //Entrada
    float rodeio = 24.99;
    float refri = 7.99;
    float batataGrande = 14.99;
    float casquinha = 4.99;
    float cupom = 0.07;


    //Processamento
    float total = rodeio + refri + batataGrande + casquinha;
    float desconto = total * cupom;
    float totalpagar = total - desconto;

    //Saída
    printf("O total e R$ %.2f \n", total);
    printf("o desconto foi de R$ %.2f \n", desconto);
    printf("o total a ser pago e R$ %.2f", totalpagar);

    return 0;
}