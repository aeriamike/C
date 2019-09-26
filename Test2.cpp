#include <stdio.h>

int main()
{
    int price = 0;

    printf("How much money do you have left?:");
    scanf("%d", &price);

    int change = 100 - price;

    printf("I have %d dollars remaining in my pocket.\n", change);

    return 0;
}
