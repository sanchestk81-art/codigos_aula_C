#include <stdio.h>

int main(int argc, char const *argv[])
{
    char doces[5] [40]= {  
        "Cookies", "docinhos","bolos", "dounut", "cupcake"
    };

    printf("\n Ola, sou Kishan o assistente virtual da 'tigres confeiteiros'");
    printf("\ntemos aqui o nosso cardapio:");

    printf("\n-----Menu tigres de ouro-----");
    for (int i = 0; i < 4; i++)
    {
        printf("\n %s", doces[i]);
        printf("qual dos doces você gostaria de provar? --- selecione ");
        
        
    }
    
    

    

    




    return 0;
}
