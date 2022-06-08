#include <stdio.h>

int main(void)
{
    int tempTotal, hora, min, seg, resto;

    scanf("%d", &tempTotal);

    hora = tempTotal / 3600;
    resto = tempTotal % 3600;
    min = resto / 60;
    resto = resto % 60;
    seg = resto;

    if (hora >= 24)
    {
        hora %= 24;
    }

    printf("%02d:%02d:%02d", hora, min, seg);

    return 0;
}