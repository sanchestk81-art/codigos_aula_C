#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    int Pessoas = 0;
    float total =0;

    float Ptotal = 0;
    char comes[5][30] = {
        "Coxinha", "bolinho de queijo",
        "esfirra", "croquete",
        "humburguinho"
    };

    float valorcomes[5] = {
        99.90, 82.99, 85.99, 78.99, 107.99
    };
    char bebes[5][30] = {
        "coca cola", "jaboti", "guaraná",
        "suco de laranja", "suco de uva"
    };
    float valorbebes[5] = {
        8.99, 9.99, 12.99, 8.99, 9.99
    };
    

//calcular o valor 

printf("\nvamos calcular o valor da confraternização");

printf("\nquantas pessoas vão participar?");
scanf("%i", &Pessoas);

printf("\nescolha os salgados");
int opcao = 0;
int quantidade =0;
for (int i = 0; i < 5; i++)
{
    printf("\nVai querer %s? (1-> sim, 0 -> não)", comes[i]);
    scanf("%i", &opcao);

    if (opcao == 1)
    {
        printf("quantos centos de %s?", comes[i]);
        scanf("%i", &quantidade);
        total += Pessoas * valorcomes[i];
    }
}
 

 printf("\nAgora escolha as bebidas");
int opcaoB = 0;
int quantidadeB =0;
int litro =0;
for (int i = 0; i < 5; i++)
{
    printf("\nVai querer %s? (1-> sim, 0 -> não)", bebes[i]);
    scanf("%i", &opcaoB);

    if (opcaoB == 1)
    {
        printf("quantas unidades de %s?", bebes[i]);
        scanf("%i", &quantidadeB);
        total += Pessoas * valorbebes[i];

        //refrigerante 2 litros
        if (i == 0 || i == 1 || i == 2)
        {
            litro += quantidade * 2;
        }

        //suco 1 litro
        if (i == 3 || i == 4)

        litro += quantidade * 1; 
    
        {
            /* code */
        }
        
        
    }
  }


printf("\nTotal da festa R$ %.2f", total);
printf("\nTotal de salgadinho por pessoa R$ &%.2f", total / Ptotal);

printf("\n total de bebidas por pessoa R$ &")

    return 0;
}
