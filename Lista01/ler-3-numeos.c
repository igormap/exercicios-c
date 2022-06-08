#include <stdio.h>

int main(void)
{
    int number1, number2, number3, maior, menor;

    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    maior = number1;
    menor = number1;

    if (number2 > maior)
    {
        maior = number2;
    }
    else
    {
        if (number2 < menor)
        {
            menor = number2;
        }
    }
    if (number3 > maior)
    {
        maior = number3;
    }
    else
    {
        if (number3 < menor)
        {
            menor = number3;
        }
    }

    printf("%d", maior - menor);

    return 0;
}