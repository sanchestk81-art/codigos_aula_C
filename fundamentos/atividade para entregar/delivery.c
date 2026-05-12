#include <stdio.h>

///////////////////////////////////////////////// Delivery

// função para retornar o valor por km 
float valorkm (int kms){
    if (kms <= 100) {
        return kms * 0,20;
    } 
    if (kms > 100 && kms <= 200 ){
        return kms * 0.45;
    } 
    if (kms > 200 && kms <= 300){
        return kms * 0.80;
    }
    if (kms > 300){
        return kms * 1.05;
    }
}
 float valorentregas (int entregas){
    if (entregas <=10){
return 7.99;    
} 
if (entregas >10 && entregas <= 20){
    return 16.99;
}
if (entregas >20 && entregas <= 30){
    return 28.99;
}
if (entregas > 30){
    return 41,99;
}

    
 }
int main(){
    // variáveis
   
    //dias da semana 
//segunda
    int segunda = 0;
    int segundaentregas = 0;
    int kmsegunda = 0;
    float totalkmsegunda = 0;
    float totalentregassegundas = 0;
//terça
    int terca = 0;
    int tercaentregas = 0;
    int kmterca = 0;
    float totalkmterca = 0;
    float totalentregasterca = 0;
//quarta
    int quarta = 0;
    int quartaentregas = 0;
    int kmquarta = 0;
    float totalkmquarta = 0;
    float totalentregasquarta = 0;
//quinta
    int quinta = 0;
    int quintaentregas = 0;
    int kmquinta = 0;
    float totalkmquinta = 0;
    float totalentregasquinta = 0;
//sexta
    int sexta = 0;
    int sextaentregas = 0;
    int kmsexta = 0;
    float totalkmsexta = 0;
    float totalentregassexta = 0;
//sabado    
    int sabado = 0; 
    int sabadoentregas = 0;
    int kmsabado = 0;
    float totalkmsabado = 0;
    float totalentregassabado = 0;
//domingo    
    int domingo = 0;
    int domingoentregas = 0;
    int kmdomingo = 0;
    float totalkmdomingo = 0;
    float totalentregasdomingo = 0;

    int totaldias = 0;
/////////////////////////////// °processamento° ///////////////////////////////////
    printf ("Sou o algoritmo que ajuda o Matias, vamos lá!\n");

    //relatório semanal
            //segunda
    printf("trabalhou segunda? 1(sim) 2 (nao)");
    scanf("%i", &segunda);
    if (segunda == 1){

        totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &segundaentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmsegunda);

        totalentregassegundas = valorentregas(segundaentregas);
        totalkmsegunda= valorkm(kmsegunda);
    } 
            //terça
    printf("trabalhou terca? 1(sim) 2 (nao)");
    scanf("%i", &terca);
    if (terca == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &tercaentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmterca);

         totalentregassegundas = valorentregas(tercaentregas);
        totalkmsegunda = valorkm(kmterca);
    }

            //quarta
    printf("trabalhou quarta? 1(sim) 2 (nao)");
    scanf("%i", &quarta);
    if (quarta == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &quartaentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmquarta);

         totalentregassegundas = valorentregas(quartaentregas);
        totalkmsegunda= valorkm(kmquarta);
    }
            //quinta
    printf("trabalhou quinta? 1(sim) 2 (nao)");
    scanf("%i", &quinta);
    if (quinta == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &quintaentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmquinta);

         totalentregassegundas = valorentregas(quintaentregas);
        totalkmsegunda= valorkm(kmquinta);
    }
            //SEXTA
    printf("trabalhou sexta? 1(sim) 2 (nao)");
     scanf("%i", &sexta);
     if (sexta == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &sextaentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmsexta);

         totalentregassegundas = valorentregas(sextaentregas);
        totalkmsegunda= valorkm(kmsexta);
    }
        //sabado
    printf("trabalhou sabado? 1(sim) 2 (nao)");
     scanf("%i", &sabado);
     if (sabado == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &sabadoentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmsabado);

         totalentregassegundas = valorentregas(sabadoentregas);
        totalkmsegunda= valorkm(kmsabado);
    }
            //dominga
    printf("trabalhou domingo? 1(sim) 2 (nao)");
     scanf("%i", &domingo);
     if (domingo == 1){
         totaldias ++;
        printf("quantas entregas foram feitas?\n");
        scanf("%i", &domingoentregas);

        printf("quantos km foram percorridos?");
        scanf("%i", &kmdomingo);

         totalentregassegundas = valorentregas(domingoentregas);
        totalkmsegunda= valorkm(kmdomingo);
    }
//////////////////////////////////////////°relátório°/////////////////////////////
printf("\nsegunda: %s", segunda == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", segundaentregas);
printf("\n km percorridos: %i", kmsegunda);
printf("\n valor a receber: R$ %.2f", totalentregassegundas + totalkmsegunda);

printf("\nterca: %s", terca == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", tercaentregas);
printf("\n km percorridos: %i", kmterca);
printf("\n valor a receber: R$ %.2f", totalentregasterca + totalkmterca);

printf("\nquarta: %s", quarta == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", quartaentregas);
printf("\n km percorridos: %i", kmquarta);
printf("\n valor a receber: R$ %.2f", totalentregasquarta + totalkmquarta);

printf("\nquinta: %s", quinta == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", quintaentregas);
printf("\n km percorridos: %i", kmquinta);
printf("\n valor a receber: R$ %.2f", totalentregasquinta + totalkmquinta);

printf("\nsexta: %s", sexta == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", sextaentregas);
printf("\n km percorridos: %i", kmsexta);
printf("\n valor a receber: R$ %.2f", totalentregassabado + totalkmsabado);

printf("\nsabado: %s", sabado == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", sabadoentregas);
printf("\n km percorridos: %i", kmsabado);
printf("\n valor a receber: R$ %.2f", totalentregassabado + totalkmsegunda);

printf("\ndomingo: %s", domingo == 1? "sim" : "não");
printf("\nQuatidade de entragas: %i", domingoentregas);
printf("\n km percorridos: %i", kmdomingo);
printf("\n valor a receber: R$ %.2f", totalentregasdomingo + totalkmdomingo);

printf("\ntotal Semanal");
printf("\nTotal de dias trabalhados: %i", totaldias);
int totalentregas = segundaentregas + tercaentregas + quartaentregas + quintaentregas + sextaentregas + sabadoentregas + domingoentregas;
printf("\n total das entregas é de %i", totalentregas);
int totalkm = kmsegunda +kmterca+kmquarta+kmquinta+kmsexta+kmsabado+kmdomingo;
printf("\n o total de km rodado é de %i", totalkm);

printf("\n media entregas por dia %i", totalentregas / totaldias);

float total = totalentregasdomingo + kmdomingo +totalentregassegundas+kmsegunda + totalkmquinta+ kmquinta
    +totalentregasquarta+ kmquarta
    +totalentregasterca+ kmterca
    +totalentregassexta+ kmsexta
    +totalentregassabado + kmsegunda;
    printf("\n media valor por dia %,2f", total);

    /// ganhou bonus 
    int media = totalentregas/totaldias;
    if (totaldias == 7 && totalkm >= 200 && media >= 26){
        printf("\n bonus de R$178,99");
    }

    return 0;
}