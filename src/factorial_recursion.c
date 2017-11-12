#include <stdio.h>

long factorialLoop(int n);
long factorialRecursion(int n);

int main(void)
{
    int num = 12;
    printf("loop: %d factorial = %ld\n", num, factorialLoop(num));
    printf("recursion: %d factorial = %ld\n", num, factorialRecursion(num));
}

long factorialLoop(int n)
{
    long ans;
    for (ans = 1; n > 1; n--)
    {
        ans *= n;
    }
    return ans;
}

long factorialRecursion(int n)
{
    long ans;
    if (n > 0)
    {
        ans = n * factorialRecursion(n - 1);
    }
    else
    {
        ans = 1;
    }

    return ans;
}