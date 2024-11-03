#include <stdio.h>

typedef struct
{
    int     c;
    char    x[20];
    float   v;
}sadio;

int main()
{
    sadio mane;
    mane.c = 42;
    mane.x[0] = 'c';
    mane.x[1] = 'x';
    mane.x[2] = 'o';
    mane.x[3] = 'v';
    mane.x[4] = '\0';
    mane.v = 1012.390;
    printf("%d\n", mane.c);
    printf("%s\n", mane.x);
    printf("%f\n", mane.v);
    return 0;
}