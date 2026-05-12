#include <stdio.h>

int main(int argc, char const *argv[])
{
    char lanches[4][20] = { // 4 sendo a quantidade de variaveis e 20 sendo a quantidade de palavras
        "Rodeio", "whopper","cheddar Duplo", "big king"
    };

    printf("-----Meus lanches favoritos-----");
    for (int i = 0; i < 4; i++)
    {
        printf("\n %s", lanches[i]);
    }
    
    return 0;
}
