#include <stdio.h>
#include <locale.h>

void ola(){
    printf("seja bem vindo");
}

void calcularmedia (float n1, float n2) {

    printf("\nQual é a primeira nota?");
    scanf("%f", &n1);

    printf("\nQual é a segunda nota?");
    scanf("%f", &n2);


    float media = (n1 + n2) / 2; 
   printf("\n A média é: %.2f", media); 
    
}

int main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

     ola(); // executando a função
     calcularmedia (0, 0);


    
    return 0;
}
