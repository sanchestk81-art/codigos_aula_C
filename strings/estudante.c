#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");
    char nome_completo[40];
    char idade[3];
    char escola[50];
    char numero_escolar[5];
    char ano_escolar[6];
    char Senai_endereco[40];
    char cursoSenai[50];

    printf("-----------dados de usuário---------");
    
    printf("\nqual é o seu nome completo?");
    scanf(" %[^\n]", nome_completo);

    printf("qual a sua idade?");
    scanf(" %[^\n]", idade);

    printf("Qual é a escola que você estuda?");
    scanf(" %[^\n]", escola);

    printf("qual é o numero da escola?");
    scanf(" %[^\n]", numero_escolar);

    printf("qual é o seu ano escolar?");
    scanf(" %[^\n]", ano_escolar);

    printf("qual é o Senai que você está fazendo?");
    scanf(" %[^\n]", Senai_endereco);

    printf("qual é o curso que você está fazendo no senai?");
    scanf(" %[^\n]", cursoSenai);

    printf("\n--------suas informações-----");
    printf("\nnome completo: %s", nome_completo);
    printf("\nidade: %s", idade);
    printf("\nnome da escola: %s", escola);
    printf("\nnumero da escola: %s", numero_escolar);
    printf("\nSeu ano escolar é: %s", ano_escolar);
    printf("\n O senai que você estuda é: %s", Senai_endereco);
    printf("\n O curso que você faz: %s", cursoSenai);
    


    return 0;
}
