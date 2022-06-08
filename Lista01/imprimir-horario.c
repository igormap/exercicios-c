#include <stdio.h>

int main(void)
{
    int h, m, s, segundos;

    scanf("%d", &h);
    scanf("%d", &m);
    scanf("%d", &s);

    segundos = s + (m * 60) + (h * 3600);

    printf("%d", segundos);

    return 0;
}