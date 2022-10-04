#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b,c,x,y;
        scanf("%ld %ld %ld %ld %ld",&a,&b,&c,&x,&y);
        if(a>x&&b>y)
        printf("YES\n");

        else if(x>=a&&y>=b)
        {
            if(((x-a)+(y-b))>c)
            {
                printf("NO\n");
            }
            else
            printf("YES\n");
        }
        else if(a>=x)
        {
            if(c<y-b)
            {
                printf("NO\n");
            }
            else
            printf("YES\n");
        }
        else
        {
            if(c<x-a)
            {
                printf("NO\n");
            }
            else
            printf("YES\n");
        }
        


    }

    return 0;
}