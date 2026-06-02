#include <stdio.h>
#include <locale.h>

void Calculandofiguras(){

    float const pi= 3.14;
    float Lado = 0; 
    float raio = 0;

    int opcao = 0;

    printf("qual tipo de figura você quer calcular? selecione 1 para circulo ou 2 para quadrado");
    scanf("%i", &opcao);

    if (opcao == 1 )
    {
       printf("\nQual seria o valor do raio do circulo:");
       scanf("%f", &raio);

       float circuloC = pi * (raio*raio);
       printf("\nA área do circulo é: %.2f cm²", circuloC);

    } if (opcao == 2){
        printf("\nQual seria a medida do lado do quadrado:");
        scanf("%f", &Lado);

        float quadradoC = Lado * Lado; 
        printf("A área do seu quadrado é de: %.2f cm²", quadradoC);
    }

    

}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    Calculandofiguras();

    return 0;
}
