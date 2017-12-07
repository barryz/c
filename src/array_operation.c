#include <stdio.h>
#define SIZE 6

int sum(int *start, int *end);
int main(int argc, char *argv[])
{
    int *tPtr;
    int testArray[SIZE] = {20,
                           30,
                           40,
                           50,
                           51,
                           53};
    int total;
    int value;
    total = sum(testArray, testArray + SIZE);
    printf("totals of test array is %d\n", total);
    //
    printf("first element address is %p\n", testArray);
    tPtr = testArray;
    value = *tPtr++;
    printf("second element address is %p, and value is %d\n", tPtr, value);
    return 0;
}

int sum(int *start, int *end)
{
    int total;
    while (start < end)
    {
        total += *start;
        start++;
        // also equals to:  total += *(start++);
    }
    return total;
}