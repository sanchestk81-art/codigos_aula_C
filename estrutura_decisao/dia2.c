#include <stdio.h>

int main(int argc, char const *argv[])
{
    int dia = 0;

printf("qual dia da semana? 1->dom, 7->sab");
scanf("%i", &dia);

switch (dia)
{
case 1:
    printf("domingou!!!");
    break;
case 2:
printf ("segunda -feira!");
break;
case 3: 
printf("terça-feira");
break;
case 4:
printf("quarta-feira");
break;
case 5:
printf("quinta-feira");
break;
case 6:
printf("sexta-feira");
break;
case 7:
printf("sabado");
    break;
}


    return 0;
}
