#include <stdio.h>
#include<locale.h>


main(int argc, char const *argv[])
{
     setlocale(LC_ALL, "Portuguese_Brazil.UTF-8");

     int horas =0;
     int meses = 5;
     int diasnosemestre = 150;
     

     printf("\nOlá seja bem vindo! vamos calcular a quantidade de horas de duração do seu curso");

     printf("\nQual é a quantidade de horas por dias que teve seu curso?");
     scanf("%f", horas);

     int totaldehoras5 = diasnosemestre* horas; // para descobrir a quatidade de horas em 5 meses
     int totalnosemestre = totaldehoras5*4; // pegar a quantidade de horas no mês e multiplicar por 4 para ter o total em todo o semestre

     printf("O total de horas no mês é de: %i", totaldehoras5);
     printf("se essa for as horas todos os dias no final dos dois anos é: %i", totalnosemestre);

    return 0;
}
