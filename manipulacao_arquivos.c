#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int c;
    char entrda[121];
    char saida[121];

    FILE * e;
    FILE * s;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%120s", entrda);
    
    printf("Digite o nome do arquivo de saida: ");
    scanf("%120s", saida);

    e = fopen(entrda, "rt");
    if (e == NULL)
    {
        printf("Não foi possivel abrir o arquivo de entrada");
        return 1;
    }
    s = fopen(saida,"wt");
    if (s == NULL)
    {
        printf("Não foi possivel abrir o arquivo de saida");
        fclose(e);
        return 1;
    }
    while ((c = fgetc(e)) != EOF)
    {
        fputc(toupper(c),s);
    }
    
    fclose(e);
    fclose(s);

    return 0;
}