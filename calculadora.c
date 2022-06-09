/**
Calculadora
O programa deve iniciar pedindo para o usuário fornecer dois números, podendo ser inteiros ou não.
O usuário deve informar, também, a operação a ser efetuada: soma, subtração, divisão ou multiplicação.
Para cada uma das operações devem ser implementadas funções separadas.
Informar o sucesso ou não da operação com o código de retorno da função.
**/

#include <stdio.h>
#include <stdlib.h>

float soma(float x, float y);
float subtracao(float x, float y);
float multiplicacao(float x, float y);
float divisao(float x, float y);



int main(void)
{
    float x, y; int op;
    printf("Digite dois numeros\n");
    scanf("%f%f", &x, &y);
    printf("Digite a operacao desejada\n1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao.\n");
    scanf("%d", &op);

    switch(op)
    {
        case 1:
        printf("Resultado = %.2f\n", soma(x, y));
        break;
        case 2:
        printf("Resultado = %.2f\n", subtracao(x, y));
        break;
        case 3:
        printf("Resultado = %.2f\n", multiplicacao(x, y));
        break;
        case 4:
        printf("Resultado = %.2f\n", divisao(x, y));
        break;
    }
    system("PAUSE");
}

float soma(float x, float y)
{
    return x+y;
}
float subtracao(float x, float y)
{
    return x-y;
}
float multiplicacao(float x, float y)
{
    return x*y;
}
float divisao(float x, float y)
{
    return x/y;
}
