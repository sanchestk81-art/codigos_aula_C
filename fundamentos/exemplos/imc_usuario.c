/**
 * agora voce deve copiar o 
 * coódigo do exemplo imc.c
 * e deixar ele com informaçôes dinamicas :0
 */

 #include <stdio.h>

 int main(){
    //variaveis
    float altura = 0;
    float peso = 0;

    printf("qual a sua altura?");
    scanf("%i", &altura);

    printf("Qual é o seu peso?");
    scanf("%i", &peso);

    //processamento
    int total_imc = (peso) / (altura*altura);

    //saida
    printf("O seu IMC e %i", total_imc);

    return 0;
 }
 