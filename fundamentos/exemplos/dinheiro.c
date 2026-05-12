/*
você está trabalhando e gostaria de guardar 25% do seu salário todo mês.
O banco está com um investimento que rende 6.8% ao mês de juros,
 você vai usar esse formato de investimento. 
 Crie um algoritimo para calcular seu investimento*/

 #include <stdio.h>

 int main(){

    //entrada
    float salario = 0;
    const float investimento25 = 0.25;
    int tempo = 0;
    const float jurosdoBanco = 0.068;

    printf("Qual o valor do seu salario?");
    scanf ("%f", &salario);
    printf ("Por quanto tempo deseja investir?");
    scanf ("%i", &tempo);

    //processamento
    float TotaldeJuros = jurosdoBanco * tempo; // quantidade de juros
    float salariode25 = salario * investimento25; // investimento de 25%
    float totaldeDinheiro = tempo * salariode25;
    float rendimentosCOMJuros = salariode25 + TotaldeJuros; // total guardado sem juros
    float rendimentoSEMJuros = salariode25 * tempo; // total sem juros
    float totalCOMjuros = totaldeDinheiro* rendimentosCOMJuros;


    //saída
    printf("O total sem os juros %.2f \n",rendimentoSEMJuros);
    printf("O total com juros %.2f \n", totalCOMjuros);
    printf("Ototal que vai ser juntado nesse tempo e %.2f \n", totalCOMjuros);

    return 0;
 }
 