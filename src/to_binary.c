#include <stdio.h>

void toBinary(unsigned long n);

int main(void)
{
    unsigned long number;

    printf("Enter an integer (q or other words to quit): \n");
    while (scanf("%lu", &number) == 1)
    {
        printf("Binary equal: ");
        toBinary(number);
        putchar('\n');
        printf("Enter an integer (q or other words to quit): \n");
    }
    printf("Done.\n");
    return 0;
}

void toBinary(unsigned long n)
{
    // r represents a remainder
    int r;

    r = n % 2;
    if (n >= 2)
    {
        toBinary(n >> 1); // equal: toBinary(n / 2);
    }
    putchar('0' + r);
    return;
}