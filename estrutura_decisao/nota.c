#include <stdio.h>

int main(){
    float nota1 = 0;
    float nota2 = 0;

    printf ("qual e a nota da primeira prova?");
    scanf ("%f", &nota1);
    printf("qual a nota da segunda prova?");
    scanf("%f", &nota2);

    float notafinal = (nota1 + nota2) / 2;
    
    if (notafinal < 6.9) {
    printf ("voce foi aprovado, parabens");
} else{
    printf ("voce não passou, melhore.");
}
    return 0;
}
