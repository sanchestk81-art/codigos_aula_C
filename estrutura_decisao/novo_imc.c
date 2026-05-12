#include <stdio.h>

 int main(){
    //variaveis
    float altura = 0;
    float peso = 0;

    printf("qual a sua altura?");
    scanf("%f", &altura);

    printf("Qual e o seu peso?");
    scanf("%f", &peso);

    int totalimc = (peso) / (altura*altura);

    if (totalimc >= 18.5 && totalimc<=24.9) {
        printf("voce esta com um peso normal adequado");
    } else if (totalimc >= 25.0 && totalimc<= 29.9) {
        printf ("voce esta com sobrepeso, procure um profissional.");
    } else if (totalimc >= 30.0) {
        printf("procure um especialista para se cuidar");  
    }


    printf("O seu IMC e %i", totalimc);
    return 0;
 }