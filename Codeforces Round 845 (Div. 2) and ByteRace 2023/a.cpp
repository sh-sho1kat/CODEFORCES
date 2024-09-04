#include <stdio.h>

int main()
{
    int x = 5;
    // scanf("%d", &x);
    int p = --x + x--;
    printf("%d", p);
}