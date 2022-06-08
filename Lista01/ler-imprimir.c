#include <stdio.h>

int main(void)
{
    int number1, number2, number3, soma;

    scanf("%d", &number1);
    scanf("%d", &number2);
    scanf("%d", &number3);

    soma = number1 + number2 + number3;

    printf("%d", soma);

    return 0;
}