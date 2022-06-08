#include <stdio.h>

int main(void)
{
    float initialExpense, finalExpense;

    scanf("%f", &initialExpense);

    finalExpense = initialExpense / 1.12 + 15;

    printf("%.2f", finalExpense);

    return 0;
}