#include <stdio.h>

int main(void)
{
    int h1, h2, m1, m2, s1, s2, tempAgora, tempDuracao, tempDesp;
    int hora, min, seg, resto;

    scanf("%d", &h1);
    scanf("%d", &m1);
    scanf("%d", &s1);
    scanf("%d", &h2);
    scanf("%d", &m2);
    scanf("%d", &s2);

    tempAgora = s1 + (m1 * 60) + (h1 * 3600);
    tempDuracao = s2 + (m2 * 60) + (h2 * 3600);

    tempDesp = tempAgora + tempDuracao;

    hora = tempDesp / 3600;
    resto = tempDesp % 3600;
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