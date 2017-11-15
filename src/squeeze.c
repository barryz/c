#include <stdio.h>

void squeeze(char *s, int c);
/*
void squeeze(char s[], int c);
void squeeze(char *s, int c);
void squeeze(char *, int);
void squeeze(char [], int);
*/

int main(void)
{
    const int SIZE = 11;
    char f = 'L';
    char FFFF[SIZE] = {'H',
                       'E',
                       'L',
                       'L',
                       'O',
                       'W',
                       'O',
                       'R',
                       'L',
                       'D',
                       '\0'};
    printf("Before squeeze: %s\n", FFFF);
    squeeze(FFFF, f);
    printf("After squeeze: %4s\n", FFFF);
    return 0;
}

void squeeze(char *s, int c)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
            s[j++] = s[i];
            /*
            equals:
            s[j] = s[i]; j++;
            */
        }
    }
    s[j] = '\0';
    return;
}
