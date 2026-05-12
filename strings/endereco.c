#include <stdio.h>
#include <locale.h>

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "pt_BR.utf -8");

    char nome[10] = "sanches";
    char logradouro[30] = "rua gioccondo marino";
    char bairro[10] = "Santo Antônio";
    char cidade[13] = "Piracicaba";
    char uf[3]= "sp";

    printf("------minhas informações residênciais----------");
    printf("\nome: %s", nome);
    printf("\nlogradouro: %s", logradouro);
    printf("\nbairro: %s", bairro);
    printf("\ncidade: %s", cidade);
    printf("\nuf: %s", uf);

    return 0;
}
