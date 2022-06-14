#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include<time.h>
int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    char cont[1] = {'s'};

    while(cont[0] == 's')
    {
        int t, r;
        printf("Eu tenho um número entre 1 e 1000.\nVocê consegue descobrir qual é?\nDigite sua primeira tentativa.\n");
        do
        {
            r = rand() % 1000;
        }while(r == 0);
        //printf("DEBUG: r = %d\n", r);
        do
        {
            scanf("%d",&t);
            if(t > r) printf("Muito alto. Tente novamente.\n");
            else if(t<r) printf("Muito baixo. Tente novamente.\n");
            else if(t == r) printf("Excelente! Você descobriu o número!\nGostaria de jogar novamente (s ou n)?\n");
        }while(t != r);
        scanf("%s", &cont[0]);
    }
}
