#include <stdio.h>

int main(int argc, char const *argv[])
{
    float notas[4];


    printf("qual a primeira nota?");
    scanf("%f", &notas[0]);

    printf("qual a segunda nota?");
    scanf("%f", &notas [1]);

    printf("qual a terceira nota?");
    scanf("%f", &notas [2]);

    printf("qual a quarta nota?");
    scanf("%f", &notas [3]);

    float media = (notas [0] + notas [1] + notas [2] + notas [3]) / 4;

    printf("A media e %d",media);
    
    return 0;
}
