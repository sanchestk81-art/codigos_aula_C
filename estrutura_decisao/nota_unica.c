#include <stdio.h>

int main(int argc, char const *argv[])
{
    float nota = 0;

    printf ("qual a sua nota?");
    scanf("%f", &nota);

    if (nota < 6.9){
        printf("voce nao passou melhore");
    } else {
        printf ("voce passou parabens");
    }
    return 0;
}
