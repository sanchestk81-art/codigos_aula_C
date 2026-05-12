#include <stdio.h>

// que jesus me abençoe nessa atividade, e que ele saiba o que está fazendo
// pq eu não sei;
int main()
{
    int i = 0;
    int res = 0;
    int tabuada = 0;
    
    

    do{
        printf("\n qual tabuada deseja saber? ou clique 0 para sair");
        scanf("%i", &tabuada);

       while(i <=10){
        
        res = i * tabuada;
        printf("\n%i x %i", tabuada, i, res);
        i++;
       }
       i = 0;
    } while (tabuada != 0);
    printf("Obrigado.");
    

    return 0;
}
