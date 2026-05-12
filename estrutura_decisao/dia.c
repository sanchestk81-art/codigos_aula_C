#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dia = 0;

    printf("qual dia da semana? (dom->0, sab->6 )");
    scanf("%i", &dia);

    if  (dia == 0) {
        printf("Domingo, descance que amanha tem mais");
    } else if (dia == 1){
        printf("segundou, hora de começar a semana");
    } else if (dia == 2) {
        printf("terça, vamo bora foco total");
    } else if (dia == 3){
        printf("quarta, acaba pelo amor de deus");
    } else if (dia == 4) {
        printf("quinta, ta chegando, aguenta so mais um pouco");
    } else if (dia == 5) {
        printf("seeeexxxtttooooouuuu!");
    } else if (dia == 6) {
        printf("sabadooouuu, aproveite o diaaaaa :)");
    } else {
        printf("dia não encontrado, tente um menor que 7");
    }

    return 0;
}
