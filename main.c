#include <stdio.h>
#include <stdlib.h>
//Crie um programa que remova todos os espaços em branco de uma string.tamanho máximo 200 cada string .
int main()
{
    char frase[201], frase2[201];
    int i, j=0;
    scanf("%[^\n]", &frase, &frase2);

    for(i=0; frase[i] != '\0';i++)
    {
        if( frase[i] == ' ')
        {
            continue;
        }

        else
        {
            frase2[j++] = frase[i];

        }
    }
    printf("string:%s",frase2);
    return 0;
}
