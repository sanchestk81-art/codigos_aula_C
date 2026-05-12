/*
Calcula o imc
de uma pessa
com valores
fixo nas variáveis 
e o mostre o valor
ao final
*/

#include <stdio.h>
int main(){

    //Declaração de peso e altura
    //Entrada
    float altura = 1.78;
    float peso = 68;

    // Processamento
   float imc = (peso) /(altura * altura);

    //Saída
    printf("O IMC da pessoa e %f", imc);
    
    return 0;
}
