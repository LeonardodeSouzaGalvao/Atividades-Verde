#include <stdio.h>
#include <stdlib.h>
//Escreva um programa que quebre uma string em palavras e as imprima.Terminadores de uma palavra sera o espaco em branco e o final da frase. Tamanho máximo 200 cada string


int main()
{
    char palavra[201], outrapalavra[201];
    int i, j=0;
    scanf("%[^\n]", &palavra);

    for(i=0; palavra[i] != '\0'; i++)
        {
            if(palavra[i] == ' ')
                {
                    printf("%s\n", outrapalavra);
                    outrapalavra[j] = '\0';
                    j=0;



                }
            else
                {
                   outrapalavra[j++] = palavra[i];
                }

        }
        outrapalavra[j] = '\0';
        if (j > 0)
        printf("%s\n", outrapalavra);
    return 0;
}
