#include <stdio.h>
#include <stdbool.h>

int main(int argc, char const *argv[])
{ 
    bool comprouIngressoAntes = false;
    bool comprouIngressoDepois = true;

    printf("comporu o Ingresso antes? 1-sim ou 0-nao");
    scanf ("%d", &comprouIngressoAntes);

    printf("comprou o Ingresso depois? 1-sim ou 0-nao");
    scanf("%d", &comprouIngressoDepois);

    if (comprouIngressoAntes || comprouIngressoDepois){
        printf("Vai assistir o show!");
    } else{
        printf("nao vai ao show");
    }


    return 0;
}
