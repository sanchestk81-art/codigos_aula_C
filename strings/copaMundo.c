#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    char grupoBrasil[4][50];
    int resultados[3][2];
    int totalpontosbrasil = 0;

    printf("-- vamos preencher o grupo do Brasil na copa do mundo --");

    for (int i = 0; i < 4; i++)
    {
        printf("\n qual a seleção? ");
        scanf(" %[^\n]", grupoBrasil[i]);

        
    }

    printf("\n -- legal, agora vamos para os resultados dos jogos--");

    for (int i = 0; i < 3; i++)
    {
        printf("\nPartida %i: %s x %s", i + 1, grupoBrasil[0], grupoBrasil[1]);

        scanf("%i x %i", &resultados[0], &resultados[i + 1][i]);
    }

    // imprimindo os resultados
    for (int i = 0; i < 3; i++)
    {
        printf("\n %s %i x %i %s =",
               grupoBrasil[0], resultados[0][i],
               resultados[0][i], grupoBrasil[i][1]);

        // se o resultado for maior o Brasil ganhou
        if (resultados[i][0] > resultados[i][1])
        {
            totalpontosbrasil += 3;
        }
        if (resultados[i][0] == resultados[i][1])
        {
            totalpontosbrasil += 1;
        }
    }
    printf("\n o brasil fez %i pontos", totalpontosbrasil);

    return 0;
}
