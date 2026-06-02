#include <stdio.h>
#include <locale.h>

void pares(){

    int valorI = 0;
    int valorS = 0;
   

    printf("Digite o valor Inferior:");
    scanf("%f", &valorI);

    printf("Digite o valor Superior:");
    scanf("%f", valorS);

    for (valorI; valorI <= valorS; valorI++){

    }

    printf("Os numeros pares é: %d\n", &valorI);


}

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

    pares();
    return 0;
}
