#include <stdio.h>


void numChange(int * u,  int * v);

int main(void)
{
    // declare a pointer which type is int
    int * pi;
    // declare a pointer which type is float
    float * f;

    int a = 5;
    printf("a's address is %p\n", &a);
    printf("a's value is %d\n", *&a);

    int x = 5;
    int y = 6;
    printf("Before change: x = %d  y = %d\n", x, y);
    numChange(&x, &y);
    printf("After change: x = %d  y = %d\n", x, y);
}

void numChange(int * u, int * v)
{
    int temporary;
    temporary = *u;
    *u = *v;
    *v = temporary;
}
